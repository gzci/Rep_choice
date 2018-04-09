#include<stdio.h>
int main(){
	int a,i,sum=0;
	int b[5];
	
	printf("Please intput a:\n");
	scanf("%d",&a);
	printf("Please intput 5 numbers:\n");
	for(i=0;i<5;i++){
		scanf("%d",&b[i]);
		
	}
	for(i=0;i<5;i++){
		if(b[i]<a){
			sum+=b[i];
			
		}
	}
	printf("Output:\nThe sum is %d.\n",sum);
	
	
	
	return 0;
	
} 
