/* 
声明一个基类BaseClass，从它派生出类DerivedClass。
（1）在BaseClass中声明虚析构函数，分未声明为虚析构函数和声明为析构函数两种情形；
（2）在主函数main()中将一个动态分配的DeriveClass对象地址赋给一个BaseClass的指针，然后通过该指针释放对象。
  a）BaseClass的析构函数未声明为析构函数时，观察运行结果。b）BaseClass的析构函数声明为虚析构函数时，再观察运行结果。
*/
#include <iostream>
using namespace std;
class BaseClass{	//基类
public:
	//virtual ~BaseClass(){
	virtual ~BaseClass(){
		cout<<"基类BaseClass析构"<<endl;
	}
};

class DerivedClass:public BaseClass{	//派生类
public:
	~DerivedClass(){
		cout<<"派生类DerivedClass析构"<<endl;
	}
};
/*
基类非虚析构函数：
	基类指针指向基类对象，调用基类虚构函数
	基类指针指向派生类对象，调用派生类中基类部分析构函数
	派生类指针指向派生类对象，调用派生类析构函数后，调用派生类中基类部分析构函数
基类虚析构函数：
	基类指针指向基类对象，调用基类虚构函数
	基类指针指向派生类对象，调用派生类析构函数后，调用派生类中基类部分析构函数
	派生类指针指向派生类对象，调用派生类析构函数后，调用派生类中基类部分析构函数
*/
int main(){
	BaseClass *bp = new DerivedClass();	//基类指针 -> 指向：派生类对象

	delete bp;	//先派生类，后基类	
	
}
