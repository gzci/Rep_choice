package day330homework;

public class text2 {
	public static void main(String[] args){
		Person a = new Person ("张三","北京","111","ab@126.com");
		System.out.println(a.toString()+"\n");
		Employee b = new Employee ("王五","上海","222","cd@126.com","二教",6000);
		System.out.println(b.toString()+"\n");
		Faculty c = new Faculty ("赵六","上海","333","ef@126.com","二教",5000,"9点",Faculty.ASSOCIATE_PROFESSOR);
		System.out.println(c.toString());
	}
}

class Person{
	protected String name;
	protected String address;
	protected String phone;
	protected String email;
	Person(){}
	Person(String name,String address,String phone,String email){
		this.name=name;
		this.phone=phone;
		this.address=address;
		this.email=email;
	}
	public String toString(){
		return "姓名"+name+"\n地址"+address+"\n电话号码"+phone+"\n电子邮件"+email;
	}
}

class Employee extends Person{
	protected String office;
	protected int salary;
	Employee(){}
	Employee(String name,String address,String phone,String email,String office,int salary){
		this.name=name;
		this.phone=phone;
		this.address=address;
		this.email=email;
		this.office=office;
		this.salary=salary;
	}
	public String toString(){
		return "姓名"+name+"\n地址"+address+"\n电话号码"+phone+"\n电子邮件"+email+"\n办公室"+office+"\n工资"+salary;
	}
}

	class Faculty extends Employee{
	public static final int TEACHING_ASSITANT = 1 ; 
	public static final int LECTURER = 2 ;
	public static final int ASSOCIATE_PROFESSOR = 3 ;
	public static final int PROFESSOR = 4 ;
	private String workingDayAndTime ;
	private int title;
	Faculty(){}
	Faculty(String name,String address,String phone,String email,String office,int salary,String workingDayAndTime,int title){
		this.name = name;
		this.phone = phone;
		this.address = address;
		this.email=email;
		this.office=office;
		this.salary=salary;
		this.workingDayAndTime=workingDayAndTime;
		this.title=title;
	}
	public String toString(){
		return "姓名"+name+"\n地址"+address+"\n电话号码"+phone+"\n电子邮件"+email+"\n办公室"+office+"\n工资"+salary+"\n办公时间"+workingDayAndTime+"\n职称"+title;
	}
}
