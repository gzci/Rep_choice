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
	printf("�������뵥��ɼ���1�����Ƕ���ɼ���2��");
	scanf("%d",&t);
	//����if 
	if(t==2){
	printf("���뼸������ ÿ�м����ɼ���");
	scanf("%d %d",&h,&l);
	printf("������ɼ����ÿո�ָ������Իس�������\n");
	for(i=0;i<h;i++)
{
	for(j=0;j<l;j++)										    
	{															
		                                                         
		scanf("%f",&scores[i][j]);									
													
	}																
}
	printf("��Ҫ��β��������飿\n");
	printf("����������Ҫ�Ĳ�����\n");
	printf("1.���루i��\n");
	printf("2.ɾ����d��\n");
	printf("3.�޸ģ�u��\n");
	printf("4.����s��\n");
	printf("6.�����c��\n");
	printf("7.��ѯ��n��\n");
	printf("8.�˳���e��	\n");
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
		printf("лл����ʹ�ã�\n");
	}
	//����else 
	}
	else{
	printf("���뼸���ɼ���");
	scanf("%d",&m);
	
	printf("������ɼ����ÿո�ָ������Իس�������\n");
	for(j=0;j<m;j++)										    
	{														                                                  
		scanf("%f",&scores[1][j]);									
													
	}	
		
	}

	printf("��Ҫ��β��������飿\n");
	printf("����������Ҫ�Ĳ�����\n");
	printf("1.���루i��\n");
	printf("2.ɾ����d��\n");
	printf("3.�޸ģ�u��\n");
	printf("4.����s��\n");
	printf("6.�����c��\n");
	printf("7.��ѯ��n��\n");
	printf("8.�˳���e��	\n");
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
		printf("лл����ʹ�ã�\n");
	}
	return 0;
}
void Cut(float scores[][10],int m)
{
	int t=m;
	int b,d;
	int k;
	printf("������Ҫ���������");
	scanf("%d",&b);
	printf("������Ҫ�����λ�ã���һλ��0���㣩��");
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
		printf("����������ɾ����λ�ã���һλ��0���㣩\n");
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
	
	printf("��Ҫ�޸��ĸ�����(��һλ��0����)");
	scanf("%d",&yxgds);
	printf("��Ҫ�޸ĳ�ʲô����");
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
	
	printf("������������ѯ��ѧ���ţ�");
	scanf("%d",&l);
	printf("����ѯ��ѧ���ɼ�Ϊ��%f",scores[1][l-1]);
	 
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
	printf("������Ҫ���������");
	scanf("%d",&b);
	printf("������Ҫ�����λ�ã���һλ��0���㣩��");
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
