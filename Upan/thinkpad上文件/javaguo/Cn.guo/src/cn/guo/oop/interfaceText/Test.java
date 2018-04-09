package cn.guo.oop.interfaceText;

public class Test {
public static void main(String[] args) {
	Flyable f=new man() ;
	 man c=(man)f;//强制转型  看和原来一样不
	 c.weight=0;//都为强制转型 但是  这个是新建了一个对象出来 相当于复制了一个对象而下面这个相当于是
	 ((man)f).weight=0;//直接强制转型后对原来对象的进行操作。
	 

			 
	 
	
	
	
		
		
	

}
}
