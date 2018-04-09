package animal;

import java.util.ArrayList;

import field.Location;

public abstract class Animal {
	private int ageLimit;
	private int breedableAge;
	private int age;
	private boolean isAlive = true;
	private double breedCoefficient=0;
	
	public abstract Animal newAnimal();
	public Animal(int ageLimit, int breedableAge,double breedCoefficient) {
		this.ageLimit = ageLimit;
		this.breedableAge = breedableAge;
		this.breedCoefficient=breedCoefficient;
		
		
	}
	
	protected int getAge() {
		return age;
	}
	
	protected double getAgePercent() {
		return (double)age/ageLimit;
	}
	
	
	/*public Animal breed() {
		Animal ret = null;
		if ( isBreedable() && Math.random() < 0.05 ) {
			ret = newAnimal();
		}
		return ret;
	}*/
	public Animal breed()
    {
        Animal ret = null;
        if ( isBreedable() && Math.random() < 0.05 )
        {
        if(this instanceof Fox)
            ret = new Fox();
            
        else
            ret = new Rabbit();
        }
        return ret;
    }
	public void grow() {
		age++;
		if ( age >= ageLimit ) {
			die();
		}
	}
	
	public void die() {
		isAlive = false;
	}
	
	public boolean isAlive() { 
		return isAlive; 
	}
	
	public boolean isBreedable() {
		return age >= breedableAge;
	}
	
	public Location move(Location[] freeAdj) {
		Location ret = null;
		if ( freeAdj.length>0 && Math.random() < 0.02 ) {
			ret = freeAdj[(int)(Math.random()*freeAdj.length)];
		}
		return ret;
	}
	
	@Override
	public String toString() {
		return ""+age+":"+(isAlive?"live":"dead");
	}

	public Animal feed(ArrayList<Animal> neighbour) {
		return null;
	}
	
	protected void longerLife(int inc) {
		ageLimit += inc;
	}
}
