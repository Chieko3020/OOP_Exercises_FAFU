/* 
创建一个字符串类String，并重载运算符"!"为其函数成员，用于判断对象中的字符串是否为空。
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

	int operator!(); //函数成员方式 重载"!"运算符
};

//在此定义函数成员int String::operator!()
//***************************************
int String::operator!()
{
	if(strlen(str)==0)
		return 1;
	else
		return 0;
}




//======================================

int main(){
	String s1("A string!"), s2;

	if(!s1){
		cout<<"s1 is null!"<<endl;
	}else{
		cout<<"s1 is NOT null!"<<endl;
	}
	cout<<"----------------------------"<<endl;

	if(s2.operator !()){
		cout<<"s2 is null!"<<endl;
	}else{
		cout<<"s2 is NOT null!"<<endl;
	}
	
}
