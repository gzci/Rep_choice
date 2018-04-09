#include<stdio.h>
#include<string.h>
int main(){
	char sstr[20];
	char lstr[20];
	char c;
	int i=0,q=0;
	printf("Enter a string:");
	gets(sstr);
	fflush(stdin);
	printf("Enter a character:");
	scanf("%c",&c);

	while(sstr[i]){
		if(c!=sstr[i]){
			lstr[q]=sstr[i];
			q++;
		}
		
	i++;
	}
	lstr[q]='\0';
	
	printf("Output:\n");
	puts(lstr);
	printf("\n");
	
	return 0;
	
} 
