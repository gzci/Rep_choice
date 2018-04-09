#include<stdio.h>
#define n 5
int main()
{
int a[n],i,j,max,x,t;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n");

for(j=0;j<n;j++)
	{
	max=a[j];
		for(i=j;i<n;i++)
			{
			  if(a[i]>max)	
			  {
				  max=a[i];
				 x=i;
			  }
			}

	

t=a[j];
a[j]=a[x];
a[x]=t;
}
for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
			printf("\n");

		}



return 0;
}