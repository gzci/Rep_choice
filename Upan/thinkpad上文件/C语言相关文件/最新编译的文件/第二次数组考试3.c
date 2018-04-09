#include<stdio.h>
int main()
{
	int n;
	int a[5][5],i,j;
	printf("Please input an integer:");
	scanf("%d",&n);
	printf("Output:\n");

for(i=0;i<5;i++)
{
	for(j=0;j<5;j++)
	{
		printf("%4d",(n+i+j));
		
	}
	printf("\n");
}


return 0;
}