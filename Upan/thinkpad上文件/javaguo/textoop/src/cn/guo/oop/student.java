package cn.guo.oop;

//模板而已
public class student {
	//静态的数据  可以不用初始化但是 不是属性的变量就得初始化
	 String name;
	 int id;
	 String gender;
	 int weight;
	 
	 computer computer;
	 
	//动态
	 public void study(){
		 System.out.println(name+"在学习");
		 
	 }
	 public void sayhello(String sname){
		 	System.out.println(name+"向"+sname+"你好");
		 	
	 }
	 
		 
		 
		 //int double char/u0000  bool long ...这些都是0 string 是 null
		 
		 //内存中有 栈 （放置局部变量自动分配连续空间 后进先出） 堆 （new 出来的对象 不连续）方法区（也是堆  但是放类的信息 和 static 变量    常量池 ）
	 }



