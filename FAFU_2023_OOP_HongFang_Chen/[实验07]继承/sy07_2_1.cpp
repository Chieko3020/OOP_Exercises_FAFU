/* 
定义一个名为Vehicle的交通工具基类。该类中包含String类型的成员属性brand（商标）和color（颜色），
还应包含成员方法run（行驶，在控制台显示"我已经开动了"）和showInfo（显示信息，在控制台显示商标和颜色），
并编写构造方法初始化其属性。
（1）编写Car（小汽车）类继承于Vehicles类，增加int型成员属性seats（座位），
增加成员方法showCar（在控制台显示小汽车的信息），并编写构造方法。
（2）编写Truck（卡车）类继承于Vehicles类，增加float型成员属性load（载重），
增加成员方法showTruck（在控制台显示卡车的信息），并编写构造方法。
在main方法中测试以上各类。
*/
#include <iostream>
#include <string>
using namespace std;


class Vehicle{//交通工具基类
	string brand;	//商标
	string color;	//颜色
public:
	Vehicle(string _brand="HongQi", string _color="Red"){
		brand = _brand;
		color = _color;
	}
	
	void run(){
		cout<<"我已经开动了"<<endl;
	}
	
	void showInfo(){
		cout<<"商标="<<brand<<", 颜色="<<color<<endl;
	}
};

class Car:public Vehicle{//小汽车类
	int seats;//座位
public:
	
	//Car的构造函数，注意采用初始化参数列表对基类进行构造
	//*******************************************
	Car(string b,string c,int s):Vehicle(b, c)
	{
		seats = s;
	}
	
	
	//===========================================

	void showCar(){
		Vehicle::showInfo();
		cout<<"Car的座位="<<seats<<endl;
	}
};

class Truck:public Vehicle{//卡车类
	float load;//载重
public:

	//Truck的构造函数，注意采用初始化参数列表对基类进行构造
	//*******************************************
		Truck(string b,string c,float l):Vehicle(b, c)
	{
		load=l;
	}
	


	//==========================================

	
	void showTruck(){
		Vehicle::showInfo();
		cout<<"Truck的载重="<<load<<endl;
	}
};

//测试
int main(){
	Vehicle vh("大众","黑色");
	vh.showInfo();
	cout<<"===================================="<<endl;

	Car car("宝马","白色", 5);
	car.showInfo();
	cout<<"----------------------------"<<endl;
	car.showCar();
	cout<<"===================================="<<endl;

	Truck truck("东风","军绿色", 2.4f);
	truck.showInfo();
	cout<<"----------------------------"<<endl;
	truck.showTruck();
	cout<<"----------------------------"<<endl;
		
}
