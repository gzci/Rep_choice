#include<iostream>
#include <cstring>
#include <algorithm>
//又ZZ了一次  写了大半天 其实就是简单的一个书1000000 按格式输出 printf("%d,%d",sum/1000,sum%1000) 分类讨论就能得到结果 
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
