#include<stdio.h>
int main(){
	int n,i,j;

printf("input a number(1~9): ");
scanf("%d",&n);
printf("Output:\n");
for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
		printf("%d*%d=%d ",i,j,i*j);

	}
	printf("\n");
}





return 0;
}