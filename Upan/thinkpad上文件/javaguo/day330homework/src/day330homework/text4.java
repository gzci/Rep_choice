package day330homework;





public class text4 {
	public static void main(String[] args){
		Circle c1 = new Circle (5);
		Circle c2 = new Circle (6);
		System.out.println("c1的半径是"+c1.getR()+"\nc2的半径是"+c2.getR());
		System.out.println("c1的周长是"+c1.getPerimeter()+"\nc1的面积是"+c1.getArea());
		if(c1.compareTo(c2)==0){
			System.out.println("c1比c2大\n");
		}else if(c1.compareTo(c2)==1){
			System.out.println("c1与c2相等\n");
		}else{
			System.out.println("c1比c2小\n");
		}
		c1.setR(8);
		System.out.println("c1的半径是"+c1.getR()+"\nc2的半径是"+c2.getR());
		System.out.println("c1的周长是"+c1.getPerimeter()+"\nc1的面积是"+c1.getArea());
		if(c1.compareTo(c2)==0){
			System.out.println("c1比c2大\n");
		}else if(c1.compareTo(c2)==1){
			System.out.println("c1与c2相等\n");
		}else{
			System.out.println("c1比c2小\n");
		}
		c1.setR(6);
		System.out.println("c1的半径是"+c1.getR()+"\nc2的半径是"+c2.getR());
		System.out.println("c1的周长是"+c1.getPerimeter()+"\nc1的面积是"+c1.getArea());
		if(c1.compareTo(c2)==0){
			System.out.println("c1比c2大\n");
		}else if(c1.compareTo(c2)==1){
			System.out.println("c1与c2相等\n");
		}else{
			System.out.println("c1比c2小\n");
		}
	}
}

abstract class GeometricObject{
	abstract double getArea();
	abstract double getPerimeter();
}

 class Circle extends GeometricObject implements Comparable<Circle>{
	double r;
	Circle(){}
	Circle(double r){
		this.r = r ;
	}
	public void setR(double r){
		this.r = r ;
	}
	 double getR(){
		return r;
	}
	 double getArea(){
		return r*r*Math.PI;
	}
	 double getPerimeter(){
		return 2*r*Math.PI;
	}
	
	public int compareTo(Circle o) {
		int jieguo = 0;
		if(getR()>o.getR()){
			jieguo = 0;
		}
		else if(getR()==o.getR()){
			jieguo = 1;
			}
		else if(getR()<o.getR()){
			jieguo = 2;
			}
		return jieguo;
	}
	

}
