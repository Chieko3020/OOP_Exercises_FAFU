/* 
����������
���д����void swap(int *px,int *py) ��void swap(int &px,int &py)��ʵ���������б���a��bֵ�Ľ�����
���������£�
	3   2
	2   3

ע�⣺
��1������Դ�����Ѵ����ļ�sy02_2.cpp�С�
��2�������޸�������main�����������е��κ����ݣ����ں�����Ӧ�Ļ���������д������䡣
*/
#include<iostream>
using namespace std;

void swap(int *px,int *py)
{
//*******************************
	int temp=*px;
	*px=*py;
	*py=temp;
//=============================
}
void swap(int &px,int &py)
{
//*******************************
	int temp=px;
	px=py;
	py=temp;
//=============================
}
int main()
{
	int a=2,b=3;

	swap(a,b);
	cout<<a<<"    "<<b<<endl;
	swap(&a,&b);
	cout<<a<<"    "<<b<<endl;
		
}
