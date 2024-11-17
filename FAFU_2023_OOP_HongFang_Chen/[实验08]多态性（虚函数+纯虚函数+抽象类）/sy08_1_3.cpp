#include <iostream> 
#include <cmath>
using namespace std;

class Shape {      // 抽象类的定义
public:
		
	//在此定义纯虚函数area()和perimeter()
	//*******************************************
	virtual double area()=0; 
	virtual double perimeter()=0;
	//==========================================
};

class Circle:public Shape {        // 圆类
protected:
	double radius;
public:
	Circle(double r){
		radius=r;
	}
	
	//重定义纯虚函数area()和perimeter()
	//*******************************************
	virtual double area()
	{
		return 3.14*radius*radius;
	}
	virtual double perimeter()
	{
		return 6.28*radius;
	}
	//===========================================
};

class OuterSquare:public Circle {     //外切正方形
protected:
	double border1;//边长
public:
	OuterSquare(double b):Circle(b){
		border1=2*b;
	}
	
	//重定义纯虚函数area()和perimeter()
	//*******************************************
	virtual double area()
	{
		return border1*border1;
	}
	virtual double perimeter()
	{
		return 4*border1;
	}
	//===========================================
};

class InnerSquare:public Circle{ // 内接正方形
protected:
	double border2;//边长
public:
	InnerSquare(double b):Circle(b)	{
		border2=sqrt(2*b*b);//x^2 + x^2 = (2*radius)^2
	}
	
	//重定义纯虚函数area()和perimeter()
	//*******************************************
	virtual double area()
	{
		return border2*border2;
	}
	virtual double perimeter()
	{
		return 4*border2;
	}
	//===========================================
};

int main(){
	Shape *s;				//基类指针
	
	/*(1)基类指针 -> 指向：派生类“圆”对象*/
	s=new Circle(5.00);		//基类指针 -> 指向：派生类“圆”对象
    cout<<"面积："<<s->area()<<", 周长："<<s->perimeter()<<endl;
	cout<<"-----------------------------"<<endl;
	
	/*(2)基类指针 -> 指向：“孙子一代”的派生类“外切正方形”对象*/
	s=new OuterSquare(5.00);
	cout<<"面积："<<s->area()<<", 周长："<<s->perimeter()<<endl;
	cout<<"-----------------------------"<<endl;

	/*(3)基类指针 -> 指向：“孙子一代”的派生类“内接正方形”对象*/
	s=new InnerSquare(5.00);
    cout<<"面积："<<s->area()<<", 周长："<<s->perimeter()<<endl;	
	cout<<"-----------------------------"<<endl;
	
}
