#include<stdio.h>
int main(){
	 int a,n,i,z;
	int sn=0;
	printf("please give me \"a\" and \"n\":\n");
	scanf("%d %d",&a,&n);
	z=a;


	for(i=0;i<n;i++){
	   sn=sn+a;
	   a=a*10+z;
	   


	
	}

  printf("%d",sn);





return 0;

}
