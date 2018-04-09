#include<stdio.h>
#include<stdlib.h>
#define maxsize 10
//typedef struct {
//	int* date;
//	int top;
//}stack;
 struct stack {
	int* date;
	int top;
};
struct stack* creatstack(int size){
	stack *p;
	p->date=(int*)malloc(sizeof(int )*size);
	
	return p;
	
}
int isempty(struct stack* p){
	return (p->top==-1)?1:0;
	
}
int isfull(struct stack* p){
	return (p->top==maxsize)?1:0;
	
}
 int main(){
 	struct stack* p=creatstack(10);
 	printf("%d",isempty(p));
 	
 	return 0;
 	
 }
