/* 
����һ��ԲCircle�ࡣ
��1���������ݳ�Ա�뾶radius��double���ͣ���
��2�����г�Ա����void init(double a)����������Բ�İ뾶����Ա����double getArea()�����ڼ��㲢����Բ�������
��3��Բ����Circle�Ĳ��Դ����ѱ�д��������main()�У�����Ĳ���Դ�������£�
*/
#include<iostream>
using namespace std;
#define PI 3.14159

class Circle{
//�ڴ˶���Circle�����ݳ�Ա+��Ա������
//************************************************
public: 
void init(double a)
{
  radius=a;
}
double getArea()
{
  return PI*radius*radius;
}
private: 
double radius;


//================================================
};

int main(){
	Circle c;					//����һ��Բ���󣨱�����

	double rad=4.0;
	c.init(rad);				//����Բ�İ뾶

	double area = c.getArea();	//���Բ�����
	cout<<"�뾶Ϊ"<<rad<<"��Բ�����Ϊ��"<<area<<endl;
	
}
