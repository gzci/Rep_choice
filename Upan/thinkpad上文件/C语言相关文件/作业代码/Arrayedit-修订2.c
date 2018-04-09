#include<stdio.h>
#define len 100
#define shu 5
int a[len];
int k,x;   
char ch;

void Cut(int b)
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
				a[t]=b;
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
		Cut(x);
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

	

	
//***********这是读入数组*********************
/*	for(k=0;k<shu;k++)
	{
	scanf("%d",&a[k]);
	}
//************从这开始实现了插入******************************
	scanf("%d",&charudeshu);

		for(k=0;k<shu-1;k++)
{
	while(t<shu-2)							
	{	
	
		if(a[t]>charudeshu)
		{
			for(k=shu;k>t;k--)
			{
				a[k]=a[k-1];
			}
			a[t]=charudeshu;
		}

			t=t+1;
	}

		}
for(k=0;k<shu+1;k++)
{
	printf("%d ",a[k]);

}*/
//************插入完成******************************
//************从这开始实现了删除******************************
/*	for(k=0;k<shu;k++)
	{
	scanf("%d",&a[k]);
	}

	scanf("%d",&yaoshanchudeshu);//1 2 4 5 6 

		for(k=0;k<shu-1;k++)
		{	
			a[yaoshanchudeshu]=a[yaoshanchudeshu+1];
			yaoshanchudeshu=yaoshanchudeshu+1;
		}
for(k=0;k<shu-1;k++)
{
	printf("%d ",a[k]);

}*/
//************删除完成******************************
//************从这开始实现了修改******************************
/*for(k=0;k<shu;k++)
	{
	scanf("%d",&a[k]);
	}
	printf("你要修改哪个数？");
	scanf("%d",&yaoxiugaideshu);//1 2 4 5 6 
	printf("你要修改成什么数？");
	scanf("%d",&xiugaichengdeshu);

	a[yaoxiugaideshu]=xiugaichengdeshu;

	for(k=0;k<shu;k++)
{
	printf("%d ",a[k]);

}*/
//************修改完成******************************
//************从这开始实现了排序******************************
/*printf("这排序调试：\n");
	for(k=0;k<shu;k++)
	{
	scanf("%d",&a[k]);
	}


	for(y=0;y<shu;y++)//1
	{
		

	while(j<shu)//1 5 8  3 便成了8 5 1 3
	{
		
		if(a[j]>=t)
		{
			t=a[j];
			//printf("我在这被调换了%d\n",j);
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
	printf("我现在要开始遍历数组了\n");
for(k=0;k<shu;k++)
{
	printf("%d ",a[k]);

}*/
//************排序完成******************************
//************从这开始实现了重新输入******************************
/*	for(k=0;k<shu;k++)
	{
	scanf("%d",&a[k]);
	}
	
	*/
//************重新输入完成******************************
//************从这开始实现了输出******************************
	/*for(k=0;k<shu;k++)
	{
	printf("%d ",a[k]);

	}*/
//************输出完成******************************









	return 0;
}

