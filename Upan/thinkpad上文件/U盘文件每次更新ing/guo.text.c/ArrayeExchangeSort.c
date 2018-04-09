#include<stdio.h>
int main(){
	int i,j=0,t=0,x,y,s=0,k;
	int a[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);

	}
	for(y=0;y<10;y++)//1
	{
		

	while(j<10)//1 5 8  3 7 24 53 1 16 3便成了53 5 8  3 7 1 24  1 16 3
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
	for(k=0;k<10;k++)
	{
	printf("%d ",a[k]);
	
	}


	

//printf("我记录了最后一次变化%d\n",x);




return 0;
}