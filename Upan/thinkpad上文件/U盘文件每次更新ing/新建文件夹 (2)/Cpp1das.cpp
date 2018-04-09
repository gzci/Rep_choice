#include<stdio.h>
#define n 5
int main()
{
int a[5],i,j,t;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n");

for(j=0;j<(n/2);j++)
	{
		t=a[j];
		a[j]=a[n-j-1];
		a[n-j-1]=t;


	}

for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
return 0;
}