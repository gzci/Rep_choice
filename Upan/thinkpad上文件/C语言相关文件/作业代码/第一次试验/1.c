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
printf("Բ�ܳ�=%.2f\n",c);
printf("Բ���=%.2f\n",s);
printf("�����=%.2f\n",qs);
printf("�����=%.2f\n",qv);
printf("Բ�����=%.2f\n",zv);





return 0;

}