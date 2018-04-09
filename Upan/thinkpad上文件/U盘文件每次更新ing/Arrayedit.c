#include<stdio.h>
#define len 100
#define shu 5
int a[len];
int k;       // 3
int t=0,x,shurudeshu;
int yaoshanchudeshu;
int yaoxiugaideshu;
int xiugaichengdeshu;
int i,j=0,x,y,s=0;
char ch;
int main()
{
	switch(ch=getchar())
	{
	
	
	
	}
//***********这是读入数组*********************
/*	for(k=0;k<shu;k++)
	{
	scanf("%d",&a[k]);
	}
//************从这开始实现了插入******************************
	scanf("%d",&shurudeshu);

		for(k=0;k<shu-1;k++)
{
	while(t<shu-2)							
	{	
	
		if(a[t]>shurudeshu)
		{
			for(k=shu;k>t;k--)
			{
				a[k]=a[k-1];
			}
			a[t]=shurudeshu;
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

