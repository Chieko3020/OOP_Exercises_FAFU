/* 
����һ��������Rectangle�����г�itsLength(double��)����itsWidth(double��)�������ݳ�Ա�������ص��޲ι��캯��Rectangle()���вι��캯��Rectangle(int width, int length)���������&����Ϣ�ĳ�Ա����void showInfo()��
������main()�����ṩ�˸������Ӧ���Դ��롣���ֳ���������£�
*/
#include <iostream>
using namespace std;
class Rectangle{
private:
	double itsLength;
	double itsWidth;
public:
	//�ڴ˶��� �޲�&�в� ���캯��Rectangle()Rectangle(int width, int length)
	//**************************************
	Rectangle()
	{
		cout<<"���ص� �޲ι��캯��Rectangle()"<<endl; 
		itsLength=1;
		itsWidth=1;
	}
	Rectangle(double length, double width)
	{
		cout<<"�вι��캯��Rectangle(double, double)"<<endl; 
		itsLength=length;
		itsWidth=width;
	}
	
	//======================================

	~Rectangle(){
		cout<<"��������~Rectangle()"<<endl;
		if(itsLength==1)
		cout<<"(4)";
	}

	void showInfo(){
		cout<<"���εĳ�Ϊ:"<<itsLength<<", ��Ϊ:"<<itsWidth<<endl;
	}
};

int main(){
	Rectangle re1;			//ʹ���޲ι��캯������һ������re1
	re1.showInfo();

	Rectangle re2(12,32);	//ʹ���в�(12,32)���캯������һ������re2
	re2.showInfo(); 
}


