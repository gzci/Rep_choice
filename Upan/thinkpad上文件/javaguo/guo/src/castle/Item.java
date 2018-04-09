package castle;

public class Item {
	private String description;
	private int type;
	private int recoverHealth;
	private int attack;
	private int defense;
	private int ID;
	
	public int getRecoverHealth() {
		return recoverHealth;
	}
	public void setRecoverHealth(int recoverHealth) {
		this.recoverHealth = recoverHealth;
	}
	public int getAttack() {
		return attack;
	}
	public void setAttack(int attack) {
		this.attack = attack;
	}
	public int getDefense() {
		return defense;
	}
	public void setDefense(int defense) {
		this.defense = defense;
	}
	public Item(){
		
	}
	public Item(String description, int type, int id) {
		this.description = description;
		this.type = type;
		this.ID = id;
	}
	

	
	public String getDescription() {
		return description;
	}
	
	public int getType() {
		return type;
	}
	
	public int getID() {
		return ID;
	}
	
	
	
	
}
