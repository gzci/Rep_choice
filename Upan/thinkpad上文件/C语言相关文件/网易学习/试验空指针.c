#include<stdio.h>
#include<stdlib.h>
typedef struct chain {
	int value;
	struct chain *next;
} Node;
int main(){
//		int *p;
//		int a;
//		p=&a;
		
		Node *head,*tail, *p;
		Node link;
		head = &link;
		
//		 head.value=9;	[Error] request for member 'value' in something not a structure or union
		head->value=9;//上面错误 是因为错误是用 点运算符 
		
	return 0;
	
}
