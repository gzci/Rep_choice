package cn.guo.oop.polymorphism;

public class Text {
public static void textAnimalVoice(Animal c){
		c.voice();
		
	}
/*
	public static void textAnimalVoice(Dog c){
		c.voice();
		
	}
	public static void textAnimalVoice(Pig c){
		c.voice();
		
	}*/
	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Cat w =new Cat();//继承父类的类型
		Animal d = w;
//		***************************************
		Animal a = new Cat();
		Animal b = new Dog();//这他妈是父类的 类型
		Animal c = new Pig();
		textAnimalVoice(a);
		textAnimalVoice(b);
		textAnimalVoice(c);
		Cat a2=(Cat)a;//这是强制转型 a本来是 animal 强制转型成了 cat
		System.out.println(a2 instanceof Cat);			
//		instanceof是判断一个变量的类型是不是 后面这个类型
		
		
	}
	

}
