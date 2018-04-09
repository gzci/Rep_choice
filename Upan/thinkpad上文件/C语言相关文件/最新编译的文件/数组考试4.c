#include<stdio.h>
#define len 10
int main()
{
	int i=0,j=0,k=0,t=0,max=0,min=0,x=0,b=0,y=0,q=0; 
	int a[len];

printf("Please input 10 numbers:\n");
for(i=0;i<len;i++)
{
	scanf("%d",&a[i]);
}


for(k=0;k<len;k++)
{
	for(t=0;t<len;t++)	//1 0 4 3
									
	{	
	
		if(a[t]>=max)
		{
			max=a[t];
			q=t;
		}
				
	}

}



for(k=0;k<len;k++)
{
	for(t=0;t<len;t++)	
									
	{	
	
		if(a[t]<=min)
		{
			min=a[t];
			x=t;
		}
		
	}

}
y=a[0];                       
a[0]=min;
a[x]=y;



b=a[9];
a[9]=max;
a[q]=b;









printf("Output:\nThe new sort numbers are:\n");
for(j=0;j<len;j++)
{
	printf("%d ",a[j]);



}
printf("\n");





return 0;

}
