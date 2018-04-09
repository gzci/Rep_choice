#include<stdio.h>
int main()
{
	int n;
	int a[10][10],i,j,sum=0;
	printf("Input n: ");
	scanf("%d",&n);

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
		if(i==j) 
		sum+=a[i][j];
		
	}
}
printf("Output:\n");
printf("sum=%d\n",sum);
return 0;
}