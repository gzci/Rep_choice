package castle;

public class Monster extends People{
	private int ID;
	private String description;
	private int dropID;

	
	
	public Monster(String description , int health, int attack, int defense, int gold, int exp, int id, int dropid) {
		super(health, attack, defense, gold, exp);
		this.description = description;
		this.ID = id;
		this.dropID = dropid;
	}
	




	public String getDescription() {
		return description;
	}



	public int getID() {
		return ID;
	}



	public int getDropID() {
		return dropID;
	}




}
