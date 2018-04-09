#include<stdio.h>
int main(){
    int n,m,i,j;


	for(n=0;n<=5;n++){
		printf("\t\t");
		        for(j=0;j<=4-n;j++)
				{
				 printf(" ");
				}
	
				
				for(i=0;i<n;i++)
				{
					printf("8 ");
			
				}
	
	printf("\n");

		
	}

  for(n=4;n>0;n--)
  {
	  printf("\t\t");
	  for(j=0;j<=4-n;j++)
				{
				 printf(" ");
				}
		for(i=0;i<n;i++)
		{
			printf("8 ");
		}
			printf("\n");
  }



return 0;

}