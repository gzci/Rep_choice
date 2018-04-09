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
		cout<<"瓜皮无参数构造";
		 
	
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
		cout<<"我是他妈的fun我被调用了"<<endl;
		 
		
	}
	void test::fun(){
		cout<<"我是成员函数 我被调了";
		 
	}
int main(){
	test a;
	int al;
	fun();//这俩不同 
	a.fun();//对比一下 
	 
	return 0;
	
}
