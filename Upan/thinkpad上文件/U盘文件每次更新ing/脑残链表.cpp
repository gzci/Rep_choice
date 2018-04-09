#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void output(struct node *head);

int main()
{
	struct node a, b, c;
	struct node *head;

	printf("Input:\n");
	/******start******/
	head=&a;
	
    scanf("%d",&a.data);
    a.next=&b;
    scanf("%d",&b.data);
    b.next=&c;
    scanf("%d",&c.data);
    c.next=NULL;
    
	/******end******/
	printf("Output:\n");
	output(head);
	return 0;
}

void output(struct node *head)
{
	while (head != NULL)
	{
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}
