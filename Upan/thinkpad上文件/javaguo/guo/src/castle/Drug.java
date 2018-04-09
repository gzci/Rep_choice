package castle;

public class Drug extends Item {
	
	public Drug(String str, int type , int id ,int recoverNum) {
		super(str,type,id);

		super.setRecoverHealth(recoverNum);
	}



	
	

}
