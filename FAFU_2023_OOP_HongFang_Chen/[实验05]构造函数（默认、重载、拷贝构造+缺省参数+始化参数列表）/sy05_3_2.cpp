/* 
����һ��������ABC�������������صĹ��캯�����ֱ�ִ�����в�����
��1�����캯��ABC(int, int)ʵ����������ֵ�ıȽϣ�������ϴ�ֵ��
��2�����캯��ABC(double, double, double)ʵ������ʵ���ĳ˻����㣻
��3�����캯��ABC(char*, char*)���ڱȽ������ַ����Ƿ���ͬ��
ע�⣺������������ڹ��캯���б�д��������main()�����ṩ�˸������Ӧ���Դ��롣���ֳ���������£�
*/
#include <iostream>
#include <cstring> 
using namespace std;
class ABC{
public:
	//�ڴ˶����������صĹ��캯��ABC(��)
	//*******************************************
	ABC(int a,int b)
	{
		cout<<"��������"<<a<<"��"<<b<<"�нϴ���Ϊ��"<<(a>b?a:b)<<endl;
	}
	ABC(double a,double b,double c)
	{
		cout<<"��������"<<a<<", "<<b<<",��"<<c<<"�ĳ˻�Ϊ��"<<(a*b*c)<<endl;
	}
	ABC(char* a,char* b)
	{
		cout<<"�����ַ���"<<a<<"��"<<b<<" ";
		if(!strcmp(a,b))
			cout<<"��ͬ��"<<endl;
		else
			cout<<"��ͬ��"<<endl;
	}
	
	
	//======================================
};

int main(){
	ABC var1(8, 14);
	ABC var2(3.3, 4.4, 5.5);
	ABC var3("agirhl","agidasfpw");
	
}
