#include<iostream>
using namespace std;
lp(char ch){
 	int ret;
 	switch(ch){
 		case '+':ret=3;break;
		case '-':ret=3;break;
		case '*':ret=5;break;
		case '/':ret=5;break;
		case '(':ret=1;break;
		case ')':ret=6;break;
		case '#':ret=0;break; 
		default:ret=-1;		
	 }
 	return ret;
 } 

int main(){
	char ch;
	double d;
	cin>> ch;
	if(isdigit(ch)||lp(ch)!=-1){
		cin.putback(ch);
		cin>> d;
		cout<<d;
	}else{
		cin>>ch;
	}
	cout<<ch<<"fe"<<lp('3'); 
	if(isdigit(ch)||lp(ch)!=-1){
		cin.putback(ch);
		cin>> d;
		cout<<d;
	}else{
		cin>>ch;
	}	
} 
