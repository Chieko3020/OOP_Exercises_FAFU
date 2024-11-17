/* 
�붨��һ����ͨ�����ࣨVehicle��������У�
��1�����ԣ��ٶȣ�double�ͱ���speed����λ�ã�double�ͱ���xp, double�ͱ���yp���ȣ�
��2����������ʼ������void init(double speed, double x, double y)�������ٶ�void setSpeed(double speed)������λ��void setPosition(double x, double y)���ƶ�λ��void move(double x, double y)������void speedUp(double t=1.2)����Ĭ�ϼ��ٶ�1.2��������void speedDown(double t=0.8)����Ĭ�ϼ��ٶ�0.8������ʾ��ͨ����״̬��Ϣvoid display()�ȣ�

Ȼ����������main()��ʵ����һ����ͨ���߶��󣬶�Vehicle���в��ԡ���1��Ϊ�����ݳ�Ա��ֵ��������speed, x, y��ֵ��������ӡ����ö�����ٶȺ�λ����Ϣ����2���ֱ���ü��١����ٵķ������ٶȽ��иı䣬������ı��Ķ������Ϣ���ٶȺ�λ�ã���
��ͨ������Vehicle�Ĳ���Դ�������£�
*/
#include <iostream>
using namespace std;
class Vehicle{
//�ڴ˴�����ȱ�ٵ�Vehicle��ġ����ݳ�Ա+��Ա������
//******************************************************
private: 
double speed;
double xp;
double yp;
public: 
void init(double s,double x, double y)
{
  speed=s;
  xp=x;
  yp=y;
}
void setSpeed(double s)
{
  speed=s;
}
void setPosition(double x,double y)
{
  xp=x;
  yp=y;
}
void move(double x,double y)
{
  xp+=x;
  yp+=y;
}
void speedUp(double t=1.2)
{
  speed*=t;
}
void speedDown(double t=0.8)
{
  speed*=t;
}
void display()
{
	cout<<"Position:("<<xp<<","<<yp<<"), Speed:"<<speed<<endl;
}



//================================================

};

int main(){
	Vehicle object; 

	object.init(60, 5, 5);
	cout<<"��ʼλ�ú��ٶȣ�";
	object.display();

	object.speedUp(1.5);
	cout<<"���ٶ�1.5��֮��";
	object.display();

	object.speedUp();//default para...
	cout<<"Ĭ�ϼ��ٶȣ�1.2����֮��";
	object.display();

	object.speedDown(0.5);
	cout<<"����0.5��֮��";
	object.display();

	object.speedDown();//default para...
	cout<<"Ĭ�ϼ��٣�0.8����֮��";
	object.display();

	object.move(14, 9);
	cout<<"λ���ƶ���(14,9)֮��";
	object.display();

	object.setSpeed(80);
	cout<<"�ٶ�����Ϊ80֮��";
	object.display();

	object.setPosition(87,98);
	cout<<"λ������Ϊ(87,98)֮��";
	object.display();
	
	return 0;
}
