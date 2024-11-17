#include<iostream> 
using namespace std;
struct Complex{
//public:	//private
	double r;						//���ݳ�Ա
	double i;						//���ݳ�Ա
//public:	//private
	void init(double rr,double ii){	//������Ա
		r=rr;
		i=ii;
	}
	double real(){					//������Ա
		return r;
	}
	double image(){					//������Ա
		return i;
	}
};

int main()
{
    Complex a;
	
	a.init(2,3);
	
	//ֱ�ӷ������ݳ�Ա
    cout<<a.r
		<<"+"
		<<a.i
		<<"i"
		<<endl;
	
	cout<<"---------------\n";
	
	//ֱ�ӷ��ʺ�����Ա
	cout<<a.real()
		<<"+"
		<<a.image()
		<<"i"
		<<endl;
		
}
