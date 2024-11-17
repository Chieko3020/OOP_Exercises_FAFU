/* 
��дһ������int charnum(char fn[10])���ú�����ֻ����ʽ���ļ�fn,��ͨ��ͳ�ƣ������ļ����ַ��ĸ�������ʹ��whileѭ��ʵ�ּ������ܡ�
ע�⣺��1������Դ�����Ѵ����ļ��С�
��2�������޸�������main�����������е��κ����ݣ����ں���charnum�Ļ���������д������䡣
��3���ļ��е��ַ���ʹ��ASCII�ַ��� 
 */
#include<iostream>
#include<fstream>
using namespace std;
int charnum(char fn[10]);

int main()
{
	int num;
	num=charnum("abc.txt");
	cout<<"num="<<num<<endl;
	
}

int charnum(char fn[10])		//ʵ��ͳ���ַ������Ĺ���
{
	//**************************************
	ifstream infile;
	infile.open(fn);
	char c;
	int cnt;
	while(infile>>noskipws>>c)
	{
		cnt++;
		cout<<c;
	}
	cout<<"\n";
	infile.close();
	return cnt;	
	//======================================
}
