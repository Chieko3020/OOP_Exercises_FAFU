/* 
*�Ķ�����д�������б����к�L*�Ĵ������������Ҫ���ϸ���Ͽ��Ƹ�ʽ�� 
*/
#include<iostream>
#include<iomanip> 
using namespace std;  

int main(){
	int a=78,b=36,c=19;
	cout<<"123456789012345678901234567890"<<"\n";				//setw��������10�ֶο��� 
	cout<<setiosflags(ios::left);								//���ñ�־λ ����� 
	cout<<hex<<setw(10)<<a<<setw(10)<<b<<setw(10)<<c<<endl;   //L1	4e        24        13
	cout<<oct<<setw(10)<<a<<setw(10)<<b<<setw(10)<<c<<endl;   //L2	116       44        23	
	cout<<resetiosflags(ios::left);								//�����־λ 
	cout<<dec<<setw(10)<<a<<setw(10)<<b<<setw(10)<<c<<endl;   //L3	        78        36        19
	
}

