package cn.guo.final00;


public/*final*/ class Animal {//final 修饰类 这个类就不能被继承
	
	String eye;
	
	
		public /*final*/ void run(){//final也可以 修饰方法 本方法不可重写
			System.out.println("跑");
			
		}
		public void eat(){
			System.out.println("吃");
			
		}
}


class Mammal extends Animal{//继承了 上面内个累的所有东西  

	public void run(){
		System.out.println("跑 啊啊啊啊");
		
	}
	
			
}

