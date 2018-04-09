#include<stdio.h>
#include<math.h>
int main(){
	 int B,S,G,N;
	 
	 
	 for(N=100;N<1000;N++)

	 {
		 B=N/100;
	 S=(N/10)%10;
	 G=(N%100)%10;
		 if(N==pow(B,3)+pow(S,3)+pow(G,3)){
		   printf("这他妈是水仙花数：%d\n",N);
		 }
	

	 }
	 





return 0;
}