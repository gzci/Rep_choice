#include<stdio.h>
void Cut(float scores[][10],int m);
void Del(float scores[][10],int m);
void Edit(float scores[][10],int m);
void Sort(float scores[][10],int m);
void Find(float scores[][10]);
void Cout(float scores[][10],int m);


int main()
{	
	char ch;
	int i,j,t,m,n,h;
	float scores[10][10];
	printf("您想输入单组成绩（1）还是多组成绩（2）");
	scanf("%d",&t);
	//这是if 
	if(t==2){
	printf("输入几行数据 每行几个成绩？");
	scanf("%d %d",&h,&l);
	printf("请输入成绩，用空格分隔开，以回车结束：\n");
	for(i=0;i<h;i++)
{
	for(j=0;j<l;j++)										    
	{															
		                                                         
		scanf("%f",&scores[i][j]);									
													
	}																
}
	printf("您要如何操作该数组？\n");
	printf("请输入您需要的操作：\n");
	printf("1.插入（i）\n");
	printf("2.删除（d）\n");
	printf("3.修改（u）\n");
	printf("4.排序（s）\n");
	printf("6.输出（c）\n");
	printf("7.查询（n）\n");
	printf("8.退出（e）	\n");
	getchar();
	scanf("%c",&ch);
	switch(ch)
	{
	case'i':
		Cutm(scores,m);
		break;
	case'd':
		Del(scores,m);
		break;
	case'u':
		Edit(scores,m);
		break;
	case's':
		Sort(scores,m);
		break;
	case'n':
		Find(scores);
		break;
	case'c':
		Cout(scores,m);
		break;
	case'e':
		printf("谢谢您的使用！\n");
	}
	//这是else 
	}
	else{
	printf("输入几个成绩？");
	scanf("%d",&m);
	
	printf("请输入成绩，用空格分隔开，以回车结束：\n");
	for(j=0;j<m;j++)										    
	{														                                                  
		scanf("%f",&scores[1][j]);									
													
	}	
		
	}

	printf("您要如何操作该数组？\n");
	printf("请输入您需要的操作：\n");
	printf("1.插入（i）\n");
	printf("2.删除（d）\n");
	printf("3.修改（u）\n");
	printf("4.排序（s）\n");
	printf("6.输出（c）\n");
	printf("7.查询（n）\n");
	printf("8.退出（e）	\n");
	getchar();
	scanf("%c",&ch);
	switch(ch)
	{
	case'i':
		Cut(scores,m);
		break;
	case'd':
		Del(scores,m);
		break;
	case'u':
		Edit(scores,m);
		break;
	case's':
		Sort(scores,m);
		break;
	case'n':
		Find(scores);
		break;
	case'c':
		Cout(scores,m);
		break;
	case'e':
		printf("谢谢您的使用！\n");
	}
	return 0;
}
void Cut(float scores[][10],int m)
{
	int t=m;
	int b,d;
	int k;
	printf("输入您要插入的数：");
	scanf("%d",&b);
	printf("输入您要插入的位置（第一位从0计算）：");
	scanf("%d",&d);

	for(k=m-d;k>0;k--) 
	{	
		scores[1][t]=scores[1][t-1];
		t--;
	}
	scores[1][d]=b;			
	
	for(k=0;k<m+1;k++)
	{
		printf("%f ",scores[1][k]);
	}
	printf("\n");

}
void Del(float scores[][10],int m)
{
		int yscds;
		int k;
		printf("请输入你想删除的位置（第一位从0计算）\n");
		scanf("%d",&yscds);

	    for(k=0;k<m-1;k++)
		{	
			scores[1][yscds]=scores[1][yscds+1];
			yscds=yscds+1;
		}
		for(k=0;k<m-1;k++)
		{
			printf("%f ",scores[1][k]);

		}
}
void Edit(float scores[][10],int m)
{
	int yxgds;	
	int xgcds;
	int k;
	
	printf("你要修改哪个数？(第一位从0计算)");
	scanf("%d",&yxgds);
	printf("你要修改成什么数？");
	scanf("%d",&xgcds);
	scores[1][yxgds]=xgcds;
	for(k=0;k<m;k++)
	{
	printf("%f ",scores[1][k]);
	}
}
void Sort(float scores[][10],int m)
{
	
	int i,j=0,t=0,x,y,s=0,k;
	for(y=0;y<m;y++)
	{
		while(j<m)
		{
			
			if(scores[1][j]>=t)
			{
				t=scores[1][j];
				x=j;
			}
			j=j+1;
		}
	    s=scores[1][y];
		scores[1][y]=scores[1][x];
		scores[1][x]=s;
		j=y+1;
		t=0;
	}
	for(k=0;k<m;k++)
	{
	printf("%f ",scores[1][k]);
	}

}
void Find(float scores[][10]){
	int l;
	
	printf("请输入你您查询的学生号：");
	scanf("%d",&l);
	printf("您查询的学生成绩为：%f",scores[1][l-1]);
	 
}
void Cout(float scores[][10],int m){
	int k;
	
		for(k=0;k<m;k++)
	{
		printf("%f ",scores[1][k]);
	}
	printf("\n");
}
void Cutm(float scores[][10],int h,int l)
{
	int t=m;
	int b,h1,l1;
	int i,j;
	printf("输入您要插入的数：");
	scanf("%d",&b);
	printf("输入您要插入的位置（第一位从0计算）：");
	scanf("%d",&h1);
	scanf("%d",&l1);
	if(h1<h-1&&l1<l-1){
			for(i=h1;>0;k--) 
		{	
			for()
			{
				
				
			}
						
		} 
	}
	
	for(k=0;k<m+1;k++)
	{
		printf("%f ",scores[1][k]);
	}
	printf("\n");

}
