package day224;

public class display {
	private int limit=0;
	private int now=0;
	
	public display(int limit){
		this.limit =limit;
		
	}
	public int  get(){
		return now;
		
	}
	public void setnow(int now){
		this.now=now;
		
	}
	public void increse(){
		now++;
		if(now==limit)
			now=0;
		
	}
}
		
			
			

