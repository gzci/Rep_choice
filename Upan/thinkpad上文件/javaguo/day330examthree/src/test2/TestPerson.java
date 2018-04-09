package test2;

public class TestPerson {
	public static void main(String args[]) {
		Faculty f = new Faculty("Jerry", "副教授");

		System.out.println(f.toString() + f.Volunteer("北京市慈善义工协会"));
	}
}

class Person {
	private String name;

	public Person() {
	}

	public Person(String name) {
		this.name = name;
	}

	public String toString() {
		return "姓名" + name + "\n";
	}

}

interface Volunteer1 {
	 String Volunteer(String a);
}

class Faculty extends Person implements Volunteer1 {

	private String title;
	public static final String TEACHING_ASSISTANT = "助教";
	public static final String LECTURER = "讲师";
	public static final String ASSOCIATE_PROFESSOR = "副教授";
	public static final String PROFESSOR = "教授";

	public Faculty(String name, String title) {
		super(name);
		this.title = title;

	}

	public String Volunteer(String she) {

		return she;
	}

	public String toString() {
		return super.toString() + "职称" + title + "\n" + "所属社团";
	}

}
