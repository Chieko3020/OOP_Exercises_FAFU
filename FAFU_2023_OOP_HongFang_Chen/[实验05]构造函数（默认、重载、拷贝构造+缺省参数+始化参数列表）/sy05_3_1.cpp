/* 
����һ����Ա��Person����1����������˽�����ݳ�Ա������name��char[20]��������age��int����
��2���������صĹ��캯��Person(char[20])��Person(char[20], int)��������ʼ����Ա�����������䣬���䲻��Ϊ����ʱ��Ĭ��ֵΪ21��
��3�����庯����Աvoid display()�������ڽ���Ա��������������Ϣ��ӡ������
������main()�����ṩ�˸������Ӧ���Դ��롣���ֳ���������£�
*/
#include<iostream>
#include<cstring>
using namespace std;
class Person{
private:
	char name[20];
	int age;
public:
	//�ڴ˶������ع��캯��Person(char c[20])��Person(char b[20], int a)
	//***************************************
	Person(char c[20])
	{
		strcpy(name,c);
		age=21;

	}
	Person(char b[20], int a)
	{
		strcpy(name,b);
		age=a;
	}
	
	
	
	//======================================

	void display(){
		cout<<"������"<<name<<", ���䣺"<<age<<endl;
	}
};

int main(){
	char theName[]="������";
	int theAge = 48;
	
	Person people1(theName,theAge);//�������	
	people1.display();//��ʾ��Ա��Ϣ

	Person people2(theName);//�������	
	people2.display();//��ʾ��Ա��Ϣ
	
}
