/* 
����һ������ΪMyTime���࣬�����������������ݳ�Ա��ʱ(hour)����(minute)����(second)��Ϊ�˱�֤���ݵİ�ȫ�ԣ���������Ա����Ӧ����Ϊprivate��˽�еģ���
��1��ΪMyTime���ṩ������������"ʱh����m����s"�Ĺ��캯�����Է��㴴��MyTime���͵�ʱ���������ʱ���֡������Ĭ�ϲ���ֵ12:00:02���Է���ʹ�����ܹ��Զ�����ʽ��ʼ�������ʵ����
��2������void display()�����������ڽ�ʱ����Ϣ��ӡ������
��3��������main()�����ṩ�˸������Ӧ���Դ��롣���ֳ���������£�
*/
#include<iostream>
using namespace std;
class MyTime{
private:
	int hour;
	int minute;
	int second;
public:
	//�ڴ˶��� ����Ĭ�ϲ���ֵ�Ĺ��캯��MyTime(int h=12, int m=0, int s=2)
	//**************************************
	MyTime(int h=12,int m=0,int s=2)
	{
		hour=h;
		minute=m;
		second=s;
	}
	
	
	
	//======================================

	void display(){
		cout<<"��ǰʱ��Ϊ: "<<hour<<":"<<minute<<":"<<second<<endl;
	}	
};

int main(){
	MyTime time1;		//ʱ���֡��룺��ʹ��Ĭ�ϲ���ֵ�Ĺ���
	time1.display();
	
	MyTime time2(2);	//�֡��룺ʹ��Ĭ�ϲ���ֵ�Ĺ���
	time2.display();
	
	MyTime time3(3,4);	//�룺ʹ��Ĭ�ϲ���ֵ�Ĺ���
	time3.display();
	
	MyTime time4(6,7,8);//����ʹ��Ĭ�ϲ���ֵ
	time4.display();
	
}
