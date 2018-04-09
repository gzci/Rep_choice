package day330examthreetest1;

import java.lang.Comparable ;
   class GeometricObject implements Comparable<GeometricObject>{
	String color="white";
    public java.util.Date dateCreated;
	GeometricObject(){
		
	}
	GeometricObject(String color){
		this.color=color;
		
	}
	public String getColor(){
		return color;
		
	}
  
	public void setColor(String color){
		
		this.color=color;
	}
	public java.util.Date getDateCreated(){
		return dateCreated;
		
		
	}
	public String toString(){
		return "颜色"+color;
	}
	public double getPerimeter(){
		return 0;
	}
	public int compareTo(GeometricObject o) {
		return 0;
	}

	

}

class Circle extends GeometricObject{
	double radius=10;
	Circle(){
	
	}

	Circle(double radius){
		this.radius=radius;
	}
	public double getRadius(){
		return radius;
	}
	public void setRadius(double radius){
		this.radius=radius;
	}
     public String toString(){
	
		return "颜色"+color+"\n"+"圆的半径是" +radius+"\n";
	}
	public double getPerimeter(){
		return 2*Math.PI*radius;
	}

}
class Triangle extends GeometricObject{
	double a=3;
	double b=4;
	double c=5;
	Triangle(){}
	Triangle(double a,double b,double c){
		this.a=a;
		this.b=b;
		this.c=c;
	}
	double getA(){
			return a;
	}
	void setA(double a){
		this.a=a;
		
	}
	public String toString(){
		return "颜色"+color+"\n"+ "三角形的三条边是"+a +b +c ;
		
	}
	public double getPerimeter() {
 		return a+b+c;
 		
 	}
}
public class Test{
	public static void main(String args[]){
		double totle=0;
		Circle c0=new Circle();
		Circle c1=new Circle(20);
		Triangle c2=new Triangle();
		Triangle c3=new Triangle(10,20,15);
		totle=c0.getPerimeter()+c1.getPerimeter()+c2.getPerimeter()+c3.getPerimeter();
		System.out.println("The total perimeter is"+totle);
		System.out.println(c0.toString());
		System.out.println(c1.toString());
		System.out.println(c2.toString());
		System.out.println(c3.toString());
		double [] paixu=new double[4];
		paixu[0]=c0.getPerimeter();
		paixu[1]=c1.getPerimeter();
		paixu[2]=c2.getPerimeter();
		paixu[3]=c3.getPerimeter();
		java.util.Arrays.sort(paixu);

		System.out.println("The 0th short perimeter is "+paixu[0]);
		System.out.println("The 1th short perimeter is "+paixu[1]);
		System.out.println("The 2th short perimeter is "+paixu[2]);
		System.out.println("The 3th short perimeter is "+paixu[3]);
		
	}
}
