package day315;

import java.util.Scanner;



public class Fan {
	final int SLOW=1,MEDIUM=2,FAST=3;
	private int speed =SLOW;
	private double radius =5;
	private String color="blue";
	private boolean on =false;
	public int getSpeed() {
		return speed;
	}
	public void setSpeed(int speed) {
		this.speed = speed;
	}
	public double getRadius() {
		return radius;
	}
	public void setRadius(double radius) {
		this.radius = radius;
	}
	public String getColor() {
		return color;
	}
	public void setColor(String color) {
		this.color = color;
	}
	public boolean isOn() {
		return on;
	}
	public void setOn(boolean on) {
		this.on = on;
	}
	public Fan(int speed, double radius, String color, boolean on) {
		super();
		this.speed = speed;
		this.radius = radius;
		this.color = color;
		this.on = on;
	}
	public Fan() {
		super();
	}
	
	public void tostring(){
		if(this.on==true){
			System.out.println("该风扇的速度为"+this.speed);
			System.out.println("颜色是"+this.color);
			System.out.println("半径是"+this.radius);
		}
		else{
			System.out.println("风扇没有开启");
			System.out.println("该风扇的颜色是"+this.color);
			System.out.println("半径是"+this.radius);
		}
	}
	
	
public static void main(String[] args) {
	Scanner in=new Scanner(System.in);
	Scanner q=new Scanner(System.in);
	Fan f1=new Fan(3, in.nextInt(), in.next(),in.hasNextBoolean());
	int x=q.nextInt();
	String str=q.next();
	boolean b=q.hasNextBoolean();
	
	Fan f2=new Fan(3, x, str,false);
	f1.toString();
	f2.toString();
	
	
}
}
