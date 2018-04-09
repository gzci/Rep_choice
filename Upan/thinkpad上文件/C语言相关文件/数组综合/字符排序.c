#include<stdio.h>
#include<String.h>
int main(void){
	char str[20][20];
	char substr[20];
	char t[20];

	int k,i,j;
	//guozechen

	for(j = 0; j <20; j++)
	{
		for(k=0;k<20;k++){
			str[j][k]=' ';
		
		}
	
	}
	gets(substr);
	for(k=0;k<strlen(substr);k++){
		for(i=k;i<strlen(substr);i++){
				str[k][i]=substr[i];
		}
	}

	
	for(k=0;k<strlen(substr);k++){	
	
	for(j=0;j<k;j++){
		for(i=0;i<strlen(substr);i++){
			str[k][i]=str[k][i+1];
		}

		}
	}
	
	for(k=0;k<strlen(substr);k++){
		for(i=0;i<strlen(substr);i++){
			if (strcmp(str[i], str[i + 1]) > 0) {
						strcpy(t, str[i]);
						strcpy(str[i], str[i + 1]);
						strcpy(str[i + 1], t);
		}
	}
	
	
	
	for(k=0;k<strlen(substr);k++){
		for(i=0;i<strlen(substr);i++){
				printf("%c",str[k][i]);
		}
		printf("\n");
	}
			
		

	

	return 0;
} 

			
	

	