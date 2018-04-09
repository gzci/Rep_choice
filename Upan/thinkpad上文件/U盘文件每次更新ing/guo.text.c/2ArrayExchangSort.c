#include<stdio.h>
#define len 4
int main()
{
	int i,j,k,t=0,max=0,x; 
	int a[len];
	int b[len];

for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
{
	scanf("%d",&a[i]);
}
//***********************************************************这是输入10个数；

for(k=0;k<sizeof(a)/sizeof(a[0]);k++)
{
	while(t<sizeof(a)/sizeof(a[0]))// 1 5 3 9	
									//1 5 3 0
	{	
	
		if(a[t]>max)
		{
			max=a[t];
			x=t;
		}

			t=t+1;
		
	}
	b[k]=max;
	max=0;
	a[x]=0;
	x=0;
	t=0;



}









//***************************************************************这是遍历10个数
for(j=0;j<sizeof(b)/sizeof(b[0]);j++)
{
	printf("%d",b[j]);



}






return 0;

}
