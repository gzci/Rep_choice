#include<stdio.h>
int main()
{
	int n,con=0;
	int i,j,sum=0;
int a[10][10];

	printf("Please input m:");
	scanf("%d",&n);
	printf("\nPlease input array:\n");
if(n>=2&&n<=20)
{ 
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
	}
}

	for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(i==j||(i+j==n-1)) 
		sum+=a[i][j];
		
	}
}

printf("Output:\n");
printf("sum=%d\n",sum+con);
}
return 0;
}