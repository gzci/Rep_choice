#include<iostream>
#include <cstring>
#include <algorithm>
//��ZZ��һ��  д�˴���� ��ʵ���Ǽ򵥵�һ����1000000 ����ʽ��� printf("%d,%d",sum/1000,sum%1000) �������۾��ܵõ���� 
using namespace std;
int main(){
	int a,b,sum;
	
	cin>>a>>b;
	sum=a+b;
	int t=0;
	string s="";
	if(sum<0){
		sum=-sum;
		while(sum/=10) t++;
	t++;
	 sum=a+b;
	 sum=-sum;
	for(int n=1;t--;n++){
		s+=sum%10+48;
			if(n==3&&t>0)
			s+=","; 	
		if(n==6&&t>0)
			s+=","; 
		sum/=10;
	}
		s=s+"-";
			
		 

	}else{
			while(sum/=10) t++;
	t++;
	 sum=a+b;
	for(int n=1;t--;n++){
		s+=sum%10+48;
			if(n==3&&t>0)
			s+=","; 	
		if(n==6&&t>0)
			s+=","; 
		sum/=10;
	}
	}
	
	reverse(s.begin(),s.end());  
	cout<<s;
} 
