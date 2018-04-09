package day313homework;


import java.util.Scanner;

public class Circle {
	double radius;
	public Circle(double radius){
		this.radius=radius;
		
	}
	public double getRadius(){
		return radius;
		
	}
	public void setRadius(double speed){
		this.radius=speed;
		
	}
	public double getArea(){
		return 3.14*Math.pow(radius, 2);
		
	}
    public static Circle[] createCircleArray(){
    	Scanner in=new Scanner(System.in);
    	
    	 Circle[] c= new Circle[3];
    	 Circle c1=new Circle (in.nextDouble());
    	 Circle c2=new Circle (in.nextDouble());
    	 Circle c3=new Circle (in.nextDouble());
    	 c[0]=c1;
    	 c[1]=c2;
    	 c[2]=c3;
    	 

    	 return c;
    }
    public static double sum(Circle[] circles){
    	double sum=0;
    	for(int i=0;i<circles.length;i++){
    		sum+=circles[i].getArea();
    		
    	}
    	
    	return sum;
    	
    }
    public static void printCircleArray(Circle[] circles){
    	 System.out.println("半径"+"			"+"面积");
    	 for(int i=0;i<circles.length;i++){
     		System.out.println(circles[i].radius+"			"+circles[i].getArea());
     		
     	}
    	 System.out.println("总面积为"+sum(circles));
    }
	public static void main(String[] args) {
		Circle c1[]=new Circle[3];
		
		c1=createCircleArray();
		printCircleArray(c1);
	}
	
}
