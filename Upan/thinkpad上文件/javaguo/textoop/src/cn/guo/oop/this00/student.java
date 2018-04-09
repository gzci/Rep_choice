package cn.guo.this00;




public class student {
	
	 String name;
	 int id;
	 String gender;
	 int weight;
	 static int ss;//这他妈是 static 在下面可以调用
	 
	 public static void printss(){
		 ss=55;//这他妈是上面的static 变量 在static方法中可以调用！！
		 
		 
				 
		 
		 System.out.println(ss);
		 
		 
	 }
	 
	 
	//static 只能调用 static  普通 既可以调用static 又能调用普通
	 

	 public void study(){
		 System.out.println(this.ss+name+"在学习");
		 
	 }
	 public void sayhello(String sname){
		 	System.out.println(name+"向"+sname+"你好");
		 	
	 }
     
		 
		 
	 }



