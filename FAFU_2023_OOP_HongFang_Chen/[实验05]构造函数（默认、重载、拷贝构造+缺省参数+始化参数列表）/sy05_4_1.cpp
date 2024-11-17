/* 
����һ��������Complex����1������double���͵�ʵ��realPart���鲿imagePart�������ݳ�Ա����2�����������ٶ��幹�캯��complex(int r, int i)���������Ϊ���������ʵ�����鲿����ֵ����3�������ж��帴���ļӷ����������˷�����������ֵΪһ���µĸ�������4����ʾ���帴����Complex�Ŀ������캯��Complex(Complex& ano)��������ɸ�������Ŀ������졣��ע�����֣�ͨ��һ����������Ϊ��һ����������ֵ & ͨ��һ��������������һ���������� ������
������main()�����ṩ�˸������Ӧ���Դ��롣���ֳ���������£�
*/
#include <iostream>
using namespace std;
class complex{
private://(1)���������ݳ�Ա//////////////////////////
	double real;
	double image;
public:
	/*�ڴ˶��幹�캯��complex(double r,double i)���������캯��complex(complex &another)���Լ������ļ�\��\�����㡣*/
	//**************************************
	complex(double r,double i)
	{
		cout<<"�����˹��캯��complex(int,int)"<<endl;
		real=r;
		image=i;
	}
	complex(complex &another)
	{
		cout<<"�����˿������캯��complex(complex&)"<<endl;
		real=another.real;
		image=another.image;
	}
	void add(complex &another)
	{
		real+=another.real;
		image+=another.image;
	}
	void substract(complex &another)
	{
		real-=another.real;
		image-=another.image;
	}
	void multiply(complex &another)
	{
		double tempreal=real;
		double tempimage=image;
		real=tempreal*another.real-tempimage*another.image;
		image=tempreal*another.image+tempimage*another.real;
	}	
	//======================================

	//(����)��ø�����ʵ�����鲿///////////////////////////
	double getReal(){
		return real;
	}

	double getImage(){
		return image;
	}

	void show(){
		cout<<real<<"+("<<image<<")i"<<endl;
	}
};

int main(){
	//(5)���븴��,�����и����ļ���//////////////////////////
	complex aaa(2,5);
	complex bbb(3,-4);	
	/*(a)*/
	aaa.show(); 
	bbb.show();
	
	/*(b)*/
	aaa.add(bbb);
	aaa.show();
	
	/*(c)*/
	aaa.substract(bbb);
	aaa.show();
	
	/*(d)*/
	aaa.multiply(bbb);
	aaa.show();
	
	/*(e)����ֵ*/
	aaa = bbb;
	aaa.show();

	/*(f1)����-��������*/
	complex copyCom1(bbb);
	copyCom1.show();

	/*(f2)����-��������*/
	complex copyCom2 = bbb;
	copyCom2.show();
	
}
