#include <stdio.h>
#include <stdlib.h>
#define maxsize 10
typedef struct{
	int date[maxsize];
	int last;
	
	
}list;

void main(){
	
}
list* makept(){
	list *plist;
	plist=(list*)malloc(sizeof(list));
	plist->last=-1;
	return plist;
}
int find(int x,list *p){
	int i=0;
	while(i<p->last){
	
	if(p->date[i]==x){
		return i;
	}
	i++;
}
	return 0;

}
void insert(int x,int i,list* plist){
	//û���жϱ��� 
	//û���жϲ����λ���ǲ��ǺϷ� 
	int k=plist->last;

	for( k;k>=i-1;k--){
		plist->date[k+1]=plist->date[k];
	}
	plist->date[i-1]=x;
	plist->last++;
	
}
void Delete(int i,list *plist){
	//�����ж�λ���ǲ��ǺϷ�
	//���ǲ��ǿ�
	int k;
	for(k=i-1;k<=plist->last;k++){
		plist->date[k]=plist->date[k+1];
		
	}
	plist->last--;
}

