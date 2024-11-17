/* 
ָ�����ڴ���䡪����ָ�롣 
*/
#include<iostream>
#include<cstring>
using namespace std;

void GetMemory(char* p) {
	
	p = new char[100];
}


void Test(){
	char * str=new char[100];       //char * str=NULL;
	GetMemory(str);					//L1
	strcpy(str, "hello world");		//L2
	printf("%s", str);				//L3
}

int main(){
	Test();
	
}
