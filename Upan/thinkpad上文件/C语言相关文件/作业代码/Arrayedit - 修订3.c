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
{ start:
	printf("���������ݣ������ÿո�ָ�����\n");
	for(k=0;k<shu;k++)
	{
		scanf("%d",&a[k]);
	}
	
	while(1){

	printf("����������Ҫ�Ĳ�����\n");
	printf("1.���루i��\n");
	printf("2.ɾ����d��\n");
	printf("3.�޸ģ�u��\n");
	printf("4.����s��\n");
	printf("5.�������루r��\n");
	printf("6.�����c��\n");
	printf("7.�˳���e��	\n");
	getchar();
	scanf("%c",&ch);

	
	switch(ch)
	{
	case'i':
//***********���Ƕ�������*********************
	
	
//************���⿪ʼʵ���˲���******************************
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

}
printf("\n");
	goto start;
//************�������******************************
	case 'd'://************���⿪ʼʵ����ɾ��******************************
	
	printf("��������Ҫɾ����λ�ã�");
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
printf("\n");
		goto start;
//************ɾ�����******************************
	case'u'://************���⿪ʼʵ�����޸�******************************

	printf("��Ҫ�޸��ĸ�����");
	scanf("%d",&yaoxiugaideshu);//1 2 4 5 6 
	printf("��Ҫ�޸ĳ�ʲô����");
	scanf("%d",&xiugaichengdeshu);

	a[yaoxiugaideshu]=xiugaichengdeshu;

	for(k=0;k<shu;k++)
{
	printf("%d ",a[k]);

}
	printf("\n");
		goto start;
//************�޸����******************************
	case's'://************���⿪ʼʵ��������******************************
printf("��������ԣ�\n");

	for(y=0;y<shu;y++)//1
	{
		

	while(j<shu)//1 5 8  3 �����8 5 1 3
	{
		
		if(a[j]>=t)
		{
			t=a[j];
			//printf("�����ⱻ������%d\n",j);
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
	printf("������Ҫ��ʼ����������\n");
for(k=0;k<shu;k++)
{
	printf("%d ",a[k]);

}
printf("\n");
		goto start;
//************�������******************************
	case'r'://************���⿪ʼʵ������������******************************
for(k=0;k<shu;k++)
	{
	scanf("%d",&a[k]);
	}
	
		goto start;
//************�����������******************************
	case'c':
		//************���⿪ʼʵ�������******************************
	for(k=0;k<shu;k++)
	{
	printf("%d ",a[k]);

	}
	printf("\n");
	goto start;
//************������******************************
	case'e':
		printf("лл����ʹ�ã�");
			break;

}
	
}
	return 0;
}

