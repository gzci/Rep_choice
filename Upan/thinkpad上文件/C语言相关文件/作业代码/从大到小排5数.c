#include<stdio.h>
int main(){
	int i,j=0,t=100,x,y,s=0,k;
	int a[100];
	int n;
	printf("Please input n:");
	scanf("%d",&n);
	if(n<=100)
	{
printf("Please input 5 numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(y=0;y<n;y++)
	{
		while(j<n)
		{		
			if(a[j]<=t)
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
			t=100;
	}

	printf("Output:\n");
	printf("The sort number is:");
	for(k=0;k<n;k++)
	{
	printf("%d ",a[k]);	
	}
		printf("\n");
	}
	else printf("Output:Error!\n");
return 0;
}