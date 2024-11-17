#include <iostream>
using namespace std;
class Automobile
{
protected:
    int wheels;
    double price;
public:
    Automobile(double p,int w = 4)
    {
        wheels = w;
        price = p;
    }
    void display()
    {
        cout << "Automobile->轮数：" << wheels << ",价格：" << price << endl;
    }
};
class Car : virtual public Automobile
{
protected:
    int seats;
public:
    Car(double p,int w=4, int s=5):Automobile(p,w)
    {
        seats = s;
    }
    void display()
    {
        cout << "Car->轮数：" << wheels << ",价格：" << price << ",座位数："<<seats<<endl;
    }
};
class Truck : virtual public Automobile
{
protected:
    double carrying;
public:
    Truck(double p,int w=4, double c=3.5):Automobile(p,w)
    {
        carrying = c;
    }
    void display()
    {
        cout << "Truck->轮数：" << wheels << ",价格：" << price <<",载重量："<<carrying<< endl;
    }
};
class CarTruck : public Truck, public Car
{
    public :
        CarTruck(double p, int w=4, int s = 5, double c = 3.5) : Automobile(p, w), Car(p, w, s), Truck(p, w, c)
        {}
    void display()
    {
        cout << "Truck->轮数：" << wheels << ",价格：" << price  <<",座位数："<<seats<<",载重量："<<carrying<< endl;
    }
};
int main()
{
    Automobile mobile(4.2, 3);
	mobile.display();			//L1

	Car car(5.6);
	car.display();				//L2

	Truck truck(6.3, 6);
	truck.display();			    //L3

	CarTruck cartruck(8.4, 5, 7);
	cartruck.display();			//L4
    
    system("pause");
    return 0;
}