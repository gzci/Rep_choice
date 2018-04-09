package clock;

public class display {
	private int limit=0;
	private  int now=0;
	
	
	public display(int limit){
		this.limit =limit;
		
	}
	public int  get(){
		return now;
		
	}
	public static int  get1(){
		return 1;
		
	}
	public boolean increase(){
		now++;
		if(now==limit){
			now=0;
			
		
		
			
			
		}
		return true;
		
	}
	public static void main(String[] args) {
		display db=new display(24);
		for(;;){
			db.increase();
			System.out.println(db.now);
		}
	
		
	}
}
