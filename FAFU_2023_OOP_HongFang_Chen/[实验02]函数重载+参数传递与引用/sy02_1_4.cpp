/* 
��дAddition�࣬�������һ�����ص�add�����������ڶ��������͡������͡������͡�˫�����ͺ��ַ�������������㡣
������main()�����ṩ�˸������Ӧ���Դ��롣���ֳ���������£�
*/
#include<iostream>
#include<string>  //�ַ�������
#include<cstring> //C���Ե��ַ������ӿ� 
#include<stdio.h>
using namespace std;

class Addition{
public://�ڴ˶���5�����غ���T add(T a, T b)��1��add2���� 
//*******************************
int add(int x,int y)
{
	return x+y;	
}

float add(float x,float y)
{
	return x+y;

}
double add(double x,double y)
{
	return x+y;
}
long add(long x,long y)
{
	return x+y;
}
string add(string s1,string s2)
{
	return s1+s2;
}
string add2(string s1,string s2)
{
	return s1+s2;
}
//=============================
};

int main(){
	Addition sample;
	cout<<"2+5="<<sample.add(2, 5)<<endl;						//����
	cout<<"222l+5l="<<sample.add(222l, 555l)<<endl;				//������222��555
	cout<<"2.14f+5.3f="<<sample.add(2.14f, 5.3f)<<endl;			//������
	cout<<"2.1223+5.3276="<<sample.add(2.1223, 5.3276)<<endl;	//˫���ȸ�����
	cout<<"'I love '+'China!'="<<sample.add("I love ", "China!")<<endl;//����1
	char c1[128] ="Hello ";
	char c2[]="china!";
	strcat(c1,c2);
	cout<<c1<<endl;
	cout<<c1<<"+"<<c2<<"="<<sample.add2(c1, c2)<<endl;//����2
	 
}
