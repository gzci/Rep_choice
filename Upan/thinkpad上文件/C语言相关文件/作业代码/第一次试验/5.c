#include<stdio.h>
int a;
int main(){
printf("������һ���ɼ���");
scanf("%d",&a);
if(a>=90)
{
printf("���ĵȼ��ǣ�A\n");
}
if(a>=80&&a<=89)
{
printf("���ĵȼ��ǣ�B\n");
}
if(a>=70&&a<=79)
{
printf("���ĵȼ��ǣ�C\n");
}
if(a>=60&&a<=69)
{
printf("���ĵȼ��ǣ�D\n");
}
if(a<60)
{
printf("���ĵȼ��ǣ�E\n");
}


return 0;

}