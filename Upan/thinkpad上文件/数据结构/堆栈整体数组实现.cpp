#include<stdio.h>
#include<stdlib.h>
#define MaxSize 100
typedef struct {
	int * data;//这个思路错了   。。。没错网易数据结构树下 最大堆第二节 
	int top; 
	 
}stack;
stack* createstack(int size){
	stack *p;
	
	p->data=(int *)malloc(sizeof(int)*size);// 
	return p;
	
}

	creatstack2(stack* p, int size){//两种creat方法 调用的形式不同 
	p->data=(int *)malloc(sizeof(int)*size);
		
}
int  isfull(stack *s,int maxsize){
	if(s->top  == maxsize){
		return 0;
		
	}else{
		return -1;
	}
}
void push(stack *s,int i){
	if(isfull==0){
		printf("GG");
		
	}else{
		s->data[++s->top]=i;
	}
		
	
}
int isempty(stack s){
	if(s->top==-1){
		return 0;
		
	}else{
		return 1;
		
	}
}
int  pop(stack *s){
	if(isempty==0){
		printf("gg");
		
	}else{
		return s->data[s->top--];
	}
	
	
}
int  main(){
	stack *p;
	p=createstack(10);
	push(p,10);
	
	printf("%d",pop(p));
	
return 0; 	
	
}
