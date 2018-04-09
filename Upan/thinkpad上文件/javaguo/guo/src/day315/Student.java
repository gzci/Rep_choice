package day315;

import java.util.Scanner;

public class Student {
	String sname;
	int xuehao;
	Course xCourse;
	Course xCourse2;
	
	
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		
		Course c1=new Course(in.next());
		Course c2=new Course(in.next());
		Student s1=new Student();
		Student s2=new Student();
		s1.sname="张三";
		s1.xuehao=1;
		s1.xCourse=c1;
		s1.xCourse2=c2;
		
		s2.sname="李四";
		s2.xuehao=2;
		s2.xCourse=c1;
		c1.laoshi="LXH";
		
		System.out.println(c1.name);
		System.out.println("任课教师"+c1.laoshi);
		System.out.println("选课学生");
		System.out.println("学号 "+s1.xuehao+"姓名 "+s1.sname);
		System.out.println("学号 "+s2.xuehao+"姓名 "+s2.sname+"\n");
		System.out.println("姓名 "+s1.sname);
		System.out.println("所选课程");
		System.out.println(s1.xCourse.name+ "  "+s1.xCourse2.name);
	}

}
class Course{
	String name;
	String laoshi;
	public Course(String name) {
		super();
		this.name = name;
		
	}
	
	
	
	
}
class Teacher{
	String lname;
	int gonghao;
	Course course;
	Course course2;
	Course course3;
	
}
