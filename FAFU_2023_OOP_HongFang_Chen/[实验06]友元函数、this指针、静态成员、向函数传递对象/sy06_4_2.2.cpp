/* 
������������������������ݵ�3�����ͣ������Ƕ������ֵ���ݣ����ÿ������캯���Ĺ��̣���
���ݳ���ִ�н�� ˵�������ִ�й��̲����ͳ��������˳��
*/

#include <iostream>
using namespace std;
class MyClass{
	int val;
public:
	MyClass(int i){ 
		val=i;
		cout<<"���캯��value="<<val<<endl;
	}

	MyClass(MyClass & ob){ 
		val=ob.val;
		cout<<"-->�������캯����\n";
	}

	int getval(){return val;}

	~MyClass() { cout<<"**��������\n";}	
};

MyClass MkBigger(MyClass a){//3.ֵ���ݣ����ƹ���
	MyClass o(a.getval()*2);//4.��������
	return o;//5.���ض��󣬸��ƹ���
}

void display(MyClass ob) {//2.ֵ���ݣ����ƹ���
   cout<<ob.getval()<<endl;
}
/*��˷�⣺**********�вι��캯�������������������������б�����ʱ�������ʾ********** */
/*��˷�⣺**********gcc 13.2.0 RVO����ֵ�Ż�ʹ�ú������ض���ʱ���ٵ��ÿ������캯��********** */
int main(){
	MyClass a(10);	//1.��������
	cout<<"����display()֮ǰ.\n";
	display(a);			//��˷�⣺һ�������������һ�������������
	//��˷�⣺ֵ���ݶ���ʱ����һ�ο����������ʱ����ob��������ob�����ͷ� 
	cout<<endl;
	a=MkBigger(a);		//��˷�⣺һ�������������һ����������죬���������������
	//��˷�⣺ֵ���ݶ���ʱ����һ�ο����������ʱ����a
	//��˷�⣺����Ϊa.val*2���вι������o
	//��˷�⣺�������غ󣬶���a�����ͷţ�������o�ڸ�ֵ��ɺ������ͷ�
	cout<<"����display()֮��.\n";
    display(a);			//��˷�⣺һ�������������һ�������������
	//��˷�⣺ֵ���ݶ���ʱ����һ�ο����������ʱ����ob��������ob�����ͷ� 
    
return 0;
}
	//��˷�⣺main��������������a����
