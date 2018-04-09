#include<iostream>
const int maxsize =100;
using namespace std;

class mystack{
	private:
		int stacktop;
		int entry[maxsize];
				
	public:
		mystack();
			
		
		int top();
		int pop();
		int push(int item);
		
}; 
mystack::mystack(){
	stacktop=-1;
}
int mystack::pop(){
	if(stacktop!=-1){
		stacktop--;
	}
}
int mystack::push(int item){
	entry[++stacktop]=item;
	
	
}
int mystack::top(){
	if(stacktop!=-1){
		return entry[stacktop];
		
	}
}
main(){
	mystack s;
	s.push(1);
	s.push(2);
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top()<<endl;
	
	
}
