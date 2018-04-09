#define MaxSize 100
#define ElementType int
#include<stdio.h>
ElementType S[MaxSize];
int top;
void main(){
	top=0;
	Push(S,&top,9);
	printf("%d",top);
	 
} 
void Push(ElementType S[], int *top, ElementType item)//在这修改为 top的指针就可以对外界进行操作 
{if (top==MaxSize-1) {
		printf("manle"); return;
}else {
 S[++(*top)] = item;
 return;
}
} 
