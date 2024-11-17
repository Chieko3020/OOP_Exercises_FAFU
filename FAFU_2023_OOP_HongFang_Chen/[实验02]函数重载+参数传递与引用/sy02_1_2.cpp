#include<iostream> 
using namespace std;
//�ڴ˶���3�����غ���T absolute(T)
//**************************************************************
int absolute(int x)
{
	if(x>0) 
		return x;
	else
		return -x;	
}

float absolute(float x)
{
	if(x>0) 
		return x;
	else
		return -x;

}
double absolute(double x)
{
	if(x>0) 
		return x;
	else
		return -x;
}
//=======================================================

int main(){	
	cout<<absolute(-3)<<", "<<absolute(3)<<endl;		//���: 3, 3
	cout<<absolute(-4.2f)<<", "<<absolute(4.2f)<<endl;	//���: 4.2, 4.2
	cout<<absolute(-5.4)<<", "<<absolute(5.4)<<endl;	//���: 5.4, 5.4
	 
}
