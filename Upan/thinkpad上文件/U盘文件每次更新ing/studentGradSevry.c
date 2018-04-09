#include<stdio.h>
int main(){
	int	a[100];
	int n,gl,i,t=0;
	printf("please give a n: ");
	scanf("%d",&n);
	printf("please give some grad:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);		
	}
	
	printf("please give a grad line");
	scanf("%d",&gl);
	printf("output: ");
	for(i=0;i<n;i++)
	{
		if(a[i]>gl)
		{
			t=t+1;
			printf("%d ",a[i]);
		}
	
	}
printf("\n");
printf("stdent quantities:%d",t);
printf("\n");
return 0;

}
