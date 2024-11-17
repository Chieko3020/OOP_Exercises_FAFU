#include <iostream>
using namespace std;
class Complex
{
public:
    double real;
    double image;
    Complex(double r=0.0, double i=0.0)
    {
        real = r;
        image = i;
    }
    Complex operator+(const Complex & c)
    {
	    Complex t(this->real,this->image);
    	t.real+=c.real;
	    t.image+=c.image;
	    return t;
    }
    Complex operator-(const Complex & c)
    {
	    Complex t(this->real,this->image);
	    t.real-=c.real;
	    t.image-=c.image;
	    return t;
    }
    Complex operator*(const Complex & c)
    {
	    Complex t(this->real,this->image);
	    double tr=t.real;
	    t.real=t.real*c.real-t.image*c.image;
	    t.image=t.image*c.real+tr*c.image;
	    return t;
    }
    Complex operator/(const Complex &c)
    {
        Complex t(this->real,this->image);
	    double tr=t.real;
        double ti=t.image;
        t.real = (tr * c.real + ti * c.image) / (c.real * c.real + c.image * c.image);
        t.image = (ti * c.real - tr * c.image) / (c.real * c.real + c.image * c.image);
        return t;
    }
    void display()
    {
        cout << "(" << real << "," << image << ")" << endl;
    }
};

int main()
{
	Complex a(6.0, 8.0);
	Complex b(3.0, 4.0);
	Complex c;

	c=a+b;
	c.display();			//L1_加法输出结果: (9, 12)	

	c=a-b;
	c.display();			//L2_减法输出结果: (3, 4)

	c=a*b;
	c.display();			//L3_乘法输出结果: (-14, 48)

	c=a/b;
	c.display();			//L4_除法输出结果: (2, 0)
    
    system("pause");
    return 0;
}