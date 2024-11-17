/* 
�������³��򣬸��ݳ������н����
��ᰴ��ֵ�������á���ָ��3�ֲ�ͬ��ʽ���������ݶ�������Ĳ��
*/
#include <iostream>
using namespace std;
class MyClass{
	int val;
public:
	MyClass(int i){
		val=i; 
	}
	
    int getval(){ 
		return val;
	}
    void setval(int i){
		val=i; 
	}
};
void display(MyClass  ob){  //������Ķ���ֵval�������½�����ʱ����ob��չʾ
	cout<<ob.getval()<<endl;
}
void change1(MyClass  ob){//��ֵ����
	ob.setval(50);            //������Ķ���ֵ��Աval=50�������½�����ʱ����ob
}
void change2(MyClass & ob){//�����ô���
	ob.setval(50);            //������������������Ķ���ֵ��Աval=50
}
void change3(MyClass * ob){//��ָ�봫��
	ob->setval(100);          //�������ָ����ָ�Ķ���ֵ��Աval=50
}
int main(){
    MyClass a(10); //�������a, ����10
    cout<<"����change*����ǰa=";
    display(a);	    //��˷�⣺a=10        չʾ����a��ֵval����ʱ����ob.val=10
    change1(a);     //��˷�⣺    ���ö���a��ֵval����ʱ����ob.val=50
    cout<<"����change1������a=";
    display(a);	    //��˷�⣺a=10        չʾ����a��ֵval����ʱ����ob.val=10������a�ĳ�Աvalδ�ı�
    change2(a);     //��˷�⣺    ���ö���a.val=50
    cout<<"����change2������a=";
    display(a);	    //��˷�⣺a=50        չʾ����a��ֵval����ʱ����ob.val=50
    change3(&a);    //��˷�⣺     ���ö���a.val=100
    cout<<"����change3������a=";
    display(a);     //��˷�⣺a=100       չʾ����a��ֵval����ʱ����ob.val=100
   
return 0;
}
