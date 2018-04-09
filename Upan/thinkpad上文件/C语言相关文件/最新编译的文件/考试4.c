#include<stdio.h>
#include<math.h>
int abs (int j);
int main(){
	int n,t=0,i,max=0,min=0;
	int a[100];


	printf("please input n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
    while(t<n)
	{	
	
		if( abs(a[t])>max)
		{
			max=a[t];
			
		}

			t=t+1;
		
	}
	
	while(t<n)
	{	
	
		if( abs(a[t])<min)
		{
			min=a[t];
			
		}

			t=t+1;
		
	}
	printf("Output:\n");
	printf("%d %d\n",max,min);


return 0;
}