#include <iostream> 
using namespace std;

class A{ 
public: 
	A() { cout<<"构造A"<<endl;} 
	~A(){ cout<<"==>销毁A"<<endl;}
};

class B{
public: 
	B() { cout<<"构造B"<<endl;}
	~B(){ cout<<"==>销毁B"<<endl;}
};

class C{
public: 
	C() { cout<<"构造C"<<endl;}
	~C(){ cout<<"==>销毁C"<<endl;}
	B b;
	A a;
};

int main(){
	C c;
	
}
//直接与间接相对于当前派生类，定义中的为直接继承
//构造函数调用顺序：先调用间接基类的构造函数，再调用直接基类的构造函数
//			      再调用该派生类被声明的对象的构造函数
//				  最后调用该派生类的构造函数
//析构函数调用顺序：与构造函数相反，先调用该派生类的析构函数
//								 再调用该派生类被声明的对象的析构函数
//								 最后调用直接基类的析构函数，再调用间接基类的析构函数
//本例中，类C含有对象b与对象a
//创建对象c时先调用b与a的构造函数再调用c的构造函数
//结束时，先调用c的析构函数，再调用a和b的析构函数