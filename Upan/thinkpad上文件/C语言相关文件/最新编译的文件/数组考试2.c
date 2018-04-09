#include<stdio.h>
int main()
{	
	int i=0,x,k;

	char ch,a,s[10],c;

	
	printf("please input s:");
while((ch=getchar())!='\n')
{
s[i]=ch;
i++;
}
printf("please input c:");
scanf("%c",&c);
printf("Output:\n");
for(k=0;k<i;k++)
{
   if(s[k]==c)
    x=k;

}
for(k=0;k<i;k++)
{
	if(k==x){
		k=k+1;
	printf("%c",s[k]);
	}
	else
	printf("%c",s[k]);
}
printf("\n");
	


return 0;

}