/* 
����һ��dog�࣬�������غ�����������Ա��������Ӧ�ĳ�Ա������
����һ��ʵ��dog1������Ϊ5������Ϊ10��ʹ��I/O����dog1��״̬д������ļ���
��������һ��ʵ��dog2��ͨ�����ļ���dog1��״̬����dog2�� 
�ֱ�ʹ���ı���ʽ�Ͷ����Ʒ�ʽ�����ļ��������кβ�ͬ���ٿ��������ļ���ASCII���кβ�ͬ��
*/
#include<iostream>
#include<fstream>
using namespace std;
class dog{
private:
	int age;
	double weight;
public:
	dog(){
		age=0;
		weight=0;
	}

	dog(int a,double w){
		age = a;
		weight=w;
	}
	
	int getAge(){
		return age;
	}

	void setAge(int a){
		age = a;
	}

	double getWeight(){
		return weight;
	}

	void setWeight(double w){
		weight = w;
	}

	void display(){
		cout<<"��������:"<<age<<", ����:"<<weight<<endl;
	}

};


int main(){
	/*(1)������������ر������洢dog�������Ӧ��Ϣ*/
	int age;
	double weight;

	/*(2)����dog��ʵ��dog1*/
	dog dog1(10, 5.0);	//����һ��ʵ��dog1
	dog1.display();

	/*(2.1)���dog1�����������*/
	age = dog1.getAge();
	weight = dog1.getWeight();

	/*(3.1)��dog1�������������Ϣ��"�ı���ʽ"д�뵽�ļ�"out_sy0221.txt"��*/
	ofstream outTextFile;
	outTextFile.open("out_sy0221.txt", ios::out);
	outTextFile<<age<<" "<<weight;//��������Ϣд�뵽�ļ���
	outTextFile.close();

	/*(3.2)��dog1�������������Ϣ��"�����Ʒ�ʽ"д�뵽�ļ�"out_sy0222.txt"��*/
	age += 3;
	weight += 2.0;

	ofstream outBinaryFile;
	outBinaryFile.open("out_sy0222.txt", ios::binary | ios::out);
		
	outBinaryFile.write((char *)&age, sizeof(int));//��������
	outBinaryFile.write((char *)&weight, sizeof(double));//��������
	
	outBinaryFile.close();

	/*(4.1)��"�ı��ļ�"out_sy0221.txt"�ж�ȡ������Ϣ*/	
	ifstream inTextFile;
	inTextFile.open("out_sy0221.txt", ios::in);
	//inTextFile.open("out_sy0221.txt", ios::in | ios::binary);

	inTextFile>>age>>weight;//�������ļ��л�ù��������������Ϣ

	inTextFile.close();

	/*(4.2)dog��ʵ��dog2*/
	dog dog2;	//������һ��dogʵ��dog2
	dog2.display();

	/*(4.3)����"�ı��ļ�"out_sy0221.txt"�ж�ȡ������Ϣ��ֵ��dog2����*/
	dog2.setAge(age);
	dog2.setWeight(weight);

	dog2.display();

	/*(5.1)��"�������ļ�""out_sy0222.txt"�ж�ȡ������Ϣ*/
	ifstream inBinaryFile;
	//inBinaryFile.open("out_sy0222.txt", ios::in);
	inBinaryFile.open("out_sy0222.txt", ios::in | ios::binary);

	inBinaryFile.read((char *)&age, sizeof(int));
	inBinaryFile.read((char *)&weight, sizeof(double));

	inBinaryFile.close();

	/*(5.2)����"�����Ʒ�ʽ"�����ļ�"out_sy0222.txt"�ж�ȡ������Ϣ��ֵ��dog2����*/
	dog2.setAge(age);
	dog2.setWeight(weight);
	
	dog2.display();
	
}
