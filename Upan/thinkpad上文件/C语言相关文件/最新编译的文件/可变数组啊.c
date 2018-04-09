#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int number;
	int *a;
	int i;
	printf("输入数量：");
	scanf("%d",&number);
	a=(int*)malloc(number*sizeof(int));//malloc 返回的是 void*
	for(i=0;i<number-1;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<number-1;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

