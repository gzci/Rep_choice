#include<stdio.h>¡¤ 
#include<stdlib.h>
typedef struct node{
	int data;
	struct node * next;
	
}qnode;
typedef struct{
	qnode * rear;
	qnode * front;
	 
}linkqueue;
void main(){
	
} 
void addq(linkqueue *s,int i){
	qnode *newone;
	newone=(qnode*)malloc(sizeof(qnode));
	newone->data=i;
	newone->next=NULL;
	s->rear=newone; 
	
}
int delate(linkqueue *s){
	qnode *tem;
	int temn;
	if(s->front==NULL){
		printf("kongle");
		
	}
	tem=s->front;	
	if(s->front==s->rear){
		 	s->front=s->rear=NULL;
	}else{
		
		
	    s->front=tem->next;
	    
	}
	
	temn=tem->data;
	free(tem);
	return temn;
	
	
}
