package cn.guo.array;

public class textduotai {
 
public static void main(String[] args) {
	Person p1 = new Student(); //True
	Person p2 = new PhDStudent();//True
	PhDStudent phd1 = new Student();//False
	Teacher t1 = new Person();//False
	Student s1 = new PhDStudent();//True
	 
	 
	s1 = p1;//False
	s1 = p2;//False
	P1 = s1;//True
	t1 = s1;//False
	s1 = phd1;//False
	Phd1 = s1;//False
	
}
	
	


public textduotai() {
	super();
	// TODO 自动生成的构造函数存根
}

}
