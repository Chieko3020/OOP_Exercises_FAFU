/* 
���һ��Person�ࣺ
��1���������ݳ�Ա����name(char*)������֤��id(int)��
��2��Ϊ��Ա��Person�ṩ����Ĭ�ϲ���ֵ"noname"��10086���вι��캯��Person(char *pname="noname",int pid=10086)�Ϳ������캯��Person(Person &p)�����ڽ�����Ա�����ʱΪ���ݳ�Ա����ֵ��
��3��Ϊ��Ա��Person�ṩ������Աvoid printinfo()�����ڴ�ӡ�����Ա����Ϣ��
��4��Ҫ��ֱ��дǳ�������캯����������캯��������Person����Ŀ������ܽ��в��ԡ�
������main()�����ṩ�˸������Ӧ���Դ��롣���ֳ���������£�

  ��B�����!---------��������ڴ���������
*/
#include<cstring>
#include<iostream>
using namespace std;

class Person{
private:
	char *name;
	int id;
public:
	//�ڴ˶��幹�캯�����������캯��(���, ����ָ���ڵ�����)
	//**************************************
	Person (char* pname=(char*)"noname",int pid=10086)
	{
		name=new char[strlen(pname+1)];
		strcpy(name,pname);
		id=pid;
	}
	Person(Person &p)
	{
		name=new char[strlen(p.name+1)];
		strcpy(name,p.name);
		id=p.id;
	}
	//======================================

	void printinfo(){
		cout<<"������"<<name<<", ID="<<id<<endl;

		//��ȡ����name��Ա���ڴ��ַ
		cout<<name<<"�����ڴ��ַΪ��"<<(void *)name<<endl;
		cout<<"��������ݳ�Աname�ĵ�ַΪ��"<<&name<<", ռ�ÿռ�="<<sizeof(name)<<"�ֽ�"<<endl;
	}

    ~Person(){
		delete name;
	}
};

int main(){ 
	Person wang("wang",101);
	wang.printinfo();
	cout<<endl;
	
	Person li(wang);//	Person li=wang;
	li.printinfo();
	
}
