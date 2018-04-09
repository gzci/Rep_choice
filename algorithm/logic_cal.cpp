#include<iostream>
using namespace std;
bool expression_value();
bool item_value();
	bool F=false;
	bool V=true;
int main(){

	for(int i=1;i<20;i++){
		if()
	}		
	if(!expression_value()) printf("Expression: F\n");
	else printf("Expression: T\n"); 
	
	 
} 
bool expression_value(){
	bool result=item_value();
	bool more =true;
	while(more){
	char c=cin.peek();
		if(c==' '){
		cin.get();
		c=cin.peek();
	}
	if(c=='&'||c=='|'){
		cin.get();
			bool value= item_value();
			if(c=='&')
			result&=value;
			else result|=value;
		
	}else more =false;
	
			
		}

	return result;
}
bool item_value(){
	bool result=false;
	char a=cin.peek();
	if(a==' '){
		cin.get();
		a=cin.peek();
	}
	if(a=='('){
		cin.get();
		 result=expression_value();
		cin.get();	
	}else{
		if(a=='!'){
			cin.get();
			char b=cin.get();
			if(b=='V') result=F;
			else result=V;
			
		}else{
			char b=cin.get();
			if(b=='V') result=V;
			else result=F;
		}
	}
	 return result;
}

