package day315;

import java.util.Scanner;

public class Vehicle {
float speed;

public Vehicle(float speed) {
	super();
	this.speed = speed;
}

public Vehicle() {
	super();
}

public float getSpeed() {
	return speed;
}

public void setSpeed(float speed) {
	this.speed = speed;
}
	public float speedUp(float up){
		if((speed+=up)>=240){
			speed=240;
			
		}
		
			
			
		
		return speed;
		
	}
	public float speedDown(float down){
		if((speed-=down)<=0){
			speed=0;
			
			
		}
		return speed;
		
	}
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		
		Vehicle vehicle=new Vehicle(in.nextFloat());
		System.out.println("初始速度是"+vehicle.speed);
		vehicle.speedUp(10);
		System.out.println("加速10后的速度是"+vehicle.speed);
		vehicle.speedDown(20);
		System.out.println("降速20后的速度是"+vehicle.speed);
	}
}
