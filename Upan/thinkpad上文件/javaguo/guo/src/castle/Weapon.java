package castle;

public class Weapon extends Item {
	
	public Weapon(String str, int type , int id, int attack) {
		super(str, type, id);
		super.setAttack(attack);
	}
	
	
}
