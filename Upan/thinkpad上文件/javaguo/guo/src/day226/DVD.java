package day226;

public class DVD extends item{


		//	private String name;
//	   private int number;
	   	private String dvdhao;

		public DVD(String name, int number, String dvdhao) {
			super(name, number);
			this.dvdhao = dvdhao;
		}
		public void print(){
			System.out.println("name:" +dvdhao);
		}
}
