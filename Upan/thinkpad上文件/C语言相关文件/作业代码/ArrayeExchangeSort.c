#include<stdio.h>
int main(){
	int i,j=0,t=0,x,y,s=0,k;
	int a[10];
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
	printf("\n");
	for(k=0;k<10;k++)
	{
	printf("%d ",a[k]);	
	}
return 0;
}