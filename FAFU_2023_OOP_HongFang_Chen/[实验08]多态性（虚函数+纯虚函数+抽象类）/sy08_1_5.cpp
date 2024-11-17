#include <iostream> 
#include <cstring>
using namespace std;

//在下面补充完成所需的代码 
//*******************************************
class Role
{
protected:
	virtual void display()=0;
	string name;
	int age;
	int sex;
public:
	Role(string n,int a,int s)
	{
		name=n;
		age=a;
		sex=s;
	}
	Role(Role &r)
	{
		this->name=r.name;
		this->age=r.age;
		this->sex=r.sex;
	}
	string Getname()
	{
		return name;
	}
	int Getage()
	{
		return age;
	}
	int Getsex()
	{
		return sex;
	}
	void Setname(string n)
	{
		name=n;
	}
	void Setage(int a)
	{
		age=a;
	}
	void Setsex(int s)
	{
		sex=s;
	}
};
class Employee: public Role
{
protected:
	double salary;
	static int ID;
public:
	Employee(string n,double sa,int a=1,int s=0):Role(n,a,s)
	{
		salary=sa;
		ID++;
	}
	Employee(Employee &e):Role(e.name,e.age,e.sex)
	{
		this->salary=e.salary;
	}
	void display()
	{
		cout<<"职工编号："<<ID<<", 姓名："<<name<<", 年龄："<<age<<", 性别："<<sex<<", 工资："<<salary<<endl;
	}
	void getIncome()
	{
		cout<<"工资："<<salary<<endl;
	}
};
int Employee:: ID=1000;
class Manager:public Employee
{
private:
	const char* Vehicle="大众";
public:
	Manager(string n,double sa,const char* v="大众",int a=1,int s=0):Employee(n,sa,a,s)
	{
		Vehicle=v;
	}
	void display()
	{
		cout<<"职工编号："<<ID<<", 姓名："<<name<<", 年龄："<<age<<", 性别："<<sex<<", 工资："<<salary<<"， 交通工具："<<Vehicle<<endl;
	}
};
//============================================
int main(){
	Employee student("张迪", 1200);
	student.display();
	cout<<"------------------------"<<endl;
	
	Manager manager("陈真", 6000, "宝马");
	manager.display();
	cout<<"------------------------"<<endl;

	Employee dupEmp = manager;
	dupEmp.display();
	cout<<"------------------------"<<endl;

	Employee *p = &manager;
	p->display();
	cout<<"------------------------"<<endl;

	Employee &rp = manager;
	rp.display();
	cout<<"------------------------"<<endl;
	
}
