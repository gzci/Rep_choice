#include<stdio.h>
#include<string.h>
int main(){
	char *ch[100];
	char get;
	int i=0;
	int h;

	for (i = 0;(get=getchar())!='\n'; i++) {
			gets(ch[i]);
//		scanf("%s", names);
	}			
			
	for (h = 0; h < i; h++) {
		printf(ch[i]);
	}

	
	return 0;
	
} 
