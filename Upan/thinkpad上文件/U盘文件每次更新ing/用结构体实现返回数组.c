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
	void sum(int a[][3],int b[][3],struct array *c);//����һ���ṹ ���紫������ṹ��ָ��  ��ֻ��Ҫ��main��������� �ṹ ��ָ�봫�뺯����  ���ú����޸�����ṹ�Ϳ����� 
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
