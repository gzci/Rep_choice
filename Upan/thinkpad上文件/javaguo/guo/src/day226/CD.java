package day226;

public class CD extends item {  
//   private String name;
//  private int number;
  	private String cdhao;

public CD(String name, int number, String cdhao) {
	super(name, number);
	this.cdhao = cdhao;
}

	public void print(){
		System.out.println("name:" +cdhao);
	}
  	
  
}
