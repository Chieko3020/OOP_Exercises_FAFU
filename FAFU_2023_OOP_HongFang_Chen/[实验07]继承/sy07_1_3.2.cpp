/* 
派生类重载或重定义基类成员函数，实现基类成员函数的名字隐藏。
用于验证：派生类对基类成员函数的重定义或重载，会影响基类成员函数在派生类中的可见性，
基类的同名成员函数会被派生类重载的同名函数所隐藏。
*/
#include <iostream>
using namespace std;
class A {
    int a;
public: 
	void setX(int i){a=i; }
	void set(int i){a=i; }

	void print(){
		cout<<"A::print(), a="<<a<<endl;
	}
}; 

class B: public A {
	int m,n;
public: 
    void set(int p, int k){m=p; n=k;}
	void set(int i, int j, int k){
		A::set(i);
		m=j;
		n=k;
	}

	void print(){
		A::print();
		cout<<"B::print(), m="<<m<<", n="<<n<<endl;
	}
};


int main(){
    B b;
	b.set(1,3);	    //对象b的基类子对象a未初始化
	b.print();	    //对象b的成员m,n通过子类set函数(int,int)重载初始化

	b.set(5,6,7);	//对象b的基类子对象a通过子类set函数(int,int,int)重载赋值
	b.print();	    //对象b的成员m,n通过子类set函数(int,int,int)重载赋值
	//b.set(10);//基类的set()方法  被重载（没有被重定义），被派生类隐藏了
	b.A::set(10);   //对象b的基类子对象a通过限定作用域访问基类set函数赋值
	b.A::print();
	
	b.setX(8);      //对象b的基类子对象a通过直接访问基类setX函数赋值
	b.print();      //对象b的成员m,n值不变
	
}
