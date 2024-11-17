/* 
����һ��è��Cat��ӵ�У�
��1����̬���ݳ�ԱcatsAmount�����ͣ�����¼Cat����ĸ�����Ŀ���Ǿ�̬���ݳ�ԱcatID�����ͣ���¼��ǰè�����ı�ţ�
��2����̬��Ա����static int GetCatsAmount()����ȡCat���������ĿcatsAmount����ͨ��Ա����int GetCatID()��ȡĳ��Cat�����catID��Cat�������Ϣ�������void display()��
������main()�����������ɸ�Cat���󣬲������ÿ����������ݳ�Աֵ������ݳ��������ᾲ̬��Ա�ͷǾ�̬��Ա���÷������ֳ���������£�
*/
#include<iostream>
using namespace std;
//�ڴ˴�����Cat��������� ��̬���ݳ�Ա�Ķ��� 
//***************************************
class Cat{
	private:
		static int catsAmount;
		int catID;
	public:
		Cat(int id=0)
		{
			catID=id;
			catsAmount++;
			if(!catID)
			catID+=catsAmount-1;
		}
		static int GetCatsAmount()
		{
			return catsAmount;
		}
		int GetCatID()
		{
			return catID;
		}
		void display()
		{
			int i=0;
			cout<<"CatID="<< GetCatID()<<", ��ǰCat����������"<<GetCatsAmount()<<endl; 
		}
};
int Cat::catsAmount;
//======================================
/*���Ժ���*/
int main(){
	Cat cat01;//ʹ��ȱʡ�����Ĺ��캯��
	cat01.display();
	
	Cat cat02(3);//ʹ��ָ�������Ĺ��캯��
	cat02.display();
	
	//��������
	const int n=10;
	Cat obj[n];
	for(int i=0;i<n;i++){
		obj[i].display();
	}
    
return 0;
}
