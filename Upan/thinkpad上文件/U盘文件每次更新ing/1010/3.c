#include<stdio.h>

int main()
{
	 int n,i,j,cot,t,k,m,l,p;
	  int a[20];
	scanf("%d",&n);
		
	printf("please input n:%d\n",n);
   
      
	  if(n>=1&&n<=20)
		  
	  {
		  
		  for(j=0;j<n;j++)
			{
			scanf("%d",&a[j]);
	  
			}
	printf("output:\n");
	for(cot=0;cot<n;cot++)//da cot 5 4 2 6 8
	{
		k=cot+1;

		if(a[cot]>a[k])
		{
		t=a[cot];
		}
		else
		{
		break;

		}
	
	}

	for(l=0;l<n;l++)//xiao l
	{
		p=l+1;

		if(a[l]<a[p])
		{
		m=a[l];
		}
		else{
		break;
		}
	
	}
      a[cot]=m;
	  a[l]=t;
       

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