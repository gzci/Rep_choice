#include<stdio.h> 
#include<stdlib.h>
typedef struct node{
	int date;
	struct node *next;
	
}linkstack;
int main(){
	return 0;
	 
}
linkstack * create(){
	linkstack *p;
	p=(linkstack*)malloc(sizeof(linkstack));
	p->next=NULL;
	
	return p;
}
int isempty(linkstack* s){
	return s->next==NULL;
	 
}
void push(linkstack *s,int i){
	linkstack *tmp;
	tmp=(linkstack*)malloc(sizeof(linkstack));
	tmp->date=i;
	tmp->next=s->next;
	s->next=tmp;
	
}
int pop(linkstack *s){
	if(isempty(s)){
		return 0;
	}else{
		int record;
		linkstack *rec; 
		record=s->date;
		rec=s->next;
		s->next=rec->next;
		free(rec);
		
		return record;
		
	}
}
