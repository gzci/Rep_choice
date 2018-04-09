package castle;

import java.util.HashMap;

public class Room {
    private String description;
    private HashMap<String, Room> exits = new HashMap<String, Room>();

    public Room(String description) 
    {
        this.description = description;
    }
    

	public void setExit(String str , Room room) {
    	exits.put(str, room);
    }


    @Override
    public String toString()
    {
        return description;
    }
    
    public String getExitDesc() {
    	StringBuffer sb = new StringBuffer();
    	for( String str : exits.keySet()) {
    		sb.append(str);
    		sb.append(' ');
    	}
    	
    	return sb.toString();
    }
    
    public Room getExit(String direction) {
 	
    	return exits.get(direction);
    }
    
    
}
