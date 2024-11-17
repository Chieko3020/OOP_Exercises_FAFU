/* 
�ڳ����У�����Ҫ��ʱ����в��������ǲ�û��ʱ�����͵����ݡ�����Ա�����Լ�ʵ��һ��ʱ���࣬��������������Ҫ���������������
��1������һ������ΪMyTime���࣬�����������������ݳ�Ա��ʱ(hour)����(minute)����(second)��Ϊ�˱�֤���ݵİ�ȫ�ԣ���������Ա����Ӧ����Ϊ˽�еġ�
��2��ΪMyTime���������º�����Ա���ֱ��ʱ������мӼ����㡣
void addSecond(int sec);
void addMinute(int min);
void addHour(int hou);
void subSecond(int sec);
void subMinute(int min);
void subHour(int hou);
��3������void display()���������ڴ�ӡ����ʱ����Ϣ��
��4��ΪMyTime�ඨ��void init(int h, int m, int s)�������Զ�MyTime��������ݳ�Ա���г�ʼ����
��5��ʱ����MyTime�Ĳ��Դ����ѱ�д��������main()�У�����Ĳ���Դ�������£�
*/
#include<iostream>
using namespace std;
class MyTime{
//************************************************
private:
int hour;
int minute;
int second;
public:
MyTime(int h,int m,int s)
{
	hour=h;
	minute=m;
	second=s;
}
void display()
{
  cout<<"Current TIME: "<<hour<<" H:"<<minute<<" M:"<<second<<" S"<<endl;
}
void addSecond(int sec)
{
  second+=sec;
}
void addMinute(int min)
{
  minute+=min;
}
void addHour(int hou)
{
  hour+=hou;
}
void subSecond(int sec)
{
  second-=sec;
}
void subMinute(int min)
{
  minute-=min;
}
void subHour(int hou)
{
  hour-=hou;
}





//================================================
};

int main(){
	MyTime time(8,20,45);//����һ��MyTime����time
	
	cout<<"��ʼʱ��: ";
	time.display();
	
	time.addHour(1);//
	cout<<"��'ʱ'���м�1������ʱ��: ";
	time.display();
	
	time.addMinute(2);
	cout<<"��'��'���м�2������ʱ��: ";
	time.display();
	
	time.addSecond(3);//
	cout<<"��'��'���м�3������ʱ��: ";
	time.display();
	
	time.subSecond(20);//
	cout<<"��'��'���м�20������ʱ��: ";
	time.display();
	
	time.subMinute(12);//
	cout<<"��'��'���м�12������ʱ��: ";
	time.display();
	
	time.subHour(2);//
	cout<<"��'ʱ'���м�2������ʱ��: ";
	time.display();
	
}
