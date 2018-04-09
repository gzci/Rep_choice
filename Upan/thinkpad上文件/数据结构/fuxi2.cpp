#include<iostream>
using namespace std;
const int maxstack =10;
class stackchar{
	
	public:
		stack();
		bool empty() const;
		int push(const int &item);
		int top();
		int pop();
	private:
		char entry[maxstack];
		int count;
			
};
int stackchar::push(const int & item){
	entry[count++]=item;
	return 0;
}
int stackchar::pop(){
	--count;
	return 0;
}
int stackchar::top()
{	char item;
	item=entry[count-1];
	return item;
}
 int main(){
 	stackchar p;
 	p.push('#');
 	cout<< p.top();
 	return 0;
 	
 }
