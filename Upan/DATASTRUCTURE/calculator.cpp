#include<iostream>
#include<stack>
#include<string>

 using namespace std;
 class calculator {
 	private:
 		stack<char> optr;
 		stack<double> opnd;
 		double value;
 		string s="(6-3)/8-4#";
 	public:
 		calculator(){
// 			optr.setnull();
// 			opnd.setnull();
 			optr.push('#');
		 }
		 void run ();
		 void evaluate();
		 void clear(); 
		 
//		 private:
		 	int lp( char op);
		 	int rp(char op);
		 	double operate(char theta, double a,double b);
		 	
 };
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
		case '#':ret=1;break; 		
 		
	 }
 	return ret;
 } 
 int calculator::rp(char ch){
 	int ret;
 	switch(ch){
 		case '+':ret=2;break;
		case '-':ret=2;break;
		case '*':ret=4;break;
		case '/':ret=5;break;
		case '(':ret=6;break;
		case ')':ret=1;break;
		case '#':ret=0;break; 		
 		
	 }
 	return ret;
 }
 void calculator::clear(){
// 		opnd.setnull();
		while(opnd.empty()==false)opnd.pop();
		optr.push('#');
 } 
  void calculator::evaluate(){
  	char ch, op='#' ,theta;
  	double val,a,b;
  	
  			
	
//  	while((ch!='#')||(op!='#'))	
	  for(int i=0;ch!='#'&&i<=s.length();i++){
	  	op=optr.top();
	  	ch= s.at(i);
//	  	******************
//	  	cout<<op <<endl<<"lpop的value"<<lp(op)<<ch;
  		if(isdigit(ch)){
  				opnd.push((int)ch-48);
		  }else if(lp(op)<rp(ch)) 
		  {
		  	optr.push(ch);
		
		  	
			}else if(lp(op)==rp(ch)){
			  	optr.pop();
			  	
			  }else{
			  	theta=optr.top();
			  	
			  	optr.pop();
			  	b=opnd.top();
			  	opnd.pop();
			  	a=opnd.top();
			  	opnd.pop();
			  	cout<< a<<b<<theta; 
			  	opnd.push(operate(theta,a,b));
			  	
			  }
		  	
		  }
		 cout<<"第一次结果"<<opnd.top();
	  }
	
  
int main(){
	char ch='#';
	calculator c;
//	cout<<c.lp(ch);	
c.evaluate();
	
	
	return 0;
	
}
