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

for(j=0;j<n;j++)
	{
	max=a[0];
		for(i=j;i<n;i++)
		{if(a[i]>max)	
			  {
				  max=a[i];
				 
			  
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