#include<iostream>
#include<stack>
using namespace std;
//������ ��Ҫ��Ա���� �� ������ ����������ָ�� 
class tree{

	private:

		int data;

		tree* leftchild=NULL;

		tree* rightchild=NULL;

	public:
		void SGprint(); 
//�޲��������� 
		void UNRPorder(tree *s); 
		tree(){

		}
//������������ 
		tree(int data,tree* leftchild,tree* rightchild){

			this->data=data;

			this->leftchild=leftchild;

			this->rightchild=rightchild;

			

		}

		tree* insert(int x,tree*s );

		void preorder(tree *s);

		tree* swap(tree *s);

}; 
//����һ�ò����� 
	void tree::SGprint(tree *s){
		
	}
tree* tree::insert(int x,tree* p){

	

	if(!p){

		p=new tree(x,NULL,NULL);

	}else{

		if(x<p->data) p->leftchild=insert(x,p->leftchild);

		else if(x>p->data) p->rightchild=insert(x,p->rightchild);

		

		

			

		return p;

		

	}

}


// ǰ������������Ԫ��
 void tree::UNRPorder(tree *T){
 	stack<tree*> Stack;

	 while(T || !Stack.empty())  
    {  
        while(T)  
        {  
            Stack.push(T);  
            cout<<T->data<<" "; 
            T=T->leftchild;  
        }  
        T=Stack.top();  
        Stack.pop();          
             T=T->rightchild;          
    }                                                                                                                                     
}  
	 
		  
 	 
 
void tree::preorder(tree *s){

	if(s) {

		cout<<s->data<<" ";

		preorder(s->leftchild);

		preorder(s->rightchild);	

	}

	

	

}
//�������� ��ǰ�� ��ʵ�� 
tree* tree::swap(tree *s){

	tree *temp=NULL;

		if(s->leftchild&&s->rightchild) {

//			cout<<"you "<<s->rightchild<<"zuo "<<s->leftchild<<endl;

			temp=s->rightchild;

			s->rightchild=s->leftchild;

			s->leftchild=temp;

//			cout<<"you "<<s->rightchild<<"zuo "<<s->leftchild<<endl; 

		swap(s->leftchild);

		swap(s->rightchild);	

	}

	

}
//������ s �����ĸ��ڵ� 
int main(){

	int a;

	tree *s=NULL;
//�� ����Ĳ������� ѭ����ֹͣ 
	while(cin>>a)

	s=s->insert(a,s);

	cin.clear();
	//�ǵݹ�ǰ����� 
	s->UNRPorder(s); 
	//�ݹ�ǰ����� 
//	s->preorder(s);
	cout<<endl;
	s->swap(s);

//	s->preorder(s);

	

}
