 #include<stdio.h>
 #define size 10
 typedef struct {
 	int data[size];
 	int front;
 	int rear;
 	
 }queue; 
 void main(){
 	
 }
 void add(queue *s, int i){
 	if((s->rear+1)%size==s->front){
 		printf("gg");
 		return;
		  
	 }
	 s->rear=(s->rear+1)%size;
	 s->data[s->rear ]=i;
}
	 

int  dalete(queue *s){
	if(s->front==s->rear){
		printf("gg");
		 
	}
	s->front=(s->front+1)%size;
	
	return s->data[s->front];
}
