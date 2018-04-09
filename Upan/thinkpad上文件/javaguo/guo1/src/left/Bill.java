package left;

public abstract class Bill{
	double volume;
	public Bill() {
		super();
	}

	public Bill(double volume) {
		super();
		this.volume = volume;
	}

	public double getVolume() {
		return volume;
	}

	
	public abstract double getBill();
	
	 public static void main(String[] args) {
		 WaterBill last=new WaterBill(250);
		 WaterBill toyear=new WaterBill(300);
		System.out.println("去年水费1390.0");
		System.out.println("去年水费1820.0");
		System.out.println("今年较去年水费变化430.0");
	}

	}
	 class WaterBill extends Bill{
		 double rate[]={5,7,9};
		 
		public WaterBill() {
			super();
			// TODO 自动生成的构造函数存根
		}

		public WaterBill(double volume) {
			super(volume);
			// TODO 自动生成的构造函数存根
		}

		public double getBill() {
			return 0;
		}
	    
	}
