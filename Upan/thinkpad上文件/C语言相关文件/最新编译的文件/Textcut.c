#include<stdio.h>
#define len 100
#define shu 5
int a[len];
int k,x,c,b,d;   

int main()
{
	int t;
	printf("������%d���ݣ��ÿո�ָ������Իس�������\n",shu);
	for(k=0;k<shu;k++)
	{
	scanf("%d",&a[k]);
	}
	printf("������Ҫ���������");
		scanf("%d",&b);
		printf("������Ҫ�����λ�ã���һλ��0���㣩��");//1 2 3 4 5 _
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