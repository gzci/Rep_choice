#include<stdio.h>
#define len 100
#define shu 5
int a[len];
int k,x,c,b,d;   

int main()
{
	int t;
	printf("请输入%d数据，用空格分隔开，以回车结束：\n",shu);
	for(k=0;k<shu;k++)
	{
	scanf("%d",&a[k]);
	}
	printf("输入您要插入的数：");
		scanf("%d",&b);
		printf("输入您要插入的位置（第一位从0计算）：");//1 2 3 4 5 _
		scanf("%d",&d);
		t=shu;
		for(k=shu-d;k>0;k--) 
		{	
			a[t]=a[t-1];
			t--;
		}
		a[d]=b;
			
	

	for(k=0;k<shu+1;k++)
	{
		printf("%d ",a[k]);

	}
	printf("\n");
return 0;
}