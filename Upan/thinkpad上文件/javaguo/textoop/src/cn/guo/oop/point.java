package cn.guo.oop;

public class point {
	double x,y,z;//这他妈的就是属性 让下面初始化了
	public point(double x,double y,double z){//构造器他妈的还能初始化属性！
		 this.x =x;
		 this.y =y;
		 
		 this.z =z;

		 
	}
	public void setX(double _x){
		x =_x;
		
	}
	public void setY(double _y){
		x =_y;
		
	}
	public void setZ(double _z){
		x =_z;
		
	}
	public double distance(point p){
		return Math.sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y)+(z-p.z)*(z-p.z));
		
	}
	public static void main(String[] args){
		point p =new point(3,4,8);
		point p2 =new point(33,34,83);
		System.out.println(p.x);
		
		System.out.println(p.distance(p2));
		
	}

}
