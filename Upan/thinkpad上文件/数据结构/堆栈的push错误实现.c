#define MaxSize 100
#define ElementType int
#include<stdio.h>
ElementType S[MaxSize];
int top;
void main(){
	top=0;
	Push(S,top,9);
	printf("%d",top);//按说应该输出的top ++了 但是并没有 说明 函数内部为本地变量不能实现 
} 
void Push(ElementType S[], int top, ElementType item)
{if (top==MaxSize-1) {
		printf("manle"); return;
}else {
 S[++top] = item;
 return;
}
} 
