#include<stdio.h>
int main()
{
char a[4],ch;
int i,n;

printf("Input:\n");
while((ch=getchar())!='\n')
{
	a[i]=ch;
}

printf("Output:\n");
for(i=0;i<4;i++)
{
	printf("%c ",a[i]);
}

printf("\n");
return 0;
}
