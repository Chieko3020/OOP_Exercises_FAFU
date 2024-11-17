/* 
ָ�����ڴ���䡪���ֲ����� 
*/
#include<iostream>
using namespace std;

char * GetMemory(){
	static char p[] = "hello world";    //char p[] = "hello world";
	//char *p= "hello world";
	return p;					//L1: 
}

void Test(){
	char *str= GetMemory();	//L2:
	printf("%s", str);			//L3:
}

int main(){
	Test();
	
}
