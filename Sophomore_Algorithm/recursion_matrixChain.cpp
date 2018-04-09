#include<iostream>
#include<algorithm>
using namespace std;
int recd(int i, int j,int p[]){
	int res;
	if(i==j) 
	return 0;
	else if (i<j){
		res=0x3f3f3f3f;
		for(int k=i;k<j;k++){
			res=min(res,recd(i,k,p)+recd(k+1,j,p)+p[i-1]*p[k]*p[j]);
			
		}
		
	}
	return res;
}
int main(){
	int p[]={10,100,5,50}; 
	
	cout<<recd(1,3,p);
} 



