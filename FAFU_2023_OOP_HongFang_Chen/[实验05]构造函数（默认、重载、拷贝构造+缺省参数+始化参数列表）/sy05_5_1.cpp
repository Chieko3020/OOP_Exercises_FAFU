/* 
����һ�����ڴ�����FDAccount����������һ�����ڴ��ۡ�
��1�����ۻ�����Ϣ�����ʺ�(char *account)���˻�����(char *name)��������(double balance)����ȡ���ޣ�int term, ����Ϊ��λ����������ʣ�double interest_rate, �԰ٷֵ�Ϊ��λ���ȡ�
��2��FDAccount������вι��캯��FDAccount::FDAccount(char *uAccount, char *uName, double uBalance, int period, double rate)����ʹ�ó�ʼ�������б��ķ�ʽΪ������ݳ�Ա����ֵ��
��3�������ֽ�֧ȡ�Ĺ��ܣ�ͨ����Ա����double fetch(char *uAccount, char *uName, double uBalance)ʵ�֣��������ϼƵĹ��ܣ�ͨ����Ա����void update()ʵ�֣������˻���Ϣ��ʾ�Ĺ��ܣ�ͨ����Ա����void show()ʵ�֡�
������main()�����ṩ�˸������Ӧ���Դ��롣���ֳ���������£�
*/
#include <iostream>
#include <iomanip>
using namespace std;
class FDAccount{
protected:
	double interest_rate; //������ʣ��԰ٷֵ�Ϊ��λ��
private:
	char *account;//�˺�
	char *name; //�˻�����
	double balance;  //������
	int term;    //�������	
public:	
	//���캯��(ʹ�ó�ʼ�������б�)
	//**************************************
	FDAccount(char *uAccount, char *uName, double uBalance, int period, double rate):
	account(uAccount),name(uName),balance(uBalance),term(period),interest_rate(rate){}
	//======================================
	double fetch(char *uAccount, char *uName, double amount);  //֧ȡ���ڴ��
	void update();//���㵽���˻����
	void show();  //��ʾ�˻�������Ϣ
};
//���ඨ����ⲿ�����Ա����
double FDAccount::fetch(char *uAccount, char *uName, double amount)
{
	cout<<"֧ȡ���:"<<endl;
	cout<<setw(8)<<"�ʺ�"<<setw(12)<<"�ʺ�����"<<setw(8)<<"֧ȡ���"<<endl;
	cout<<setw(8)<<account<<setw(12)<<name<<setw(8)<<amount<<endl;
	balance-=amount;
	return balance;
}
void FDAccount::update()
{
	 balance=balance+balance*(interest_rate/100)*term;
}
//======================================

//�˻���Ϣ��ʾ
void FDAccount::show(){
	cout<<"��ʾ�˻�������Ϣ:"<<endl;
	cout<<setw(8)<<"�ʺ�"<<setw(12)<<"�ʺ�����"<<setw(8)<<"����"<<setw(8)<<"����"<<endl;
	cout<<setw(8)<<account<<setw(12)<<name<<setw(8)<<term<<setw(8)<<interest_rate<<endl;
	cout<<"Ŀǰ�˻����Ϊ:"<<balance<<endl;
}

int main(){
	//�˻�����1
	FDAccount depositor("0034","����",10078, 18, 1.98);
	depositor.show();	
	cout<<endl;

	//����ѵ���-->�Ǽٶ�������
	cout<<"-->����ѵ���!\n"<<endl;

	depositor.update();//���㵽���˻����
	depositor.show();//��ʾ�˻�������Ϣ
	cout<<endl;

	cout<<"֧ȡ���:"<<endl;
	depositor.fetch("0034", "����", 5000);	
	cout<<endl;

	depositor.show();//��ʾ�˻�������Ϣ
	cout<<endl;
	
}
