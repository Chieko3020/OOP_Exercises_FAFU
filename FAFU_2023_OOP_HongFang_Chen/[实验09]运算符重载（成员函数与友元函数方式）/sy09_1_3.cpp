/* 
创建一个字符串类String，并重载赋值运算符"="为其成员函数。
*/
#include <iostream>
#include <cstring>
using namespace std;
 
class String{
private:
	char *str;
public:
	String(char *p=""){	//构造函数
		str = new char[strlen(p)+1];
		strcpy(str,p);
	}

	~String(){				//析构函数
		delete[] str;
	}

	void print(){			//显示函数
		cout<<str<<endl;
	}

	String & operator=(String &s);	//重载赋值运算符函数-----掌握
};

//在此定义成员函数String & String::operator=(String &s)
//*******************************************
String & String::operator=(String &s)
{
	strcpy(str, s.str);
	return *this;
}




//===========================================

int main(){
	String s1("This is a string!"), s2;
	s1.print();
	cout<<"------------------"<<endl;

	s2=s1;					//利用重载=运算符给s2的成员*str赋值
	s2.print();
	cout<<"------------------"<<endl;
	

	String s3 = s1;		//L1	利用默认拷贝函数给s3初始化
	s3.print();				//L2
	
	return 0; 			//s3先于s1析构，s3.*str与s1.*str指向同一内存空间
						//但前者先一步释放，后者再次释放即指针悬挂
}
