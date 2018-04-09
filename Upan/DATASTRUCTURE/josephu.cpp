#include<iostream>
using namespace std;

 struct node{
	int data;
	struct node * next;
	
	public:
		node(){
		}
		node(int data,node *next);
};
node::node(int data,node *next){
	this->data=data;
	this->next=next;
}
int q=0;


int josephu(node *s,int m){

	node *p,*t;
	int k=m-1;
	p=s;
	for(int i=0;i<k;i++){
		p=p->next;
		if(i!=k-1){
			t=p;
		}
//		cout<<"p:"<<p->next<<" t"<<t->next<<endl; //²âÊÔt£» 
	}

	//link************
	t->next=p->next;
	
	cout<<p->data<<" q:"<<q<<endl;
	q++;
	if(t->next==t){
		cout<<t->data<<" q:"<<q<<endl;
	}else{
			josephu(t->next,m);
	}
	//*******************
	

		
		
		
}




int main(){
 node* s;
 int a;
// while(chi>> a){
// 	s=new
// }
node *s1=new node();
node *s2=new node();
node *s3=new node();
node *s4=new node();
node *s5=new node();
node *s6=new node();
node *s7=new node();
node *s8=new node();
s1->data=1;
s2->data=2;
s3->data=3;
s4->data=4;
s5->data=5;
s6->data=6;
s7->data=7;
s8->data=8;
s1->next=s2;
s2->next=s3;
s3->next=s4;
s4->next=s5;
s5->next=s6;
s6->next=s7;
s7->next=s8;
s8->next=s1;
	josephu(s1,3);
}

