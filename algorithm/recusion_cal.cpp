#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int expression_value(); 
int item_value();
int factor_value();

int expression_value(){
	int result= item_value();
	bool more =true;

		while(more){
	char c=cin.peek();
	if(c=='+'||c=='-'){
		cin.get();
			int value= item_value();
			if(c=='+')
			result+=value;
			else result-=value;
		
	}else more =false;
	
			
		}
	
	return result;
} 
int item_value(){
	int result =factor_value();
	bool more =true;
	while(more){
	char c=cin.peek();
	if(c=='*'||c=='/'){ 
		cin.get();
			int value= factor_value();
			if(c=='*')
			result*=value;
			else result/=value;
		
	}else more =false;
	return result;
}
}
int factor_value(){
	int result=0;
	char c=cin.peek();
	if(c=='('){
		cin.get();
		result=expression_value();
		cin.get();
	}else{
		while(isdigit(c)){
		result=result*10+c-'0';
		cin.get();
		c=cin.peek();
		}	
	}
	
	
	return result;
}
	


int main(){
	cout<<expression_value()<<endl;
}
