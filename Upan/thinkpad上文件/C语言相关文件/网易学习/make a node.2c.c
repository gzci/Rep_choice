#include<stdio.h>
#include<stdlib.h>
typedef struct chain {
	int value;
	struct chain *next;
} Node;
void create(Node**phead) //这是传了 指针的指针   也就是说  传了一个（指向 结构的指针） 的地址进去 
{
	Node *tail, *p;
	int x;
 *phead=	tail = NULL;
	printf("Input data.\n");
	while (scanf("%d", &x) == 1) {
		p = (Node*) malloc(sizeof(Node)); //开辟出空间把地址给了p （而且p现在拥有的这个空间刚好是 Node这个变量的大小
										  //这就意味着p现在这个Node型的指针现在指向了一个 Node型的变量 即可以使用 Node 结构体里面的东西 如value 等
										  // 就像是 int *a 现在给 a 一个5位数组大小的空间 那么 a就可以变成了一个 数组类型的变量 
		p->value = x;
		p->next = NULL;
		if (*phead == NULL)	//里面所有 原来和head 有关的东西  全都要变成*phead 因为 *取值一个指针的指针 得到的结果还是个地址 
			*phead = tail = p;							//可以说 *phead =head 原来的  
		else
			tail = tail->next;
		tail->next = p;
	}

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

	Node *head = NULL;

	//链表的遍历

	create(&head);
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
