/* 
声明一个基类BaseClass，从它派生出类DerivedClass。
（1）基类BaseClass有成员函数fn1()和fn2()，fn1()是虚函数。
（2）派生类DerivedClass也有成员函数fn1()和fn2()。
（3）在main()主函数中声明一个DeriveClass的对象，分别用BaseClass和DerivedClass类型的指针指向
该DerivedClass的对象，并通过指针调用fn1()和fn2()，编译程序并观察运行结果，解释程序执行原理。
*/
#include <iostream>
using namespace std;

class BaseClass{	//基类
public:
	virtual void fn1(){
		cout<<"基类BaseClass:fn1()"<<endl;
	}

	void fn2(){
		cout<<"基类BaseClass:fn2()"<<endl;
	}
};

class DerivedClass:public BaseClass{	//派生类
public:
	void fn1(){
		cout<<"派生类DerivedClass:fn1()"<<endl;
	}
	
	void fn2(){
		cout<<"派生类DerivedClass:fn2()"<<endl;
	}
};

int main(){
	DerivedClass d;			//派生类对象d
	
	BaseClass *bp = &d;		//基类指针 -> 指向：派生类对象d
	DerivedClass *dp = &d;	//派生类指针 -> 指向：派生类对象d
/*
基类指针指向基类对象：调用基类虚函数与非虚函数
基类指针指向派生类对象：调用虚函数时，调用派生类函数；调用非虚函数时，调用派生类中基类部分非虚函数
派生类指针指向派生类对象：调用派生类虚函数与非虚函数
*/
	bp->fn1();	//派生类				
	bp->fn2();	//基类
	cout<<"------------------"<<endl;

	dp->fn1();	//派生类
	dp->fn2();	//派生类
	
}
