#include<stdio.h>
int a;
int main(){
printf("请输入一个成绩：");
scanf("%d",&a);
if(a>=90)
{
printf("它的等级是：A\n");
}
if(a>=80&&a<=89)
{
printf("它的等级是：B\n");
}
if(a>=70&&a<=79)
{
printf("它的等级是：C\n");
}
if(a>=60&&a<=69)
{
printf("它的等级是：D\n");
}
if(a<60)
{
printf("它的等级是：E\n");
}


return 0;

}