//��д������4�����غ���Double(x)������ֵΪ��������������� 
//�������ͷֱ�Ϊint��long��float��double������ֵ�������������һ����
#include <iostream>
using namespace std;
//�ڴ˶���4�����غ���T Double(T)
//**************************************************************
int Double(int x)
{
		return x;
}
long Double(long x)
{
		return x;
}
float Double(float x)
{
		return x;
}
double Double(double x)
{
		return x;
}
//=======================================================

int main(){
	int i=3;
	cout<<"Double(i)="<<Double(i)<<endl;

	long l=32l;
	cout<<"Double(l)="<<Double(l)<<endl;

	float f=3.14f;
	cout<<"Double(f)="<<Double(f)<<endl;

	double d=2.718218;
	cout<<"Double(d)="<<Double(d)<<endl;
	
	cout<<endl;
}
