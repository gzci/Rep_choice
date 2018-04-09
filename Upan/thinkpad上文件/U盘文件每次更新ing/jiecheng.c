#include<stdio.h>
int  jiec(int s);

int main(){
int  y=0,n=1;
int  s;
printf("Please input n:");
scanf("%d",&s);
if(s==0)printf("Output:\n%d\n",0);else printf("Output:\n%d\n",jiec(s));



return 0;

}
int  jiec(int s){
	int y,n=1;
for(y=1;y<=s;y++){

n=n*y;

}

return n;
}
