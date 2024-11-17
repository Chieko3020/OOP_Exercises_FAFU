/* 
声明一个基类BaseClass，从它派生出类DerivedCalss。
BaseClass有成员fn1()、fn2()，DerivedClass也有成员函数fn1()、fn2()。
（1）在main()主函数中实例化DerivedClass类型的对象，
并用DerivedClass的对象访问成员函数fn1()、fn2()以及基类[子]对象中的成员函数fn1()、fn2()；
（2）用BaseClass类型和DerivedClass类型的指针来调用fn1()、fn2()，
观察程序运行结果，理解基类和派生类函数成员的访问方法。
*/
#include <iostream>
using namespace std;

class BaseClass{
public:
	void fn1(){
		cout<<"BaseClass::fn1()"<<endl;
	}
	
	void fn2(){
		cout<<"BaseClass::fn2()"<<endl;
	}
};

class DerivedCalss:public BaseClass{
public:
	void fn1(){
		cout<<"DerivedCalss::fn1()"<<endl;
	}
	
	void fn2(){
		cout<<"DerivedCalss::fn2()"<<endl;
	}
};

int main(){
	DerivedCalss dr;
	dr.fn1();				//直接访问子类成员函数fn1
	dr.fn2();				//直接访问子类成员函数fn2
	cout<<"---------------------"<<endl;
	
	dr.BaseClass::fn1();	//限定作用域访问基类成员函数fn1
	dr.BaseClass::fn2();	//限定作用域访问基类成员函数fn2
	cout<<"---------------------"<<endl;
	
	BaseClass * pt = &dr;
	pt->fn1();	            //指针访问基类成员函数fn1
	pt->fn2();	            //指针访问基类成员函数fn2
	cout<<"---------------------"<<endl;
	
	DerivedCalss *point = &dr;
	point->fn1();			//指针访问子类成员函数fn1
	point->fn2();			//指针访问子类成员函数fn2
	
}
