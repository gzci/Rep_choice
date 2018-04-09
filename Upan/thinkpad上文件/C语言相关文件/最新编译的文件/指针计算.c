#include<stdio.h>
int main()
{
	char ar[]={1,2,3,4,5,6,7,8};
	char *p=ar;
	char *p1=&ar[5];

	int in[]={1,2,3,4,5,6,7,8};

	int *q=in;
	int *q1=&in[5];
	printf("p=%p\n",p);
	printf("p1=%p\n",p1);
	printf("p1-p=%d\n",p1-p);

	printf("q=%p\n",q);
	printf("q1=%p\n",q1);
	printf("q1-q=%d\n",q1-q);
	return 0;
}

