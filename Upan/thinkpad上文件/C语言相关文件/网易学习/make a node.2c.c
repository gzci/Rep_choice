#include<stdio.h>
#include<stdlib.h>
typedef struct chain {
	int value;
	struct chain *next;
} Node;
void create(Node**phead) //���Ǵ��� ָ���ָ��   Ҳ����˵  ����һ����ָ�� �ṹ��ָ�룩 �ĵ�ַ��ȥ 
{
	Node *tail, *p;
	int x;
 *phead=	tail = NULL;
	printf("Input data.\n");
	while (scanf("%d", &x) == 1) {
		p = (Node*) malloc(sizeof(Node)); //���ٳ��ռ�ѵ�ַ����p ������p����ӵ�е�����ռ�պ��� Node��������Ĵ�С
										  //�����ζ��p�������Node�͵�ָ������ָ����һ�� Node�͵ı��� ������ʹ�� Node �ṹ������Ķ��� ��value ��
										  // ������ int *a ���ڸ� a һ��5λ�����С�Ŀռ� ��ô a�Ϳ��Ա����һ�� �������͵ı��� 
		p->value = x;
		p->next = NULL;
		if (*phead == NULL)	//�������� ԭ����head �йصĶ���  ȫ��Ҫ���*phead ��Ϊ *ȡֵһ��ָ���ָ�� �õ��Ľ�����Ǹ���ַ 
			*phead = tail = p;							//����˵ *phead =head ԭ����  
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

	//����ı���

	create(&head);
	print(head);
//	getchar();
//	isfind(&q);

//	while(q)//����q���Ѿ����������head�� Ȼ�� �����������NULL����0 �������Ϊ0Ҳ�Ͳ�����ѭ����  ֱ�ӹ����� �����ɹ�����
//	{
//		printf("%d ",q->value);
//		p=q->next;
//		free(q);//q=NULL;
//		q=p;
//}
	//�ڶ��ֱ����ķ��� ��ָ����������� 

	return 0;

}
