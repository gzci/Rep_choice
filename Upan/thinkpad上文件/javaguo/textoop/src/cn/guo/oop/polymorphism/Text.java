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
		Cat w =new Cat();//�̳и��������
		Animal d = w;
//		***************************************
		Animal a = new Cat();
		Animal b = new Dog();//�������Ǹ���� ����
		Animal c = new Pig();
		textAnimalVoice(a);
		textAnimalVoice(b);
		textAnimalVoice(c);
		Cat a2=(Cat)a;//����ǿ��ת�� a������ animal ǿ��ת�ͳ��� cat
		System.out.println(a2 instanceof Cat);			
//		instanceof���ж�һ�������������ǲ��� �����������
		
		
	}
	

}
