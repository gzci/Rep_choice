package cn.guo.oop.Callback;

public class PaintFrame {
	public static void drawFrame(MyFrame f) {// 运行的时候这写几下面 就执行谁的
		System.out.println("启动线程");// 这就是个继承 多态
		System.out.println("启动循环");
		System.out.println("查看信息栈");
		f.paint();// 这就相当于一个回钩
	}

	public static void main(String[] args) {
		drawFrame(new Gameframe01());
	}
}

class Gameframe01 extends MyFrame {
	public void paint() {
		System.out.println("我是游戏窗口01");
	}

}

class Gameframe02 extends MyFrame {
	public void paint() {
		System.out.println("我是游戏窗口02");
	}

}