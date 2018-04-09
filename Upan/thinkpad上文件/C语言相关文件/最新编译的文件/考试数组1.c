#include<stdio.h>
int main()
{
int n,i,m=1;

	printf("Please input n:<1~15>\n");
	scanf("%d",&n);
	if(n>=1&&n<=15)
	{
		printf("Output:\n");
		for(i=1;i<=n;i++)
		{
			m=m*i;
			printf("%d ",m);
		}
	printf("\n");




	
	}
else 
printf("Output:Error!\n");



return 0;

}