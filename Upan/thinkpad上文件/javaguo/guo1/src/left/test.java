package left;

import java.util.Scanner;
public class test {
	
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in); 
		double a1 = input.nextDouble();
		String color1 = input.next();
		input.next();
		boolean filled1 = input.hasNextBoolean();
		
		double a2 = input.nextDouble();
		double a3 = input.nextDouble();
		String color2 = input.next();
		input.next();
		boolean filled2 = input.hasNextBoolean();
		Circle o1 = new Circle(a1,color1,filled1);
		System.out.println(o1.toString());
		o1.printCircle();
		
		System.out.println("\n");
		Rectangle o2 = new Rectangle(a2,a3,color2,filled2);
		System.out.println(o2.toString());
		System.out.println("矩形的宽为" + o2.getWidth());
		System.out.println("矩形的长为" + o2.getHeight());
		System.out.println("矩形的周长为" + o2.getPerimeter());
		System.out.println("矩形的面积为" + o2.getArea());
		
	}

}
class GeometricObject {
	private String color = "Write";
	private boolean filled = false;
	 GeometricObject(){
	}
	 GeometricObject(String color, boolean filled){
		this.color = color;
		this.filled = filled;
	}
	public String getColor(){
		return color;
	}
	public void setColor(String color){
		this.color = color;
	}
	public boolean getFilled(){
		return filled;
	}
	public void setFilled(boolean filled){
		this.filled = filled;
	}
	public String toString(){
		if(this.filled==true){
			return  "颜色为" + color + "\n"+"填充";
		}
		else
			return  "颜色为" + color + "\n"+"未填充";
	} 
}
class Circle extends GeometricObject {
	  private double radius;

	  public Circle() {
	  }

	  public Circle(double radius) {
	    this.radius = radius;
	  }
	  public Circle(double radius, String color,boolean filled){
		  this.setColor(color);
		  this.radius =radius;
		  this.setFilled(filled);
		  
	  }

	  public double getRadius() {
	    return radius;
	  }

	  public void setRadius(double radius) {
	    this.radius = radius;
	  }


	  public double getArea() {
	    return radius * radius * Math.PI;
	  }


	  public double getDiameter() {
	    return 2 * radius * Math.PI;
	  }

	  public double getPerimeter() {
	    return 2 * radius ;
	  }

	  public void printCircle() {
	    System.out.println( "圆的半径为"
	       + radius + "\n"+"圆的直径为" + getPerimeter()
	       + "\n"+"圆的周长为" + getDiameter() + 
	       "\n"+"圆的面积为" + getArea());
	  }
	}
class Rectangle extends GeometricObject {
	  private double width;
	  private double height;

	  public Rectangle() {
	  }

	  public Rectangle(double width, double height) {
	    this.width = width;
	    this.height = height;
	  }
	  public Rectangle(double width, double height,String color,boolean filled) {
		    this.width = width;
		    this.height = height;
		    this.setColor(color);
		    this.setFilled(filled);
		  } 

	  public double getWidth() {
	    return width;
	  }


	  public void setWidth(double width) {
	    this.width = width;
	  }


	  public double getHeight() {
	    return height;
	  }


	  public void setHeight(double height) {
	    this.height = height;
	  }

	  public double getArea() {
	    return width * height;
	      
	  }
	  public double getPerimeter() {
	    return 2 * (width + height);
	  }
	}

//4.5 yellow true
//6.5 8.9 green false
