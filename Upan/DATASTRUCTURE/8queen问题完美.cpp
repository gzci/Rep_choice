#include<iostream>
using namespace std;
int g_count=0;
int p_count=0;
const int N=14;
int chess[N][N]={0};
void print(){
	for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				cout<<chess[i][j]<<' ';
			}
			cout<<endl; 
		}
		cout<<endl;
		g_count++;
} 
bool CanPlace(int row,int col){
	p_count++;
	for(int i=0;i<N;i++){
		if(chess[i][col]==1){//查找列 
			return false;
		}
		if(chess[row][i]==1){//查找行 
			return false;
		}
	}


	for(int i=0;i<N;i++){//查找对角线能放不 左上 
		if(row-i<0||col-i<0){
			break;
		}
		if(chess[row-i][col-i]==1){
			return false;
		}
	}
	

	for(int i=0;i<N;i++){//查找对角线  右上 
		if(row-i<0||col+i>N-1){
			break;
		}
		if(chess[row-i][col+i]==1){
			return false;
		}

	}	
		

	for(int i=0;i<N;i++){//左下 
		if(row+i>N-1||col-i<0){
			break;
		}
		if(chess[row+i][col-i]==1){
			return false;
		}
	}	
	

	for(int i=0;i<N;i++){//右下 
		if(row+i>N-1||col+i>N-1){
			break;
		}
		if(chess[row+i][col+i]==1){
			return false;
		}
	}
	
	return true;
}
void EightQueen(int row,int col){
	
	

	if(row==N){// 显示结果 
		print();
	}
	else{
		for(int j=0;j<N;j++){
			if(CanPlace(row,j)){
				
				chess[row][j]=1;//放1 
				
				EightQueen(row+1,j);//这里每次返回到上一个row j也是上一个j 就是上次皇后的位置 
				
				chess[row][j]=0;//回溯 backtracking 
				
			}
		} 
	}
};

int main(){

	
	EightQueen(0,0);
	
	cout<<p_count<<endl;
	
	return 0;
}
