#include<iostream> 
using namespace std;

//�ڴ˶���3�����غ���T max(T a, T b)
//*******************************
int max(int x,int y)
{
	if(x>y) 
		return x;
	else
		return y;	
}

float max(float x,float y)
{
	if(x>y) 
		return x;
	else
		return y;	
}
double max(double x,double y)
{
	if(x>y) 
		return x;
	else
		return y;	
}
//=============================
int main(){	
	cout<<max(-3, -4)<<", "<<max(3, 4)<<endl;				//���: -3, 4
	cout<<max(-4.2f, -3.3f)<<", "<<max(4.2f, 3.3f)<<endl;	//���: -3.3, 4.2
	cout<<max(-9.8, -5.4)<<", "<<max(5.4, 9.8)<<endl;		//���: -5.4, 9.8		
	
}
