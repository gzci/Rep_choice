package day226;

import java.util.ArrayList;

import org.omg.CORBA.DATA_CONVERSION;

public class datebase {
	ArrayList<item> item =new ArrayList<item>();

	void add(item item){
				this.item.add(item);
	}
	void list(){
		for(item item:this.item){
			item.print();
			
		}
	}
	
public static void main(String[] args) {
	   datebase db=new datebase();
	   db.add(new CD("cd", 1, "这是cd"));
	   db.add(new DVD("dvd", 5, "这是一个dvd"));
	   db.list();
	   
}
	
	
	
}
