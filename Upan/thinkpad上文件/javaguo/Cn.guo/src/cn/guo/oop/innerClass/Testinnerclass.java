package cn.guo.oop.innerClass;

public class Testinnerclass {
	public static void main(String[] args) {
		face c=new face();
		face.nose f=c.new nose();//内部类的构造器调用
		f.breathe();
		face.ear k=new face.ear();//静态 内部类的构造器调用
		
		
		
	}

}
class face{
	String tapec;
	
	class nose{
		int tape;
		void breathe(){
			System.out.println(face.this.tapec);//调外部类的方法
			
		}
		
	}
	static class ear{
		void aaa(){
			System.out.println("lalalal");
			
		}
	}
	
}