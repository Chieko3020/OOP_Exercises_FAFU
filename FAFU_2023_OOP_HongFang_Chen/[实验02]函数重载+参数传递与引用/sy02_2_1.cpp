/* 
���д��������void sort(int &x, int &y)��void sort(int x,int y,int z)��
ʵ�ֶ�2����3��Ԫ�ص���������Ļ�����������������֮��ʹ�����񣩡�

ע�⣺
��1������Դ�����Ѵ�����ļ�sy02_1.cpp�С�
��2�������޸�������main�����������е��κ����ݣ����ں����Ļ���������д������䡣
��3�����������£�
		3    4
		2    3    4
��4���ļ�sy02_1.cpp���������£�
*/
#include<iostream>
using namespace std;

void sort(int &x,int &y)
{
//*******************************
	if(x<y)
	{
		cout<<x<<"    "<<y<<endl;
	}
	else
	{
		cout<<y<<"    "<<x<<endl;
	} 


//=============================
}

void sort(int x,int y,int z)
{
//*******************************
	int a[4]={0,x,y,z};
	for (int i = 1; i <= 3; i++)
    {
        a[0] = a[i];
        int j = i - 1;
        for (; a[0]< a[j]; --j)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = a[0];
    }
	for(int i=1;i<=3;i++)
	{
		cout<<a[i]<<"    ";
	}
//=============================
}
int main()
{
	int a=4,b=3,c=2;
	sort(a,b);
	sort(a,b,c);
	
}
