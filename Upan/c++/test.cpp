#include<iostream>
using namespace std;

class test{
	private :
		int x;
		string s;
	public :
		test();
		test(int x,string s);
		test( test& a);
		
		void fun();
		
}; 
	test::test(){
		cout<<"��Ƥ�޲�������";
		 
	
	}
	test::test(int x,string s){
		x=x;
		s=s;
		
		
	}	
	test::test(test&a){
		this->x=a.x;
		this->s=a.s;
		
	}
	void fun(){
		cout<<"���������fun�ұ�������"<<endl;
		 
		
	}
	void test::fun(){
		cout<<"���ǳ�Ա���� �ұ�����";
		 
	}
int main(){
	test a;
	int al;
	fun();//������ͬ 
	a.fun();//�Ա�һ�� 
	 
	return 0;
	
}
