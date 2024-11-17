/*定义复数类Complex。 
（1）复数由实部r（double类型）、虚部i（double类型）两个部分组成，在类的定义中应包含保存这两部分信息的内容。
（2）在类中定义构造函数，使用户能够在构造对象的同时为对象赋初值。
（3）在类中以友元函数的方式对复数的加法"+"、减法"-"、乘法"*"三个二元运算符进行重载，以实现复数之间的加、减、乘功能。
（4）以友元函数的方式重载输出运算符"<<"，使得Complex类的对象能够显示其自身信息。
（5）编写一段主程序（main函数）测试上述功能，使用户能够通过这段主程序输入复数并进行复数的计算。
*/ 
#include<iostream>
using namespace std;
class Complex{
private:
	double r;
	double i;
public:
	Complex(double real=0.0, double image=0.0){	//定义带默认参数值的构造函数
		r = real;
		i = image;
	}
	
	//在此声明+ - *三个友元函数
	//*******************************************
	friend Complex operator+(const Complex & c1,const Complex &c2);	
	friend Complex operator-(const Complex & c1,const Complex &c2);	
	friend Complex operator*(const Complex & c1,const Complex &c2);	
	
	
	
	//===========================================
	
	friend ostream & operator<<(ostream &os, const Complex & c);	//"<<"（输出）被重载为友元函数
};

//在此定义+ - *三个友元函数
//*******************************************
Complex operator+(const Complex & c1,const Complex &c2){
	Complex t;
	t.r=c1.r+c2.r;
	t.i=c1.i+c2.i;
	return t;
}
Complex operator-(const Complex & c1,const Complex &c2){
	Complex t;
	t.r=c1.r-c2.r;
	t.i=c1.i-c2.i;
	return t;
}
Complex operator*(const Complex & c1,const Complex &c2){
	Complex t;
	t.r=c1.r*c2.r-c1.i*c2.i;
	t.i=c1.i*c2.r+c1.r*c2.i;
	return t;
}




//==========================================

ostream & operator<<(ostream & os, const Complex & c){	
	os<<"("<<c.r<<", "<<c.i<<")";
	
	return os;
}

int main(){
	Complex a(3.0, 4.0);
	Complex b(10.5, 20.5);
	
	Complex c;
	
	c = a+b;
	cout<<c<<endl;	//c.print();
	cout<<"---------------\n";
	
	c=a-b;
	cout<<c<<endl;	//c.print();
	cout<<"---------------\n";
	
	c=a*b;
	cout<<c<<endl; 	//c.print();
	cout<<"---------------\n";
	
}
