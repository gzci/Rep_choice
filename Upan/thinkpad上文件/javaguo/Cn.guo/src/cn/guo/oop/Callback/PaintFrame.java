package cn.guo.oop.Callback;

public class PaintFrame {
	public static void drawFrame(MyFrame f) {// ���е�ʱ����д������ ��ִ��˭��
		System.out.println("�����߳�");// ����Ǹ��̳� ��̬
		System.out.println("����ѭ��");
		System.out.println("�鿴��Ϣջ");
		f.paint();// ����൱��һ���ع�
	}

	public static void main(String[] args) {
		drawFrame(new Gameframe01());
	}
}

class Gameframe01 extends MyFrame {
	public void paint() {
		System.out.println("������Ϸ����01");
	}

}

class Gameframe02 extends MyFrame {
	public void paint() {
		System.out.println("������Ϸ����02");
	}

}