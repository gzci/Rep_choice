#include<stdio.h>
int main(){
	int i,j,n;
	int a[5][5];
	printf("Please input an integer:");
	
	scanf("%d",&n);
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
		 a[i][j]=i+j+n;
		 	//printf("%4d",a[i][j]+n)
		}
	}
	printf("Output:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
		 
		printf("%4d",a[i][j]);
		
		}
		printf("\n");
		
	}
	
	
	
	return 0;
	
} 
