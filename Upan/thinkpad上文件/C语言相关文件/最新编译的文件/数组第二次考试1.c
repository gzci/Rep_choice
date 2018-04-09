#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
   
int main()  
{  
    char *s=(char *)malloc(sizeof(char));  
    char c;  
    int len,i;  
	printf("please input s:");
    scanf("%s",s); 
    	
		printf("please input c:");
        scanf("%c",&c);  
        c=getchar();  
        len=strlen(s); 
		printf("Output:\n");
        for(i=0;i<len;i++)  
        {  
            if(s[i]!=c)  
                printf("%c",s[i]);  
        }  
        printf("\n");  
    
    return 0;  
   
   
}  