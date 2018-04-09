package day330homework;

public class text3 {
	public static void main(String[] args){
		Triangle triangle = new Triangle (3,4,5,"black",true);
		System.out.println(triangle.toString());
		System.out.println("面积"+triangle.getArea());
		System.out.println("周长"+triangle.getPerimeter());
	}
}

abstract class GeometricObject{
	String color;
	boolean filled;
	GeometricObject(){}
	GeometricObject(String color,boolean filled){
		this.color=color;
		this.filled=filled;
	}
	public String getColor(){
		return color;
	}
	public void setColor(String color){
		this.color=color;
	}
	boolean getFilled(){
		return filled;
	}
	public void setFilled(boolean filled){
		this.filled=filled;
	}
	public abstract String toString();
	abstract double getArea();
	abstract double getPerimeter();
}
class Triangle extends GeometricObject{
	double s1,s2,s3;
	Triangle(double s1,double s2,double s3,String color,boolean filled){
		this.s1=s1;this.s2=s2;this.s3=s3;super.color=color;super.filled=filled;
	}
	public String toString() {
		return "颜色"+color+"\n"+"是否填充"+filled;
	}

	double getArea() {
		double p=(s1+s2+s3)/2;
		return Math.sqrt(p*(p-s1)*(p-s2)*(p-s3));
	}

	double getPerimeter() {
		return s1+s2+s3;
	}
}
