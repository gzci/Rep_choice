#include<stdio.h>
struct array
{
	int a[2][3];
};

int main()
{
	struct array c;
	int a[2][3]={1,2,3,4,5,6,};
	int b[2][3]={6,3,4,5,1,2,};
	int i,j;
	void sum(int a[][3],int b[][3],struct array *c);//传入一个结构 不如传入这个结构的指针  你只需要在main中申请这个 结构 把指针传入函数中  利用函数修改这个结构就可以了 
	sum(a,b,&c);

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
void sum(int a[][3],int b[][3],struct array *c)
{
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			c->a[i][j]=a[i][j]+b[i][j]	;

		}
		
	}



}
