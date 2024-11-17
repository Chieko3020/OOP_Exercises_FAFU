/* 
����һ��������Complex��
��1������double���͵�ʵ��real���鲿image�������ݳ�Ա��
��2�������ж����β���Ϊreal��image�Ĺ��캯��complex(int real, int image)������Ϊ���������ʵ�����鲿����ֵ��
������main()�����ṩ�˸������Ӧ���Դ��롣���ֳ���������£�
*/
#include <iostream>
using namespace std;
class complex{
private://(1)���������ݳ�Ա//////////////////////////
	double real;
	double image;
public:
	//���幹�캯��complex(double real,double image)
	//***************************************
	complex(double real, double image)
	{
		this->real=real;
		this->image=image;
	}
	//======================================
	
	//���������Ϣ
	void show(){
		cout<<real<<"+("<<image<<")i"<<endl;
	}
};

int main(){
	complex aaa(2.125,4.98);	//���帴������
	aaa.show(); 	
   
return 0;
}
