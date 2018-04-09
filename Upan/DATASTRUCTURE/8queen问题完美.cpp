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
		if(chess[i][col]==1){//������ 
			return false;
		}
		if(chess[row][i]==1){//������ 
			return false;
		}
	}


	for(int i=0;i<N;i++){//���ҶԽ����ܷŲ� ���� 
		if(row-i<0||col-i<0){
			break;
		}
		if(chess[row-i][col-i]==1){
			return false;
		}
	}
	

	for(int i=0;i<N;i++){//���ҶԽ���  ���� 
		if(row-i<0||col+i>N-1){
			break;
		}
		if(chess[row-i][col+i]==1){
			return false;
		}

	}	
		

	for(int i=0;i<N;i++){//���� 
		if(row+i>N-1||col-i<0){
			break;
		}
		if(chess[row+i][col-i]==1){
			return false;
		}
	}	
	

	for(int i=0;i<N;i++){//���� 
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
	
	

	if(row==N){// ��ʾ��� 
		print();
	}
	else{
		for(int j=0;j<N;j++){
			if(CanPlace(row,j)){
				
				chess[row][j]=1;//��1 
				
				EightQueen(row+1,j);//����ÿ�η��ص���һ��row jҲ����һ��j �����ϴλʺ��λ�� 
				
				chess[row][j]=0;//���� backtracking 
				
			}
		} 
	}
};

int main(){

	
	EightQueen(0,0);
	
	cout<<p_count<<endl;
	
	return 0;
}
