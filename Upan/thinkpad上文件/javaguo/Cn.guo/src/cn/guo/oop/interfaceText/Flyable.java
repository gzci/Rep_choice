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
		// TODO 自动生成的方法存根
		System.out.println("飞机飞");
	}
	
	
		
}
class man implements Flyable,Attack{
	int weight;
	
	
	public void fiy() {
		// TODO 自动生成的方法存根
		System.out.println("人飞");
	}

	public void Attack() {
		// TODO 自动生成的方法存根
		
	}
	
		
}