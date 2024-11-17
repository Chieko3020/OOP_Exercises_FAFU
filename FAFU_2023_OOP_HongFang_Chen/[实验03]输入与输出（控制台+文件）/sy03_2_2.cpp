/* 
��ָ����һ���ı��ļ�����ÿһ����ǰ���кš� 
*/
#include<iostream>
#include<fstream>
#include<iomanip> 
using namespace std;
int main()
{
//**************************************
	ifstream infile;//��ȡ�ļ� 
	ofstream outfile;//д���ļ� 
	infile.open("abc.txt");	
	outfile.open("abc_back.txt"); 
	char c;							
	int i=1;
	outfile<<i<<" ";
	while (infile>>noskipws>>c)//��ȡ�ļ�abc.txt��д���ļ� abc_back.txt
	{
		if (c=='\n')//��abc.txt�еĻ��з���abc_back.txt�л��� 
		{ 
			outfile<<"\n"; 
			outfile<<++i<<" ";//��������д���к� 
		}
		else 
		{
			outfile<<c;
		}
	}
	infile.close();
	outfile.close();
//======================================
	cout<<"�����ɹ������������\n";
	
}
