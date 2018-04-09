#include<iostream> 
using namespace std;
class node
{
public:
 char ch;
 struct node *l,*r;
 node(char c,node *lchild,node *rchild):ch(c),l(lchild),r(rchild){}
};
void space(int n)
{
 for(int i=0; i<n; i++)
  cout << ' ';
}
/* 以 
*右子树
*根
*左子树
*的形式打印
*/
void print(node *T,int n)
{
 if(!T)return;
 print(T->r, n+4);
 space(n);
 cout << T->ch << endl;
 print(T->l, n+4);
}
int main()
{
 node *T = new node('A',
  new node('B',NULL,NULL),
  new node('C',
   new node('D',NULL,NULL),
   new node('E',NULL,NULL)));
 
 print(T,0);
}

