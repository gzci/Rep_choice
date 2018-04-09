#include<stdio.h>
int main()
{char ch;
printf("Input:\n");
printf("Ô­ÎÄ£º");
while((ch=getchar())!='\n')
{
	if((ch>=65&&ch<=86)||(ch>=97&&ch<=118))
	ch=ch+4; 
else if((ch>86&&ch<=90)||(ch>118&&ch<=122))
ch=ch-22;

printf("%c",ch);
}
printf("\n");
return 0;
}
