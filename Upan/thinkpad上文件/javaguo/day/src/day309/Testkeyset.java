package day309;

import java.util.HashMap;

public class Testkeyset {
	
	
     public static void main(String[] args) {
    	 HashMap<String, Integer> n=new HashMap<String, Integer>();
    	 n.put("north", 9);
    	 n.put("west", 10);
    	 n.put("xi", 11);
    	 n.put("east", 12);
    	 for(String k:n.keySet()){
    		 if(k.equals("north")){
    			 
    		 }
    		 
    	 }
    	 System.out.println(n);
    	 System.out.println(n.keySet());
    	 System.out.println(n.get("north"));
     }
}
