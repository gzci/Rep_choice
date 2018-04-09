#include<iostream>
#include <string>
#include <algorithm>
#include <string.h>
#include<stdio.h>
using namespace std;

string ori[100000];

int times[100000];
int N;
string stdZ[8]={"ABC","DEF","GHI","JKL","MNO","PRS","TUV","WXY"};
char stdN[8]={'2','3','4','5','6','7','8','9'};

void del(){
	for(int i=0;i<N;++i){
		string::iterator it = ori[i].begin();
    while ((it=find(it, ori[i].end(), '-'))!=ori[i].end())
    {
     
            ori[i].erase(it);
            if (it == ori[i].end()) break;
        }  
	}
}
void swich(){
	for(int i=0;i<N;++i){
		for(int j=0;j<ori[i].length();++j){
			if(!isdigit(ori[i][j]))
				for(int k=0;k<8;k++){
				if (stdZ[k].find(ori[i][j] ) < stdZ[k].length())
					
						ori[i][j]=stdN[k];
				}
		
		}
	}
}
void gettimes(){
	int count=0;
	for(int i=0;i<N;i++){
		count=0;
		if(ori[i][(ori[i].length()+1)]!='b'){
			for(int j=i+1;j<N;j++){
				
			if(!ori[i].compare(ori[j])){
				count++;
				ori[j][(ori[j].length()+1)]='b';
			}
				
				
		}
		ori[i][(ori[i].length()+1)]=count+1+48;
		
		}
		
		
	}
}
void print(){
	 	for(int i=0;i<N;i++){
	 		ori[i]=ori[i]+ori[i][(ori[i].length()+1)];
	 		
	 	
		 }
		sort(ori,ori+N);

	
		int m=1;
		for(int i=0;i<N;++i){
		if(isdigit(ori[i][(ori[i].length()-1)])&&ori[i][(ori[i].length()-1)]>49){
			m=0;
			for(int j=0;j<3;++j){
						cout<<ori[i][j];
			
		}
			cout<<'-';
			for(int j=3;j<ori[i].length()-1;++j){
						cout<<ori[i][j];
			
		}
		
		cout<<" "<<ori[i][ori[i].length()-1];
		cout<<endl;
		}
//		
		if(m) 
			cout<<"No duplicates."<<endl;
		
		
	}
	
		
	}
int main(){
	
	cin>>N;
	
	for(int i=0;i<N;i++){
		cin >>ori[i];
	}
	
	del();

	swich();
	gettimes();
	print();
	
}
