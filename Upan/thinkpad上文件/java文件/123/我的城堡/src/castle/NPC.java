package castle;

import java.util.ArrayList;

public class NPC extends People {
	private String name;
	private int saleType;
	private ArrayList<Item> goods = new ArrayList<Item>();
	
	
	public NPC(String name, int saleType) {
		this.name = name;
		this.saleType = saleType;		
	}
	
	public String getName() {
		return name;
	}
	
	public int getSaleType() {
		return saleType;
	}
	
	public void showGoods() {
		System.out.print("出售 ");
		for(int i = 1; i < goods.size();i ++) {			
			System.out.print(" " + i + ". " + goods.get(i -1).getDescription());
			System.out.println(" ");
		}
		System.out.println(".");
	}
	
}
