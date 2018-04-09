package cn.guo.polymorphism.servlet;

public class Text {
	public static void main(String[] args) {
		HttpServlet s=new MyServlet();
		s.service();
	}

}
