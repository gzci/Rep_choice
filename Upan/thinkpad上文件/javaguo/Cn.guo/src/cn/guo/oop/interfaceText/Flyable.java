package cn.guo.oop.interfaceText;

public interface Flyable {
	int MAX_SPEED=11000;
	int MIN_HEIGHT = 1;
	void fiy();
	
}
interface Attack{
	/*public abstract*/void Attack();
	
	
}
class Plane implements Flyable{

	public void fiy() {
		// TODO �Զ����ɵķ������
		System.out.println("�ɻ���");
	}
	
	
		
}
class man implements Flyable,Attack{
	int weight;
	
	
	public void fiy() {
		// TODO �Զ����ɵķ������
		System.out.println("�˷�");
	}

	public void Attack() {
		// TODO �Զ����ɵķ������
		
	}
	
		
}