#include <stdio.h>
#include<string.h>
#define nmb 9
int main() {
	char t[20];
	char names[nmb][20]={' '};
	char substr[20];
	int i, j,k;

	gets(substr);
	for(k=0;k<strlen(substr);k++){
		for(i=k;i<strlen(substr);i++){
				names[k][i]=substr[i];
		}
	}

	
	for(k=0;k<strlen(substr);k++){	
	
	for(j=0;j<k;j++){
		for(i=0;i<strlen(substr);i++){
			names[k][i]=names[k][i+1];
		}

		}
	
}
	
	for(j=0;j<strlen(substr);j++){
		for(i=0;i<strlen(substr);i++){
			if(strcmp(names[i],names[i+1])>0){
				strcpy(t,names[i]);
				strcpy(names[i],names[i+1]);
				strcpy(names[i+1],t);
				
			}
			
			
		}

		}
	
	
	
	

	for(k=0;k<strlen(substr);k++){
		for(i=0;names[k][i];i++){
				printf("%c",names[k][i]);
		}
		printf("\n");
	}

	return 0;
}
