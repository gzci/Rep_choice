package castle;

public class Armor extends Item {
	
	public Armor(String str , int type, int id, int defense) {
		super(str, type,id);
		super.setDefense(defense);
	}
	
	
}
