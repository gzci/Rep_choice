#include<iostream>
using namespace std;
void move (int count,int start,int finish, int temp){
	if(count>0){
		move(count-1,start,temp,finish);
		cout<<"move disk "<<count<<" from "<<start<<" to "<<finish<<"."<<endl;
		move(count-1,temp,finish,start);
					
	} 
}
int main(){
	move(3,1,3,2);
} 
