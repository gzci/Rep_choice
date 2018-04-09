package castle;

public class People {
	private int health;
	private int attack;
	private int extraAttack;
	private int defense;
	private int extraDefense;
	private int gold;
	private int exp;
	
	public People() {
		
	}
	
	public People(int health, int attack, int defense) {
		this.health = health;
		this.attack = attack;
		this.defense = defense;
	}
	
	public People(int health, int attcak, int defense, int gold, int exp){
		this(health, attcak, defense);
		this.gold = gold;
		this.exp = exp;
	}
	

	public int getHealth() {
		return health;
	}



	public int getAttack() {
		int i;
		i = attack + extraAttack;
		return i;
	}



	public int getDefense() {
		int i;
		i = defense + extraDefense;
		return i;
	}

	public int getGold() {
		return gold;
	}
	

	public int getExp() {
		return exp;
	}
	
	
	
	public int changeHealth(int i) {
		return health += i;
	}
	
	public int changeAttack(int i) {
		if (i > extraAttack) {
			extraAttack = i;
		}
		int s;
		s = attack + extraAttack;
		return s;
	}
	
	public int changeDefense(int i) {
		if ( i > extraDefense) {
			extraDefense = i;
		}
		int s;
		s = defense + extraDefense;
		return s;
	}

	public int changeGold(int i) {
		return gold += i;
	}
	
	public int changeExp(int i) {
		return exp += i;
	}
	
	public boolean isDie() {
		if( health <= 0) {
			return true;
		}else{
			return false;
		}
		
	}
}
