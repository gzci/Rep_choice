#include<iostream>
using namespace std;
struct node{
	 int entry;
	node*next;
	node();
	node( int item,node*add=NULL);
	
	 
};
node::node(){
	next=NULL;
	
} 
node::node(int item ,node*add){
	entry=item;
	next=add;
}
class linkedqueue{
	 private:
	 	node* q;
	 	node* front;
	 	node* rear;
	public :
		void add(int a);
		int delate();
		linkedqueue(){
			front=NULL;
			rear=NULL;
		}
		
	
};
void linkedqueue::add(int a){
} 
int main(){
	
}
