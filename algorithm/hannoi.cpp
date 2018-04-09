#include<iostream>
using namespace std;
void hanoi(int n,char now,char des,char tem){
if(n>0){
	hanoi(n-1,now,tem,des );
	cout << n<<":"<<now << "->" << des << endl;  
	hanoi(n-1,des,now, tem);
}
	
}
main(){
	int n;
	char a,b,c;
	cin >>n>>a>>b>>c;
	
	hanoi(n,a,b,c);
	
}
