#include<stdio.h>
#define h 2
#define l 3
int main()
{	
	int a[h][l];
	int b[l][h];
	int i,j;

	
	for(i=0;i<h;i++)
	{
		for(j=0;j<l;j++)
		{
				scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<h;i++)
		{
			for(j=0;j<l;j++)
			{
				b[j][i]=a[i][j];
			}
		}

	for(i=0;i<l;i++)
	{
		for(j=0;j<h;j++)
		{
				printf("%d ",b[i][j]);
		}
		printf("\n");
	}




return 0;
}
