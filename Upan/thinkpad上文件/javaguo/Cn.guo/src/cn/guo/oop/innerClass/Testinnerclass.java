package cn.guo.oop.innerClass;

public class Testinnerclass {
	public static void main(String[] args) {
		face c=new face();
		face.nose f=c.new nose();//�ڲ���Ĺ���������
		f.breathe();
		face.ear k=new face.ear();//��̬ �ڲ���Ĺ���������
		
		
		
	}

}
class face{
	String tapec;
	
	class nose{
		int tape;
		void breathe(){
			System.out.println(face.this.tapec);//���ⲿ��ķ���
			
		}
		
	}
	static class ear{
		void aaa(){
			System.out.println("lalalal");
			
		}
	}
	
}