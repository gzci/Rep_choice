//最后一个for算法写错了
#include<stdio.h>
int main()
{
int a,b,c,i;
double he=0;
double pingfang=0;
double daoshu=0;
double ans;
printf("Please input the a,b,c:");
scanf("%d%d%d",&a,&b,&c);
for(i=1;i<=a;i++)
{
  he=he+i;
}
for(i=1;i<=b;i++)
{
pingfang=pingfang+i*i;
}
for(i=1;i<=c;i++)
{
daoshu=daoshu+1.0/i;
}
ans=daoshu+pingfang+he;

printf("Output:\n");
printf("The ans is: %.4f\n",ans);
return 0;

}
