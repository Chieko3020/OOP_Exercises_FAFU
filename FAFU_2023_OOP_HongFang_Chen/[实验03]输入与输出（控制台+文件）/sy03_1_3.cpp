/* 
*����ݱ�������������������ڣ�д�������к�L*�ĳ���������������У�L4��L5�и�ֻ��һ�������֧��
*/
#include<iostream> 
using namespace std;
int n;
int *p1;

void fun()
{
	static int a;
	int b=3;
	cout<<"a="<<a++<<", b="<<b<<endl;		//L1	a=0, b=3
}

int main()
{
	int m=8;
	int *p2=&m;	//�������m�ĵ�ַΪ0x0013FF7C
	fun();
	{
		int n(45), m(13);
		cout<<"n="<<n<<", m="<<m<<endl;	//L2	n=45, m=13
	}
	cout<<"n="<<n<<", m="<<m<<endl;		//L3	n=0, m=8
	if(p1)
		cout<<"p1="<<p1<<endl;			//L4
	else
		cout<<"p1=NULL"<<endl;			//L4	p1=NULL
	
	if(p2)
		cout<<"p2="<<p2<<endl;			//L5	p2=0x6ffdfc
	else
		cout<<"p2=NULL"<<endl;			//L5
	
}
