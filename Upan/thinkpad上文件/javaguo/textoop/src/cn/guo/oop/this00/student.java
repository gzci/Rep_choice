package cn.guo.this00;




public class student {
	
	 String name;
	 int id;
	 String gender;
	 int weight;
	 static int ss;//�������� static ��������Ե���
	 
	 public static void printss(){
		 ss=55;//�������������static ���� ��static�����п��Ե��ã���
		 
		 
				 
		 
		 System.out.println(ss);
		 
		 
	 }
	 
	 
	//static ֻ�ܵ��� static  ��ͨ �ȿ��Ե���static ���ܵ�����ͨ
	 

	 public void study(){
		 System.out.println(this.ss+name+"��ѧϰ");
		 
	 }
	 public void sayhello(String sname){
		 	System.out.println(name+"��"+sname+"���");
		 	
	 }
     
		 
		 
	 }



