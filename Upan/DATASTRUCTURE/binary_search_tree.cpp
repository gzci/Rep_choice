#include<iostream>
tree find(int x,tree s){
	if(!s) printf("null");
	else{
		if(x>s->data) 
			return find(x,s->left);
		else if 
		    return find(x,s->right);
		else 
		  return s;
	}
}


tree findmax(tree s){
	while(s->right) s=s->right;
		return s;
}

tree findmin(tree s){
	while(s->left) s=s->left;
		return s;
}


tree insert(int x,tree s){
	if(!s){
		s=malloc(sizeof(s));
		s->data=x;
		s->left=s->right=null;
		
	}else{
		if(x>s->data) s->right=insert(int x,s->right);
		else if(x<s->data) s->left= insert(int x,s->left);
	}
	return s;
}

tree Delete(int x,tree s){
	tree temp_max;
	if(!s) printf("null");
	else if(x>s->data) s->right=Delete(int x,s->right);
	else if(x<s->data) s->left= Delete(int x,s->left);
	else{
		if(s->left&&s->right){
			temp_max=findmax(s->left);//error 1
			s->data=temp_max->data;
			s->left=Delete(temp_max->data,s);//s->left
			
		}else{
			tree temp_free;
			temp_free=s;
			if(!s->left){
				s=s->right;
				
			}else if(!s->right)
				s=s->left;
			free(temp_free); 
		}
		
		
		
		
	}
	return s;
}
