#include<iostream>
using namespace std;
template<class type>
class stackchar{
	
	
	public:
		stackchar();
		bool empty() const;
		type push(const type &item);
		type top(); 
		type pop();
	private:
		type entry[maxstack];
		int  count;
			
};
stackchar::stackchar(){
   	stackchar::count=0;
	}
type stackchar::push(const type & item){
	entry[count++]=item;
	return 0;
}
type stackchar::pop(){
	--count;
	return 0;
}
type stackchar::top()
{	char item;
	item=entry[count-1];
	return item;
}
