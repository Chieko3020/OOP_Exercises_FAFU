/*定义复数类Complex，包含实部r（double类型）、虚部i（double类型）两个数据成员。
（1）定义含默认参数值的构造函数Complex(double real=0.0, double image=0.0)，使用户能够在构造对象的同时为对象赋初值。
（2）以成员函数的方式对复数的加法“+”、减法“-”、乘法“*”三个二元运算符进行重载，以实现复数之间的加、减、乘功能。
（3）以友元函数的方式重载输出运算符“<<”，使得Complex类的对象能够显示其自身信息。 
主函数main()中已提供了该类的相应测试代码。部分程序代码如下： 
*/
#include<iostream>
using namespace std;

class Complex{
private:
	double r;
	double i;
public:
	//在此定义带默认参数值的构造函数Complex(double real=0.0, double image=0.0)
	//*******************************************
	Complex(double real=0.0,double image=0.0)
	{
		r=real;
		i=image;
	}
	//==========================================
	
	Complex operator+(const Complex & c);	//"+"（加号）被重载为成员函数
	Complex operator-(const Complex & c);	//"-"（减号）被重载为成员函数
	Complex operator*(const Complex & c);	//"*"（乘号）被重载为成员函数
	
	friend ostream & operator<<(ostream &os, const Complex & c);	//"<<"（输出）被重载为成员函数
};

//在此定义+ - *三个成员函数，以及友元函数ostream operator<<(ostream &, Complex &)
//*******************************************
Complex Complex::operator+(const Complex & c){
	Complex t(this->r,this->i);
	t.r+=c.r;
	t.i+=c.i;
	return t;
}
Complex Complex::operator-(const Complex & c){
	Complex t(this->r,this->i);
	t.r-=c.r;
	t.i-=c.i;
	return t;
}
Complex Complex::operator*(const Complex & c){
	Complex t(this->r,this->i);
	double tr=t.r;
	t.r=t.r*c.r-t.i*c.i;
	t.i=t.i*c.r+tr*c.i;
	return t;
}
ostream & operator<<(ostream &cout, const Complex & c){
	cout<<"("<<c.r<<", "<<c.i<<")"<<endl;
	return cout;
}




//==========================================

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
