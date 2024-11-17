/* 
C++��̡����ļ���������֮д�����ݵ��ļ��� 
*/
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream outfile;
	outfile.open("test1.txt");//outfile.open("test1.txt",ios::out); //Ĭ�Ϸ�ʽ	
	//��"test1.txt"�ļ���д����Ϣ���ѳɹ�д���ļ�!��
	//**************************************
	outfile<<"�ѳɹ�д���ļ�!"<<endl;
	
	
	
	
	//======================================
	outfile.close();
	cout<<"��Ϣ�ɹ�д����test1.txt�ļ��У�"<<endl;
	
}
