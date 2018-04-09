package clock;

public class clock {
	private display hour = new display(24);
	private display minite = new display(60);

	public void start() {
		// clock c=new clock();
		while (true) {
			minite.increase();
			if (minite.get() == 0) {
				hour.increase();
				
			}
			System.out.println(hour.get()+":"+minite.get());
		}

	}

	public static void main(String[] args) {
		clock c = new clock();
		c.start();

	}
}
