/*
ָ�����ڴ���䡪��ָ�������鳤�ȡ�
*/
#include<iostream>
#include <cstring> 
using namespace std;

void Func(char str[100]);

int main(){
	char charArray[100]={'a','b','c'};
	cout<<strlen(charArray)<<endl;	//L1
	cout<<sizeof(charArray)<<endl;	//L2

	Func(charArray);//��������

	char* p = new char[100];
	cout<<sizeof(p)<<endl;			//L4
	
}


void Func(char *str){
	cout<<sizeof(str)<<endl;		//L3
}
