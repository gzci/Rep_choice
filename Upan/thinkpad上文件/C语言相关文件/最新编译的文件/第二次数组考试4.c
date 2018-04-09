#include<stdio.h>
int main()
{
	int n;
	int a[5][5],i,j;
	printf("Please input N:");
	scanf("%d",&n);
	printf("Output:\n");

for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		printf("%d ",((i+1)*(j+1)));
		
	}
	printf("\n");
}


return 0;
}