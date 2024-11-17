#include<iostream> 
#include<string>
using namespace std;

class Automobile{//汽车类Automobile的声明与定义
protected:
	string model;                   //型号
	double cylinders_capability;    //排量
	int wheels;                     //轮数
	double price;                   //价格
public:
	//汽车的构造函数
	Automobile(string mod="#",double cl=1.2,int wh=4,double pr=8.2){
		model=mod;
		cylinders_capability=cl;
		wheels=wh;
		price=pr;
	}
	
	//显示汽车的信息
	void display(){
		cout<<"汽车型号："<<model<<", 排量："<<cylinders_capability<<" 升, ";
		cout<<"轮数："<<wheels<<", 价格："<<price<<endl;
	}
};

class Car:public   Automobile{//轿车类Car的声明与定义: 继承自汽车类（虚拟继承）
protected:
	int seats;                     //座位数
	int safeguards;                //保护措施数量
public:
	//Car的构造函数，注意采用初始化参数列表对基类进行构造
	//*******************************************
	Car(string m,double cc,int w,double p,int s,int sg):Automobile(m,cc,w,p)
	{
		seats = s;
		safeguards = sg;
	}



	//==========================================
	//显示轿车的信息
	
	void display(){
		Automobile::display();
		cout<<"Car的座位数："<<seats<<"，保护措施数量："<<safeguards<<endl;
	}
};

class Truck:public   Automobile{//卡车类Truck的声明与定义: 继承自汽车类（虚拟继承）
protected:
	double carrying_capacity;      //载重量
public:
	//Truck的构造函数，注意采用初始化参数列表对基类进行构造
	//*******************************************
	Truck(string m,double cc,int w,double p,double tcc):Automobile(m,cc,w,p)
	{
		carrying_capacity = tcc;
	}

	
	//===========================================

	
	//显示卡车的信息
	void display(){
		Automobile::display();
		cout<<"Truck的载重量："<<carrying_capacity<<"吨"<<endl;
	}
};

class Car_Truck:public Car, public Truck{//皮卡车类Car_Truck的声明与定义: 多重继承自轿车类和卡车类
public: 
	// Car_Truck的构造函数，注意采用初始化参数列表对基类进行构造
	//*******************************************
	Car_Truck(string m="#", double cc=1.2, int w=4, double p=8.2, int s=5, int sg=2, double tcc=2.3) : Car(m, cc, w, p, s, sg), Truck(m, cc, w, p,tcc){};

	//===========================================
	
	//显示皮卡车的信息
	void display(){
		Car::display();
		Truck::display();
	}
	
	//操作：从类Car->修改类Automobile中的数据成员model
	//效果：类car的基类Automobile的model 和 类truck的基类Automobile的model都被修改了(说明：实际仅有一个Automobile基类)
	void reset(){	
		Car::model="!";
	}
};

int main(){
	//Car_Truck ct("##",1.6, 4, 8.4, 5, 3, 0.6);//型号,排量,轮数,价格,座位数,保护措施数量,载重量
	Car_Truck ct1;
	ct1.display();
	cout<<"-----------从类Car->修改类Automobile中的model数据成员之后---"<<endl;

	ct1.reset();//从类Car->修改类Automobile中的数据成员model
	ct1.display(); //显示出两个同样的model, 实际只有一个Automobile基类
	
}
