#define MaxSize 100
#define ElementType int
#include<stdio.h>
ElementType S[MaxSize];
int top;
void main(){
	top=0;
	Push(S,top,9);
	printf("%d",top);//��˵Ӧ�������top ++�� ���ǲ�û�� ˵�� �����ڲ�Ϊ���ر�������ʵ�� 
} 
void Push(ElementType S[], int top, ElementType item)
{if (top==MaxSize-1) {
		printf("manle"); return;
}else {
 S[++top] = item;
 return;
}
} 
