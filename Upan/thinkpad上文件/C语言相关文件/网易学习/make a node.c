#include<stdio.h>
#include<stdlib.h>
typedef struct chain {
	int value;
	struct chain *next;
} Node;
Node* create() {
	Node *head,*tail, *p;
	int x;
	head =tail = NULL;
	printf("Input data.\n"); 
	while (scanf("%d", &x) == 1) {
		p = (Node*) malloc(sizeof(Node)); //开辟出空间把地址给了p （而且p现在拥有的这个空间刚好是 Node这个变量的大小
										  //这就意味着p现在这个Node型的指针现在指向了一个 Node型的变量 即可以使用 Node 结构体里面的东西 如value 等
										  // 就像是 int *a 现在给 a 一个5位数组大小的空间 那么 a就可以变成了一个 数组类型的变量 
		p->value = x;
		p->next = NULL;
		if (head == NULL)
			head = tail = p;
			else
			tail = tail->next;
		tail->next = p;
	 
	tail = tail->next;
	}

	return head;

}
void print(Node *q) {
	Node *p;

	for (p = q; p; p = p->next) {
		printf("%d ", p->value);
	}
}

// int isfind(Node **phead){
//	
//	int number;
//	
//	scanf("%d",&number);
//	Node *p;
//	int ret=0;
//	for(p=phead;p;p=p->next) 
//		{
//			if(number==p->value)
//			{
//				ret=1;
//				printf("isfound");
//				
//				break;
//				
//							
//			}
//			
//				
//		}
//		if(ret==0)	
//			printf("no found");
//	}
int main() {
	
	Node *head ;
	
	 

	//链表的遍历

	head=create();
	print(head);
	
//	getchar();
//	isfind(&q);

//	while(q)//这里q就已经是你链表的head了 然而 你链表最后是NULL就是0 如果条件为0也就不满足循环了  直接够跳出 链表被成功遍历
//	{
//		printf("%d ",q->value);
//		p=q->next;
//		free(q);//q=NULL;
//		q=p;
//}
	//第二种遍历的方法 用指針来遍历数组 

	return 0;

}
