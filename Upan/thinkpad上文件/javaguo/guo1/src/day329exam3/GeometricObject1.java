package day329exam3;
public class GeometricObject1 implements java.lang.Comparable<GeometricObject1> {
	String color="white";
	java.util.Date dateCreDated;
	public GeometricObject1() {
	}
	public GeometricObject1(String color,java.util.Date dateCreDated) {
		this.color = color;
		this.dateCreDated = dateCreDated;
	}
	public String getColor() {
		return color;
	}
	public void setColor(String color) {
		this.color = color;
	}
	public java.util.Date getDateCreDated() {
		return dateCreDated;
	}
	
	public String toString() {
		return "颜色" + color ;
	}
	
	public double getperimeter(){
		return 0;
		
	}
	public static void main(String[] args) {
		GeometricObject1[] object=new GeometricObject1[4];
		object[0]=new Circle();
		object[1]=new Circle(20);
		object[2]=new Triangle();
		object[3]=new Triangle(10, 20, 15);
		double ret=(object[0].getperimeter()+object[1].getperimeter()+object[2].getperimeter()+object[3].getperimeter());
		System.out.println("The total perimeter is"+ret);
		System.out.println(object[0].toString());
		System.out.println(object[1].toString());
		System.out.println(object[2].toString());
		System.out.println(object[3].toString());
		double [] per=new double[4];
		per[0]=object[0].getperimeter();
		per[1]=object[1].getperimeter();
		per[2]=object[2].getperimeter();
		per[3]=object[3].getperimeter();
		java.util.Arrays.sort(per);

		System.out.println("The 0th short perimeter is "+per[0]);
		System.out.println("The 1th short perimeter is "+per[1]);
		System.out.println("The 2th short perimeter is "+per[2]);
		System.out.println("The 3th short perimeter is "+per[3]);
	}
	public int compareTo(GeometricObject1 o) {
		int ret=0;
		if(o.getperimeter()==getperimeter()){
			ret=0;
		}
		if(o.getperimeter()>getperimeter()){
			ret=-1;
		}
		if(o.getperimeter()<getperimeter()){
			ret=1;
			
		}
		return ret;
	}
		
}


 class Circle extends GeometricObject1{
	double radius=10;

	public Circle() {
	}

	public Circle(double radius) {
		this.radius = radius;
	}

	public double getRadius() {
		return radius;
	}

	public void setRadius(double radius) {
		this.radius = radius;
	}
	

	
	public String toString() {
		return"颜色" + color +"\n"+"圆的半径是" + radius+"\n" ;
	}

	
	public double getperimeter() {
		return 2*Math.PI*radius;
		
	}
}
 

  class Triangle extends GeometricObject1{
 	double a=3;
 	double b=4;
 	double c=5;
 	public Triangle() {
 	}
 	public Triangle(double a, double b, double c) {
 		super();
 		this.a = a;
 		this.b = b;
 		this.c = c;
 	}
 	public double getA() {
 		return a;
 	}
 	public void setA(double a) {
 		this.a = a;
 	}
 	
 	public String toString() {
 		return "颜色" + color +"\n"+ "三角形的三条边是" + a + " " + b + " " + c +"\n";
 	}
 	
 	public double getperimeter() {
 		return a+b+c;
 		
 	}
 	

 }

