#include<stdio.h>
int main()
{
	int i;
	int a[100]={0};
	int isprime(int a);
	for(i=100;i<200;i++)
	{
		if(isprime(i)==1&&isprime(i+2)==1)//101 103 107 109 111 113
		{
			printf("%d %d\n",i,i+2);
		}
	}
//	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
//	{
//		printf("%d\n",a[i]);	
//	}
//	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
//		if(a[i]-a[])
//		{
//			a[i-100]=i;//printf("%d %d\n",i,i+1);
//		}
//	}
return 0;

}

int isprime(int a)
{
	int ret;
	int i;
	for(i=2;i<a;i++)
	{
		if(a%i!=0)
			ret=1;
		    
		else 
		{
			ret =0;
			break;
		}
		
	}		
	

return ret;

}