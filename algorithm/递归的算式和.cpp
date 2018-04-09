#include<string>
#include<iostream>
#include<cmath>
using namespace std;
//终于AC了。。。累死了。 
inline int GetBit(int n, int i)  
{  
    return (n >> i) & 1;  // 返回 n 的 第 i 位  
}  
void cimi(int n){
	bool b1=false;
	if(n==0) {cout<<"0";return;	}
	else if(n==2){cout<<"2";return ;	}
	if(n==3){cout<<"2+2(0)"	;return ;}
	else 
	for(int i=16;i>=0;i--){
		if(GetBit(n,i)){
			if(i==1){
				cout<<"2";
				if(GetBit(n,i-1))
				cout<<"+"; 
			}else{
				cout<<"2(";
				cimi(i);
				cout<<")";
				for(int j=i-1;j>=0;j--){
					if(GetBit(n,j))
					b1=true;
				}
				if(b1){
					cout<<"+"; 
					b1=false;
				}
				
			}
			
		} 
	}
	
	 
} 
main(){
	 int m;
    while(cin >> m){
        cimi(m);
        cout << endl;
    }
    return 0;
}
