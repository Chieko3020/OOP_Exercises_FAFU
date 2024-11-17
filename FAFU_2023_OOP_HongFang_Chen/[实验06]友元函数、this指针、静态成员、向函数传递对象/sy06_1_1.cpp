/*
����Boat��Car�����࣬���߶���˽�����ݳ�Աweight(double��)��
����һ�����߹��е���Ԫ����totalWeight(Boat &b, Car &c)�Է��������ߵ������͡�
*/
#include <iostream>
using namespace std;
//�ڴ˶���Boat�ࡢCar��
//***************************************
class Car;
class Boat
{
	private: 
		double weight;

	public:
		Boat(double b)
		{
			weight=b;
		}
		friend double totalWeight(Boat &b, Car &c);
};
class Car
{
	private: 
		double weight;
	public:
		Car(double c)
		{
			weight=c;
		}
		friend double totalWeight(Boat &b, Car &c);	
};
//======================================
//�ڴ˶�����Ԫ����
//***************************************
double totalWeight(Boat &b, Car &c)
{
	return b.weight+c.weight;
}
//======================================
/*���Ժ���*/
int main(){
	Boat boat(12.23);//ʵ����һ��Boat����boat
	Car car(7.36);//ʵ����һ��Boat����boat
	cout<<"���ߵ�������="<<totalWeight(boat, car)<<endl;
   
return 0;
}
