package cn.guo.oop;

public class point {
	double x,y,z;//������ľ������� �������ʼ����
	public point(double x,double y,double z){//����������Ļ��ܳ�ʼ�����ԣ�
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
