/*编写一个哺乳动物类Mammal，再由此派生出狗类Dog。 
（1）二者都声明有void Speak()成员函数，该函数在基类Mammal中被声明为虚函数；
（2）在主函数main()中声明一个Dog类的对象d，通过此对象调用Speak函数，观察运行结果。
再者，声明一个Mammal类的指针，指向实例化的Dog类对象d，通过指针调用Speak()函数，观察运行结果。
*/
#include <iostream>
using namespace std;

class Mammal{
public:
	virtual void Speak()=0;
};

class Dog:public Mammal{
public:
	void Speak(){
		cout<<"狗在叫！:("<<endl;
	}
};

int main(){
	Dog d;		//Dog类的对象d
	d.Speak();		//直接通过派生类访问其Speak函数
	cout<<"------------------------"<<endl;

	Mammal *dp = &d;
	dp->Speak();	//通过抽象基类指针指向派生类对象，访问派生类中Speak函数
	
}
