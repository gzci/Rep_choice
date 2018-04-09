#include<stdio.h>
int  main(){
	int i=0;
	int *p= &(++i);
	
	
	++i=5;
	printf("%d",i);
	return 0;
} 


