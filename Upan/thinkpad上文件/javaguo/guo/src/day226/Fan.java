package day226;
    
    import java.util.Scanner;
    
    public class Fan {
    	int  SLOW=3;
    	int MEDIUM=2;
    	int FAST=1;
    	private int speed =SLOW;
    	private double radius=5;
    	private String color = "blue";
    	private boolean on=false;
    
    	void getspeed(int speed){
    		this.speed=speed;
    	}
    	void getradius(double radius){
    		this.radius=radius;
    	}
        void getcolor(String color){
    		this.color=color;
    	}
    	void turnon(boolean on){
    		this.on=on;
    	}
    	Fan(){
    		
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
    	public static void main(String[] args){
    		Scanner input = new Scanner(System.in);
    		Fan fan1=new Fan();
    		Fan fan2=new Fan();
    		fan1.getradius(input.nextDouble());
    		input.nextLine();
    		fan1.getcolor(input.nextLine());
    		fan1.turnon(input.nextBoolean());
    		fan2.getradius(input.nextDouble());
    		input.nextLine();
    		fan2.getcolor(input.nextLine());
    		fan2.turnon(input.nextBoolean());
    		fan1.tostring();
    		System.out.println();
    		fan2.tostring();
    	}
    	
    	
    }