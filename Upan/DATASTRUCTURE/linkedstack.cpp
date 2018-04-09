#include<iostream>
using namespace std;
struct node{
	 int entry;
	node* next;
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
template <class type> 
class linkedstack{
	public:
		void push(type item);
		type pop();
		type top();
		linkedstack(){
			firstnode=NULL;
		}
	protected:
		node* firstnode;
		
		
		
};
void linkedstack::push(type item){
	node*new_top=new node(item,firstnode);
	if(new_top!=NULL){
	 firstnode=new_top;
	 
}
	
}
type linkedstack::pop(){
	node* temp_node=firstnode;
	firstnode=temp_node->next;
	delete temp_node;
	
	
}
type linkedstack::top(){
	return firstnode->entry;
}
int main(){
	
}
