package cn.guo.oop;

public class Textoverload {
	
	//这他妈是一个类里面的方法呀
	public int add(int a,int b){
		return a+b;
		
	}
	public static void main(String[] args){
		mymath m = new mymath();
		Textoverload k = new Textoverload();
		int result=m.add(4, 5);
		int kkk=k.add(4, 5);
		
		
		
	
	
		System.out.println(result);
		System.out.println(kkk);
		
	}

}



class mymath{//这他妈也能不重新建个类 直接放一个里面也可以
	public int add(int a,int b){
		return a+b;
		
	}
}