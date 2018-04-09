#include<stdio.h>
int main()
{
	int i,j;
	int a[2][3]={1,2,3,4,5,6,};
	int b[2][3]={6,3,4,5,1,2,};
	int c[2][3];

	void sum(int a[][3],int b[][3]);

	sum(a,b,c);
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);

		}
		printf("\n");
	}
	printf("\n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",b[i][j]);

		}
		printf("\n");
	}
		printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",c[i][j]);

		}
		printf("\n");
	}
	printf("\n");
	

return 0;

}
void sum(int a[][3],int b[][3],int c[][3])
{
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j]	;

		}
		
	}


}
/*void cot(int c[])
{
	printf("c[0]=%d",c[0]);

}*/