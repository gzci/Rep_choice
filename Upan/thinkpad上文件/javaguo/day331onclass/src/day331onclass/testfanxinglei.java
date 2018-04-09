package day331onclass;

public class testfanxinglei<T, G> {
	T net;
	G nem;

	public testfanxinglei(T net, G nem) {
		// super();
		this.net = net;
		this.nem = nem;
	}

	public static void main(String[] args) {
//		testfanxinglei<Integer, Integer> aTestfanxinglei = new testfanxinglei<Integer, Integer>(
//				4, 6);
//		System.out.println(aTestfanxinglei.toString());
		point<String, Integer> p1=new point<String, Integer>("fuck", 1);
		System.out.println(p1);
	}
}

class point<T1, T2> {
	T1 X;
	T2 Y;

	public point(T1 x, T2 y) {
		super();
		X = x;
		Y = y;
	}
	
	@Override
	public String toString() {
		return "point [X=" + X + ", Y=" + Y + "]";
	}

	
}