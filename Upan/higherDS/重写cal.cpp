#include<iostream>
#include<stack>
using namespace std;
//详细内容分析在实验报告中 
 //使用系统自带STL库函数 
 //这个版本能判断 结果是0的式子 
class calculator{
	private:
		stack<char> optr;
		stack<double> opnd;
		double value;
		public:
			calculator(){
				opnd.push(0); 
				optr.push('#');
			}
			
			void evaluate();
			
			private:
				int lp(char op);
				int rp(char op);
				double operate(char theta,double a,double b);
				
				
			
};
//操作具体的方法 
double calculator::operate(char theta,double a,double b){
 	double ret;
 	switch(theta){
 		case '+':ret=a+b;break;
		case '-':ret=a-b;break;
		case '*':ret=a*b;break;
		case '/':ret=a/b;break;
			
 		
	 }
	 return ret;
	 
 }
 int calculator::lp(char ch){
 	int ret;
 	switch(ch){
 		case '+':ret=3;break;
		case '-':ret=3;break;
		case '*':ret=5;break;
		case '/':ret=5;break;
		case '(':ret=1;break;
		case ')':ret=6;break;
		case '#':ret=0;break; 
				
 		default:ret=-1;
	 }
 	return ret;
 } 
 int calculator::rp(char ch){
 	int ret;
 	switch(ch){
 		case '+':ret=2;break;
		case '-':ret=2;break;
		case '*':ret=4;break;
		case '/':ret=4;break;
		case '(':ret=6;break;
		case ')':ret=1;break;
		case '#':ret=0;break;
 		default:ret=-1;
	 }
 	return ret;
 }
void calculator::evaluate(){
	char ch,op,fuhao;
	double val,a,b;
	cin>>ch;
	op='#';
		while((ch!='#')||(op!='#')){
			//用于调试 
//			cout<<"current:nd.top"<<opnd.top()<<endl; 
//			cout<<"current:tr.top"<<optr.top()<<endl; 
			if(isdigit(ch)){
			cin.putback(ch);
			cin>>val;
			opnd.push(val);
			cout<<val<<" ";
			 
//			cout<<"push："<<val<<endl;
			cin>>ch;
		//计算优先级 根据优先级进行判断 
		}else if(lp(op)<rp(ch)){
				optr.push(ch);
//				cout<<"push："<<ch<<endl;
				op=optr.top();
		      	cin>>ch;
		      	
		}else if(lp(op)==rp(ch)){
			optr.pop();
			op=optr.top();
			cin>>ch;
			
			
		}else{
			fuhao=optr.top();
			cout<<fuhao<<" ";
			optr.pop(); 
			op=optr.top();
			b=opnd.top();
			
			opnd.pop();
			a=opnd.top();
			opnd.pop();
			
			opnd.push(operate(fuhao,a,b));
			
	
		}
	
	
		}
		
		cout<<"= "<<opnd.top(); 
	
		
	}
	




 
	

int main(){
	calculator c;
	
	c.evaluate();

	

	 
}
