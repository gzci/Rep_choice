#include<stdio.h>
#include<stdlib.h>
typedef struct chain {
	int value;
	struct chain *next;
} Node;

typedef struct _list {
	Node* head;

} list;
void create(list * plist) {
	Node *tail, *p;
	int x;
 	plist->head=tail = NULL;
	printf("Input data.\n");
	while (scanf("%d", &x) == 1) {
		p = (Node*) malloc(sizeof(Node)); //���ٳ��ռ�ѵ�ַ����p ������p����ӵ�е�����ռ�պ��� Node��������Ĵ�С
										  //�����ζ��p�������Node�͵�ָ������ָ����һ�� Node�͵ı��� ������ʹ�� Node �ṹ������Ķ��� ��value ��
										  // ������ int *a ���ڸ� a һ��5λ�����С�Ŀռ� ��ô a�Ϳ��Ա����һ�� �������͵ı��� 
		p->value = x;
		p->next = NULL;
		if (plist->head == NULL)//�������� ԭ����head �йصĶ���  ȫ��Ҫ���*phead ��Ϊ *ȡֵһ��ָ���ָ�� �õ��Ľ�����Ǹ���ַ 
			plist->head = tail = p;						//����˵ *phead =head ԭ����  
		else
			tail = tail->next;
		tail->next = p;
	}
	tail = tail->next;
}
void print(Node *head) {
	Node *p;

	for (p = head; p; p = p->next) {
		printf("%d ", p->value);
	}
}

 int isfind(Node *head){
	
	int number;
	
	scanf("%d",&number);
	Node *p;
	int ret=0;
	for(p=head;p;p=p->next) 
		{
			if(number==p->value)
			{
				ret=1;
				printf("isfound");
			
				
				break;
				
							
			}
			
				
		}
		if(ret==0)	
			printf("no found");
	}
int main() {
	list list;
	

	create(&list);
	print(list.head);
	getchar();
	isfind(list.head);
	print(list.head);



	return 0;

}
