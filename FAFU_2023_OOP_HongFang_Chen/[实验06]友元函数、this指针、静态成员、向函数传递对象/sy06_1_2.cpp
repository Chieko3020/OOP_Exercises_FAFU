/* 
��д������ƽ�����Point����˽�����ݳ�Աx��y�����ͣ���
Ϊ�䶨����Ԫ����Point add(Point &p1, Point &p2)ʵ������ƽ���ļӷ����㡣
*/
#include <iostream>
using namespace std;
class Point{
private:
	int x,y;
public:
	Point(int xcoor=0, int ycoor=0){
		x=xcoor;
		y=ycoor;
	}
	
	void display(){
		cout<<"("<<x<<","<<y<<")"<<endl;
	}

	friend Point add(const Point &p1, const Point &p2);	//������Ԫ����
};
//�ڴ˶�����Ԫ����
//**************************************
Point add(const Point &p1, const Point &p2)
{

	return Point (p1.x+p2.x, p1.y+p2.y);
}
//======================================
/*���Ժ���*/
int main(){
	Point p1(3,4);//Point�����1
	p1.display();

	Point p2(6,2);//Point�����2
	p2.display();

	Point sumP = add(p1, p2);//����Point�����ĺ�
	sumP.display();
    
return 0;
}
