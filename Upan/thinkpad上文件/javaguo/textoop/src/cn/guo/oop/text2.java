package cn.guo.oop;

public class text2 {
	public static void main(String[] args){
	
		 
		 student s2 =new student();
		 s2.id=123123;
		 System.out.println("�ҵ�id��"+s2.id);
	     computer c =new computer();
	     c.brand = "����";
	     s2.computer=c;
	     System.out.println(s2.computer.brand);
	     
			
}
}