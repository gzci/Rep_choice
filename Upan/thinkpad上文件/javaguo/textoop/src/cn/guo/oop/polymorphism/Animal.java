package cn.guo.oop.polymorphism;

public class Animal {
	public void  voice(){
		System.out.println("��ͨ����Ľ���");
		
		
	}

}
class Cat extends Animal{
	public void  voice(){
		System.out.println("������");
		
		
	}
	
	
}
class Dog extends Animal{
	public void  voice(){
		System.out.println("������");
		
		
	}
	
	
}
class Pig extends Animal{
	public void  voice(){
		System.out.println("�ߺߺ�");
		
		
	}
	
	
}