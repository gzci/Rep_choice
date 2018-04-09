package day313revie;

public class hander {
	public void help(){
	System.out.println("迷路了吗？你可以做的命令有：go bye help");
    System.out.println("如：\tgo east");};
	public void bye(){};
	private void goRoom(String direction) 
    {
        Room nextRoom = null;
        nextRoom=currentRoom.setgotoroom(direction);
        
        

        if (nextRoom == null) {
            System.out.println("那里没有门！");
        }
        else {
            currentRoom = nextRoom;
            System.out.println("你在" + currentRoom);
            System.out.print("出口有: ");
            nowexst();
            System.out.println();
        }
    }
}
