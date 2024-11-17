/* 
ָ�����ڴ���䡪��ָ��������ɾ���� 
*/
#include<iostream>
#include<cstring>
using namespace std;

void Test(){
	char * str = new char[100];	//L1:
	strcpy(str, "hello");		//L2:
	delete[] str;				//L3:
	if(str != NULL){			//L4:
		strcpy(str, "world");	//L5:
		printf("%s", str);		//L6:
	}
}

int main(){
	Test();
	
}
