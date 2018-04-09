#include<stdio.h>
typedef struct array
{
	int a[2][3];
}lalala;
lalala c;
int main()
{
	int a[2][3]={1,2,3,4,5,6,};
	int b[2][3]={6,3,4,5,1,2,};
	int i,j;
	lalala sum(int a[][3],int b[][3],lalala k);
	c=sum(a,b,c);

	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",c.a[i][j])	;

		}
		printf("\n");
	}

	return 0;
}
lalala sum(int a[][3],int b[][3],lalala k)
{
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			k.a[i][j]=a[i][j]+b[i][j]	;

		}
		
	}

return k;

}