package justtestidea;

public class idea {
	int speed;
//	public  idea(){//构造器里面可以写东西
//		
//		 System.out.println("我他妈是一个构造器");
//		 
//		
//	}
//	public  idea(int a){
//		System.out.println("我他妈是一个重载的构造器");
//	}
	public static void main(String[] args) {
		idea vi=new idea();//如果你不写构造器   就可以直接这么构造  如果你写了一个带参数的构造器 你就不能继续这么用
		vi.speed=99;
		
	}
}
