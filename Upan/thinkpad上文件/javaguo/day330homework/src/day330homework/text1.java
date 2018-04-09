package day330homework;

public class text1 {
	public static void main(String[] args){
		double[] rate = {2.5,2.75,4.1};
		GasBill jiaofei =new GasBill();
		jiaofei.setVolume(380);
		jiaofei.getVolume();
		System.out.println("调价前燃气缴费总额"+jiaofei.getBill());
		double jiaofeiqian=jiaofei.getBill();
		jiaofei.setRate(rate);
		jiaofei.getRate();
		System.out.println("调价后燃气缴费总额"+jiaofei.getBill());
		System.out.println("调价前后燃气缴费总额增加"+(jiaofei.getBill()-jiaofeiqian));
	}	
}

abstract class Bill{
	double volume;
	Bill(){}
	Bill(double volume){
		this.volume=volume;
	}
	public double getVolume(){
		return volume;
	}
	public void setVolume(double volume){
		this.volume=volume;
	}
	public abstract double getBill();
}

class GasBill extends Bill{
	double volume;
	double[] rate ={2.28,2.5,3.9};
	GasBill(){}

	GasBill(double volume){
		this.volume=volume;
	}
	public GasBill(double volume,double[] rate){
		this.volume=volume;
		this.rate=rate;
	}
	double[] getRate(){
		return rate;
				
	}
	void setRate(double[] rate){
		this.rate[0]=2.5;
		this.rate[1]=2.75;
		this.rate[2]=4.1;
	}
	public double getBill(){
		if(getVolume()<=350){
			return getVolume()*rate[0];
		}
		else if(getVolume()>350&&getVolume()<=500){
			return 350*rate[0]+(getVolume()-350)*rate[1];
			}
		else{ 
			return 350*rate[0]+150*rate[1]+(getVolume()-500)*rate[2];
		}
	}
	
}

