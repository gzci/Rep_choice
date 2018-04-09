#include<stdio.h>
#define pi 3.14
int main(){

float r,h,c,s,qs,qv,zv;
r=1.5;
h=3;
c=2*pi*r;
s=pi*r*r;
qs=4*pi*r*r;
qv=(4/3)*pi*r*r*r;
zv=s*h;
printf("圆周长=%.2f\n",c);
printf("圆面积=%.2f\n",s);
printf("球面积=%.2f\n",qs);
printf("球体积=%.2f\n",qv);
printf("圆柱体积=%.2f\n",zv);





return 0;

}