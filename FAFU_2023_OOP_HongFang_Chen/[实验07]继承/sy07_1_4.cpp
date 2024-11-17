#include <iostream> 
#include <cmath>
using namespace std;
#define PI 3.14159


class Point{
	//将Line声明为Point的友元类
	//**************************************	
protected:
	friend class Line;
	//======================================
protected:
	double x, y ; 
	friend class Line;
public:
	Point(){
		x = 0; y = 0; 
	}

	Point(double xv,double yv){
		x = xv; y = yv;
	}

	double Area(){
		return 0;
	}
	
	void Show()	{
		cout<<"x="<<x<<", y="<<y<<endl;
	}
};

class Circle: public Point{
	double radius;
public:
	//定义派生类Circle的无参和有参构造函数
	//*******************************************
	Circle(){};
	Circle(double xx,double yy,double rr)
	{
		x = xx;
		y = yy;
		radius = rr;
	}
	Circle(Circle &c)
	{
		x = c.x;
		y = c.y;
		radius = c.radius;
	}
	//===========================================
	
	double Area(){		//圆的面积
		return PI*radius*radius;
	}
	
	void Show(){		//可以直接访问基类的数据成员
		cout<<"x="<<x<<", y="<<y<<", radius="<<radius<<endl;
	}
};

class Line{
	Point start, end;	//对象成员
public:
	//定义含Point类型对象成员的Line类的“无参”和“有参”构造函数
	//*******************************************
	Line(){};
	Line(double sx, double sy,double ex,double ey)
	{
		start.x = sx;
		start.y = sx;
		end.x = ex;
		end.y = ey;
	}

	//==========================================

	double GetLength()	{
		return sqrt((start.x-end.x)*(start.x-end.x)+(start.y-end.y)*(start.y-end.y));
	}
	
	double Area(){
		return 0;
	}
	
	void Show(){
		cout<<"线段起点:";		start.Show();
		cout<<"线段终点:";		end.Show();
	}
};

int main(){
	/*(1)测试点类*/
	Point pt(0,0);	//定义点pt
	
	cout<<"点的面积："<<pt.Area()<<endl;
	cout<<"点的信息：";
	pt.Show();
	cout<<"-----------------------\n";
	
	/*(2)测试圆类*/
	Circle cl1(100,100,10), cl2(cl1), cl3;//定义圆cl1，cl2，cl3
	
	cout<<"圆cl1的面积："<<cl1.Area()<<endl;
	cout<<"圆cl1的信息：";
	cl1.Show();
	
	cout<<"圆cl2的面积："<<cl2.Area()<<endl;
	cout<<"圆cl2的信息：";
	cl2.Show();
	
	cl3=cl1;
	cout<<"圆cl3的面积："<<cl3.Area()<<endl;
	cout<<"圆cl3的信息：";
	cl3.Show();
	cout<<"-----------------------\n";
	
	/*(3)测试线段类*/
	Line ln1(0,0,100,100);//定义线段ln1
	cout<<"线段ln1的面积："<<ln1. Area()<<endl;
	cout<<"线段ln1的长度："<<ln1. GetLength()<<endl;
	cout<<"线段ln1的信息：";
	ln1.Show();
	
}
