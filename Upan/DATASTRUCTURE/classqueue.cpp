#include<iostream>
const int maxsize=10;
using namespace std;
 
class queue{
	private:
		int entry[maxsize];
		int front;
		int rear;
	public:
		queue(){
			front=-1;
			rear=-1;
			
		}
		int add(int item);
		
		int del();
		 
};
int queue::add(int item){
	if(!((rear+1)%maxsize==front)){
		entry[(++rear)%maxsize]=item;
	}
	
		
}
int queue::del(){
	if(!(rear==front)){
		return entry[(front--)%maxsize];
	}
	
	
}
main(){
	queue q;
	q.add(1);
	q.add(2);
	cout<<q.del();
	
} 
