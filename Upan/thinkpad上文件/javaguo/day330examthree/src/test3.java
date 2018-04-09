abstract class Bill {
	double volume;

	Bill() {
	}

	Bill(double volume) {
		this.volume = volume;
	}

	double getVolume() {
		return volume;
	}

	double getBill() {
		return 0;
	}

}

class WaterBill extends Bill {
	double[] rate = { 5, 7, 9 };

	WaterBill() {
	}

	WaterBill(double volume) {
		this.volume = volume;
	}

	double[] getRate() {
		return rate;
	}

	void setRate(double[] rate) {
		this.rate=rate;
		
	}

	public double getBill() {
		double ret = 0;
		if (getVolume() <= 180) {
			ret = getVolume() * rate[0];

		} else if (getVolume() > 180 && getVolume() <= 260) {
			ret = 180 * rate[0] + (getVolume() - 180) * rate[1];

		} else if (getVolume() > 260) {
			ret = 180 * rate[0] + 80 * rate[1] + (getVolume() - 260) * rate[2];

		}
		return ret;

	}

}

public class test3 {
	public static void main(String args[]) {
		WaterBill b1 = new WaterBill(250);
		WaterBill b2 = new WaterBill(300);
		double chazhi = b2.getBill() - b1.getBill();
		System.out.println("去年水费" + b1.getBill());
		System.out.println("今年水费" + b2.getBill());
		System.out.println("今年较去年水费变化" + chazhi);

	}
}
