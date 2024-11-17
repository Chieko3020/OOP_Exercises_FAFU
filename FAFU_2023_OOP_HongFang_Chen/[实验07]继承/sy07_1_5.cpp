/* 
定义一个汽车类Auto，包括轮胎个数num(int)、汽车颜色color(string)、车身重量weight(double)、
速度speed(double)等成员变量。请： 
（1）定义若干重载的构造函数以实现不同方法的汽车构造。
（2）至少要求：汽车能够加速void speedUp(double time=1.2)、
减速void speedDown(double time=0.8)（速度按[倍]计算）、停车void stop()。
（3）定义一个小汽车类Car，继承自汽车类Auto，并增加空调airCondition(string)、
CD机cd（string）等成员变量。此外，覆盖加速void speedUp(int upNumber=5)、
减速的方法void speedDown(int downNumber=5)，使得加速和减速按按‘加、减’进行计算。
主函数main()中已提供了该类的相应测试代码。部分程序代码如下：
*/
#include <iostream>
#include <string>
using namespace std;

class Auto{//定义汽车类Auto
	int num;//轮胎个数
	string color;//汽车颜色
	double weight;//车身重量
protected:
	double speed;//速度
public:
	Auto(int sp){
		speed = sp;
		
		num=4;
		color = "黑色";
		weight=1.3;
	}
	
	Auto(int nu=4, string co="银色", double we=1.3, double sp=80){
		num=nu;
		color = co;
		weight=we;
		speed = sp;
	}
	
	//定义定义加速&减速 函数
	//*******************************************
	void speedUp(double time=1.2)
	{
		speed *= time;
	}
	void speedDown(double time=0.8)
	{
		speed *= time;
	}
	
	//===========================================
	
	void stop(){
		speed = 0;
	}
	
	void display(){
		cout<<"轮胎个数="<<num<<", 汽车颜色="<<color<<", 车身重量="<<weight<<", 速度="<<speed<<endl;
	}
};

class Car:public Auto{//定义小汽车类Car
	string airCondition;//空调
	string cd;			//CD
public:
	//定义派生类的构造函数，注意使用初始化参数列表构造基类
	//*******************************************
	Car(string a="格力",string c="万利达")
	{
		airCondition = a;
		cd = c;
	}
	
	

	//==========================================
	  
	  void speedUp(int upNumber=5){
		  Auto::speed += upNumber;
	  }
	  
	//重载（覆盖）加速&减速函数
	//*******************************************
  	void speedDown(int downNumber=5){
		  Auto::speed -= downNumber;
	  }



	//===========================================
	  void display(){
		  Auto::display();
		  
		  cout<<"空调="<<airCondition<<", CD="<<cd<<endl;
	  }
};

int main(){
	Car sampleCar;
	sampleCar.display();
	cout<<"-------------------"<<endl;

	sampleCar.speedUp(20);//速度增加20
	sampleCar.display();
		cout<<"-------------------"<<endl;

	sampleCar.speedDown(8);//速度减8
	sampleCar.display();
	cout<<"-------------------"<<endl;

	sampleCar.Auto::speedUp(2);//速度翻倍
	sampleCar.display();
	cout<<"-------------------"<<endl;
	
	sampleCar.Auto::speedDown(0.5);//速度减半
	sampleCar.display();
	//cout<<"-------------------"<<endl;
		
}
