#include<stdio.h>
#define len 100
#define shu 5
int a[len];
int k,x,c;   
char ch;

void Cut(int b,int d)//1 2 4 5 6
{
	int t=0;
	for(k=0;k<shu-1;k++)
	{
		while(t<shu-2)							
		{	
			if(a[t]>b)
			{
				for(k=shu;k>t;k--) 
				{
					a[k]=a[k-1];
				}
				a[d]=b;
			}
		t=t+1;
		}
	}
	for(k=0;k<shu+1;k++)
	{
		printf("%d ",a[k]);

	}

}

void Del()
{
		int yaoshanchudeshu;
		printf("请输入你想删除的位置（第一位从0计算）\n");
		scanf("%d",&yaoshanchudeshu);//1 2 4 5 6 

	    for(k=0;k<shu-1;k++)
		{	
			a[yaoshanchudeshu]=a[yaoshanchudeshu+1];
			yaoshanchudeshu=yaoshanchudeshu+1;
		}
		for(k=0;k<shu-1;k++)
		{
			printf("%d ",a[k]);

		}
}
void Edit()
{
	int yaoxiugaideshu;	
	int xiugaichengdeshu;
	printf("你要修改哪个数？(第一位从0计算)");
	scanf("%d",&yaoxiugaideshu);
	printf("你要修改成什么数？");
	scanf("%d",&xiugaichengdeshu);
	a[yaoxiugaideshu]=xiugaichengdeshu;
	for(k=0;k<shu;k++)
	{
	printf("%d ",a[k]);
	}
}
void Sort()
{
	int i,j=0,t=0,x,y,s=0,k;
	int a[4];
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(y=0;y<10;y++)
	{
		while(j<10)
		{
			
			if(a[j]>=t)
			{
				t=a[j];
				x=j;
			}
			j=j+1;
		}
	    s=a[y];
		a[y]=a[x];
		a[x]=s;
		j=y+1;
		t=0;
	}
	for(k=0;k<10;k++)
	{
	printf("%d ",a[k]);
	}

}
void Rewirte()
{
	main();
}
void Cout()
{
	for(k=0;k<shu;k++)
		{
			printf("%d ",a[k]);

		}	
}
int main()
{	
	printf("请输入%d数据，用空格分隔开，以回车结束：\n",shu);
	for(k=0;k<shu;k++)
	{
	scanf("%d",&a[k]);
	}
	printf("您要如何操作该数组？\n");
	printf("请输入您需要的操作：\n");
	printf("1.插入（i）\n");
	printf("2.删除（d）\n");
	printf("3.修改（u）\n");
	printf("4.排序（s）\n");
	printf("5.重新输入（r）\n");
	printf("6.输出（c）\n");
	printf("7.退出（e）	\n");
	getchar();
	scanf("%c",&ch);
	switch(ch)
	{
	case'i':
		printf("输入您要插入的数：");
		scanf("%d",&x);
		printf("输入您要插入的位置（第一位从0计算）：");
		scanf("%d",&c);
		Cut(x,c);
		break;
	case'd':
		Del();
		break;
	case'u':
		Edit();
		break;
	case's':
		Sort();
		break;
	case'r':
		Rewirte();
		break;
	case'c':
		Cout();
		break;
	case'e':
		printf("谢谢您的使用！\n");
	}
	return 0;
}

