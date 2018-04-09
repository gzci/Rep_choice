package cn.guo.oop.polymorphism;

public class Animal {
	public void  voice(){
		System.out.println("ÆÕÍ¨¶¯ÎïµÄ½ĞÉù");
		
		
	}

}
class Cat extends Animal{
	public void  voice(){
		System.out.println("ß÷ß÷ß÷");
		
		
	}
	
	
}
class Dog extends Animal{
	public void  voice(){
		System.out.println("ÍúÍúÍô");
		
		
	}
	
	
}
class Pig extends Animal{
	public void  voice(){
		System.out.println("ºßºßºß");
		
		
	}
	
	
}