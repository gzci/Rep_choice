#include <stdio.h>

int main()
{
	int i,n;
	long int sum=1;
	
	printf("Please input n:[1-15]\n");
	scanf("%d",&n) ;
	
	if(n<=15){
		printf("Output:\n");
	for(i=1;i<=n;i++)
	{
		sum*=i;
		printf("%d ",sum);
	}
printf("\n");
	}
	else printf("Output:Error!\n");
	return 0;
}