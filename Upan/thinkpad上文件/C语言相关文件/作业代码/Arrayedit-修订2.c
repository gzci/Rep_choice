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
		printf("����������ɾ����λ�ã���һλ��0���㣩\n");
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
	printf("��Ҫ�޸��ĸ�����(��һλ��0����)");
	scanf("%d",&yaoxiugaideshu);
	printf("��Ҫ�޸ĳ�ʲô����");
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
	printf("������%d���ݣ��ÿո�ָ������Իس�������\n",shu);
	for(k=0;k<shu;k++)
	{
	scanf("%d",&a[k]);
	}
	printf("��Ҫ��β��������飿\n");
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
		printf("������Ҫ���������");
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
		printf("лл����ʹ�ã�\n");
	}

	

	
//***********���Ƕ�������*********************
/*	for(k=0;k<shu;k++)
	{
	scanf("%d",&a[k]);
	}
//************���⿪ʼʵ���˲���******************************
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
//************�������******************************
//************���⿪ʼʵ����ɾ��******************************
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
//************ɾ�����******************************
//************���⿪ʼʵ�����޸�******************************
/*for(k=0;k<shu;k++)
	{
	scanf("%d",&a[k]);
	}
	printf("��Ҫ�޸��ĸ�����");
	scanf("%d",&yaoxiugaideshu);//1 2 4 5 6 
	printf("��Ҫ�޸ĳ�ʲô����");
	scanf("%d",&xiugaichengdeshu);

	a[yaoxiugaideshu]=xiugaichengdeshu;

	for(k=0;k<shu;k++)
{
	printf("%d ",a[k]);

}*/
//************�޸����******************************
//************���⿪ʼʵ��������******************************
/*printf("��������ԣ�\n");
	for(k=0;k<shu;k++)
	{
	scanf("%d",&a[k]);
	}


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

}*/
//************�������******************************
//************���⿪ʼʵ������������******************************
/*	for(k=0;k<shu;k++)
	{
	scanf("%d",&a[k]);
	}
	
	*/
//************�����������******************************
//************���⿪ʼʵ�������******************************
	/*for(k=0;k<shu;k++)
	{
	printf("%d ",a[k]);

	}*/
//************������******************************









	return 0;
}

