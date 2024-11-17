#include <iostream>
#include <cstring>
using namespace std;
class Role
{
protected:
    char name[12];
    int age;
    char sex;
public:
    Role(char n[12],int a=21,char s='M')
    {
        strcpy(name, n);
        age = a;
        sex = s;
    }
    Role(Role &r,char s='M')
    {
        strcpy(this->name, r.name);
        this->age = r.age;
        sex = s;
    }
    void virtual display() = 0;
};
class Employee:public Role
{
protected:
    double salary;
    static int ID;
public:
    Employee(char n[12],double sa,int a=21,char s='M'):Role(n,a,s)
    {
        salary = sa;
        ID++;
    }
    Employee(Employee &e,double sa,char s='M'):Role(e,s)
    {
        salary = sa;
        ID++;
    }
    void display()
    {
        cout << "职工编号：" << ID << "，姓名：" << name << "，年龄：" << age << "，性别：" << sex << "，工资：" << salary << endl;
    }
};
class Manager:public Employee
{
protected:
    char vehicle[20];
public:
    Manager(char n[12],double sa,char v[20]="大众",int a=21,char s='M'):Employee(n,sa,a,s)
    {
        strcpy(vehicle, v);
    }
    void display()
    {
        cout << "职工编号：" << ID << "，姓名：" << name << "，年龄：" << age << "，性别：" << sex << "，工资：" << salary << "，交通工具：" << vehicle << endl;
    }
};
int Employee::ID=1000;//职工编号(静态数据成员)
int main()
{
	Employee student("张迪", 1200);
	student.display();					//L1
	
	Manager manager("陈真", 6000, "宝马");
	manager.display();					//L2
	
	Role *p1 = &student;
	p1->display();						//L3
	
	Role &rp1 = student;
	rp1.display();						//L4
	
	Role *p2 = &manager;
	p2->display();						//L5
	
	Role &rp2 = manager;
	rp2.display();						//L6

    
    system("pause");
    return 0;
}