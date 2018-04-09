#include<stdio.h>
#define n 10
int main()
{
int a[n],i,j,max;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n");

for(j=0;j<9;j++)
	{
		for(i=0;i<9-j;i++)
			{
			  if(a[i]>a[i+1])	
			  {
				  max=a[i];
				  a[i]=a[i+1];
				  a[i+1]=max;
			  
			  }
			}

	}

for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
			printf("\n");

		}



return 0;
}