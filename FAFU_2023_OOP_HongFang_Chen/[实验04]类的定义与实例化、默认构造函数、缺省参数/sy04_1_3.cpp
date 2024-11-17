/* 
��Ʋ�����һ����ΪRectangle2�ľ����ࡣ
��1��Rectangle2��������ԣ���length(double��)����width(double��)��
��2��Rectangle2����к�����Աvoid setLength(double len)��void setWidth(double wid)���ֱ��������þ��εĳ��Ϳ���
��3��Rectangle2����к�����Աdouble getArea(), �����ڼ��㲢��þ��ε������
��4��������Rectangle2�Ĳ��Դ������ṩ��������main()�У��û����������ṩ�����룩���εĳ��Ϳ���������ܾݴ˼�����ε����������Ĳ���Դ�������£�
*/
#include <iostream>
using namespace std;


class Rectangle2{
public: //�ڴ˶���Rectangle2�ĺ�����Ա
//*********************************************
void setLength(double len)
  {
    length=len;
  }
void setWidth(double wid)
{
    width=wid;
}
double getArea()
{
  return length*width;
}



//=============================================
private: //�ڴ˶���Rectangle2�����ݳ�Ա
//*********************************************
double length;
double width;




//================================================
};

int main(){
	double length;
	double width;

	cout<<"��������εĳ��ȣ�";
	cin>>length;
	
	cout<<"��������εĿ��ȣ�";
	cin>>width;

	Rectangle2 MyRectangle;//ʵ����һ�����ζ���
	MyRectangle.setLength(length);
	MyRectangle.setWidth(width);
	
	cout<<"->���ε����Ϊ��"<<MyRectangle.getArea()<<endl;
	
}
