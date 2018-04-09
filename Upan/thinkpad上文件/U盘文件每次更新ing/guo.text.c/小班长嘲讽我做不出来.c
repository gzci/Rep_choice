#include<stdio.h>
int main()
{
char ch;
int i=0,t=0,j=0;
char b[200];
float x;

printf("please input a char and word:\n");

while((ch=getchar())!='\n')
{
b[i]=ch;
i++;
}
for(j=1;j<=i;j++)
{
	if(b[j]==b[0])
	{
		t=t+1;
	}

}
x=(float)t/(i-2);
printf("Output:\n");
printf("The ans is:%f\n",x);


return 0;

}
