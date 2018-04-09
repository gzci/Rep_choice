#include<stdio.h>
#define len 10
int main()
{
char s[200];
char ch;
int i=0,k;
printf("please input s:");
while((ch=getchar())!='\n')
{
s[i]=ch;
i++;
}
printf("Output:\n");
for(k=i-1;k>=0;k--)
{
printf("%c",s[k]);

}
printf("\n");

return 0;

}
