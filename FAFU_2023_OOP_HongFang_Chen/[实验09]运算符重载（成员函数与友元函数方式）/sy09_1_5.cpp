/* 
设计一个计数器Counter类，用类成员函数的方式重载自增运算符"++"，实现计数器的自增，
用友元函数的方式重载自增运算符"--"，实现计数器的自减。
*/
#include<iostream>
using namespace std;

class Counter{
private:
	int n;
public:
	Counter(int i=0){
		n=i;
	}
	
	//在此声明函数成员前自增 和后自增
	//***************************************
	Counter& operator++();
	Counter operator++(int);
	//======================================
	//在此声明友元函数前自减 和后自减
	//***************************************
	friend Counter& operator--(Counter& newc);
	friend Counter operator--(Counter &newc, int);
	//======================================

	void display();
};

//在此定义函数成员前自增 和后自增
//***************************************
Counter& Counter::operator++(){
	++n;
	return *this;
}
Counter Counter::operator++(int){
	Counter c(*this);
	++n;
	return c;
}

//======================================

//在此定义友元函数前自减 和后自减
//***************************************
 Counter& operator--(Counter& c){
 	--c.n;
 	return c;
 }
 Counter operator--(Counter& c,int){
 	Counter s(c);
	--c.n;
	return s;
 }

 
 
 
//======================================
	
void Counter::display(){
	cout<<"Counter Number="<<n<<endl;
}

int main(){
	Counter a,b;
	b=++a;			
	b.display();
	a.display();
	cout<<"------------------"<<endl;

	b=a++;			
	b.display();
	a.display();
	cout<<"==================="<<endl;

	b=--a;			
	b.display();
	a.display();
	cout<<"------------------"<<endl;

	b=a--;			
	b.display();
	a.display();
	
}
