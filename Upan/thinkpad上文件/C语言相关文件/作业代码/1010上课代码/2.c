#include<stdio.h>
 int n,i,j;
int main()
{
	scanf("%d",&n);
	printf("please input n:%d\n",n);
    int a[n];
      
	  if(n>=1&&n<=20)
	  {
		  
		  for(j=0;j<n;j++)
			{
			scanf("%d",&a[j]);
	  
			}
	printf("output:\n");
         



		  for(i=0;i<n;i++)
		  {
		    printf("%d",a[i]);
		  }
		   
	  }
		
	 else
	  {
		 printf("output:\n");
	   printf("input error!\n");
	  }
      
 	


return 0;

}