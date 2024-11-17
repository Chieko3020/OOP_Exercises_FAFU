/* 
����һ������ΪNumber���ࡣ��1������������˽���������ݳ�Աn1��n2����2�������вι��캯�����ܹ�Ϊn1��n2����ֵ����3��������мӣ�addition��������subtration�����ˣ�multiplication��������division���ȹ��г�Ա�������ܹ����������ݳ�Ա���мӡ������ˡ������㡣
������main()�����ṩ�˸������Ӧ���Դ��롣���ֳ���������£�
*/
#include<iostream>
using namespace std;
class Number{
	//�ڴ˶���Number��Ľṹ
	//**************************************
	private:
	int n1;
	int n2;
	public:
	Number(int a,int b)
	{
		n1=a;
		n2=b;
	}
	int addition()
	{
		return n1+n2;
	}
	int subtration()
	{
		return n1-n2;
	}
	int multiplication()
	{
		return n1*n2;
	}
	int division()
	{
		return n1/n2;
	}
	
	
	
	//======================================
};

int main(){
	int k1=48, k2=6;
	Number nb(k1,k2);	//ʵ����һ��Number����
	
	cout<<"�������ĺ�"<<k1<<"+"<<k2<<"="<<nb.addition()<<endl;
	cout<<"�������Ĳ�"<<k1<<"-"<<k2<<"="<<nb.subtration()<<endl;
	cout<<"�������Ļ�"<<k1<<"*"<<k2<<"="<<nb.multiplication()<<endl;
	cout<<"����������"<<k1<<"/"<<k2<<"="<<nb.division()<<endl;
	
}
