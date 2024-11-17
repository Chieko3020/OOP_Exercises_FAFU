#include <iostream> 
using namespace std;

class A{ 
public: 
	A() { cout<<"构造A"<<endl;} 
	~A(){ cout<<"==>销毁A"<<endl;}
};

class B:public A{
public: 
	B() { cout<<"构造B"<<endl;}
	~B(){ cout<<"==>销毁B"<<endl;}
};

class C:public B{
public: 
	C() { cout<<"构造C"<<endl;}
	~C(){ cout<<"==>销毁C"<<endl;}
	//B b;  //不要这个B成员
	//A a;  //不要这个A成员
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
//本例中，类C继承自类B，B为C的基类；类B继承自类A，A为B的基类
//创建对象c时，先调用基类A的构造函数，然后调用基类B的构造函数，再调用对象c的构造函数
//销毁对象c时，先调用对象c的析构函数，然后调用基类B的析构函数，再调用基类A的析构函数