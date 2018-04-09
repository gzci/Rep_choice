#include<iostream>
#include<stack>
using namespace std;
//树的类 主要成员变量 是 数据域 和左右两个指针 
class tree{

	private:

		int data;

		tree* leftchild=NULL;

		tree* rightchild=NULL;

	public:
		void SGprint(); 
//无参数构造器 
		void UNRPorder(tree *s); 
		tree(){

		}
//带参数构造器 
		tree(int data,tree* leftchild,tree* rightchild){

			this->data=data;

			this->leftchild=leftchild;

			this->rightchild=rightchild;

			

		}

		tree* insert(int x,tree*s );

		void preorder(tree *s);

		tree* swap(tree *s);

}; 
//构造一棵查找树 
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


// 前序输出这个树的元素
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
//交换函数 用前序 来实现 
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
//主函数 s 是树的根节点 
int main(){

	int a;

	tree *s=NULL;
//当 输入的不是数字 循环会停止 
	while(cin>>a)

	s=s->insert(a,s);

	cin.clear();
	//非递归前序遍历 
	s->UNRPorder(s); 
	//递归前序遍历 
//	s->preorder(s);
	cout<<endl;
	s->swap(s);

//	s->preorder(s);

	

}
