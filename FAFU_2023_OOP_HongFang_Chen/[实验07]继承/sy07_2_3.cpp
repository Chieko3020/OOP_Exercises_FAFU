#include <iostream>
using namespace std;
class A {
 public: 
    A(int a){ cout<<"Constructing A:"<<a<<endl; }
}; 

class B {
public: 
	int b;
    B(int b){ this->b=b;cout<<"Constructing B:"<<b<<endl;}
}; 

class C {
public: 
    C(int c){ cout<<"Constructing C:"<<c<<endl;}
}; 

class B1:virtual public B, virtual public A{
public: 
    B1(int i):A(i), B(i+10){ cout<<"Constructing B1:"<<i<<endl; }
}; 

class B2:public A, virtual public B {
public: 
    B2(int j):A(j),B(j+100){ cout<<"Constructing B2:"<<j<<endl; }
};

class D: public B2, public B1, virtual public C {
public:
    D(int m,int n): B1(m),B2(n),A(11),B(22),C(33),a(99){ cout<<"Constructing D"<<endl; }
    A a;
}; 

int main()
{ 
	D d(1,2); 
	cout<<d.b<<endl;
	
}
