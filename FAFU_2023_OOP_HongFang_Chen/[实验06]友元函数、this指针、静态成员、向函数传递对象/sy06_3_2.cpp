/* 
�̵�����ĳһ��Ʒ���̵�ÿ�칫��ͳһ���ۿ�discount (float�ͣ�����Ϊ9.5��)��
ͬʱ����������Ա������ʱ��������ۼ�price��˫�����ͣ����ڴ˻����ϣ���һ�ι�10�������ߣ�
����������9.8���Ŵ�������֪����3������Ա���������Ϊ��
����Ա��(num)	��������(quantity)	�������ۣ�price��
101				5					23.5
102				12					24.56
103				100					21.5
��д���򣬼�������մ���Ʒ�������ۿ�sum��˫�����ͣ����Լ�ÿ����Ʒ��ƽ���ۼۣ�
Ҫ���þ�̬���ݳ�Ա�;�̬��Ա������
*/
#include <iostream>
using namespace std;

class Product{
private:
	int num;		//����Ա��
	int quantity;	//��������
	float price;	//��������

	static float discount;	//�̵굱���ͳһ�ۿ�
	static float sum;		//��Ʒ�������ۿ�
	static int n;			//��Ʒ��������Ŀ
public:
	Product(int id,int q,float p):num(id),quantity(q),price(p){ };

	void total();			//�ۼӼ��� ��Ʒ�������ۿ�
	static float average();	//���� ��Ʒ��ƽ���ۼ�
	static void display();	//��ʾ ��Ʒ��Ϣ
};
/*�ۼӼ��� ��Ʒ�������ۿ�*/
//**************************************
void Product:: total()
{
	if(quantity<10)
	sum+=quantity*price*discount;
	else
	sum+=quantity*price*discount*0.98;
	n+=quantity;
}
//======================================
/*���� ��Ʒ��ƽ���ۼ�*/
float Product::average(){
	return (sum/n);
}
/*��ʾ ��Ʒ��Ϣ*/
void Product::display(){
	cout<<"��Ʒ�������ۿ�="<<sum<<endl;
	cout<<"��Ʒ��ƽ���ۼ�="<<average()<<endl;
}
//Ϊ��̬���ݳ�Ա����ֵ
float Product::discount=0.95f;	//�̵굱���ͳһ�ۿ�
float Product::sum=0.0f;		//��Ʒ�������ۿ�
int Product::n=0;				//��Ʒ��������Ŀ
int main(){/*���Ժ���*/
	//(1) 3������Ա���������
	Product Prod[3]={
		Product(101,5,23.5f), Product(102,12,24.56f), Product(103,100,21.5f)
    };
	//(2) �ۼ�3������Ա�������������ۿ�
	for(int i=0;i<3;i++){
		Prod[i].total(); //����ۻ�...
	}
	//(2) ��ʾ ������Ϣ
	Product::display();

return 0;
}
