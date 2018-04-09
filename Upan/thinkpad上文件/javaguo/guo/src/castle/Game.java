package castle;

import java.util.HashMap;
import java.util.Scanner;

public class Game {
    private Room currentRoom;
    private HashMap<String, Handler> handlers = new HashMap<String, Handler>();
    private HashMap<String, Room> room = new HashMap<String, Room>();
    private HashMap<Room, Item> item = new HashMap<Room, Item>();  //存放物品
    private HashMap<Room, Monster> monster = new HashMap<Room, Monster>();//存放怪物
    private People people = new People(Constant.PLAYER_HEALTH, Constant.PLAYER_ACCACK, Constant.PLAYER_DEFENCE);
    
    
    
    public Game() 
    {
    	handlers.put("go", new Handler() {
			
			public boolean isBye() {
				// TODO 自动生成的方法存根
				return false;
			}
			
			public void doCmd(String word) {
				// TODO 自动生成的方法存根
				
			}
		});
    	
    	handlers.put("help", new HandlerHelp(this));
    	handlers.put("bye", new HandlerBye(this));
    	handlers.put("use", new HandlerUse(this));  //新增use命令
    	handlers.put("show", new HandlerShow(this)); //新增show命令
    	handlers.put("fight", new HandlerFight(this));//新增fight命令
        createRooms();
    }

    private void createRooms()
    {
        
        //创建第一层房间
        room.put("dark1", new Room("黑暗监牢1"));
        room.put("dark2", new Room("黑暗监牢2"));
        room.put("dark3", new Room("黑暗监牢3"));
        room.put("dark4", new Room("黑暗监牢4"));
        room.put("dark5", new Room("黑暗监牢5"));
        room.put("dark6", new Room("黑暗监牢6"));
        room.put("dark7", new Room("黑暗监牢7"));
        room.put("dark8", new Room("黑暗监牢8"));
        room.put("dark9", new Room("黑暗监牢9"));
        room.put("dark10", new Room("黑暗监牢10"));
        room.put("dark11", new Room("黑暗监牢11"));
        room.put("dark12", new Room("黑暗监牢12"));
        room.put("dark13", new Room("黑暗监牢13"));
        room.put("dark14", new Room("黑暗监牢14"));
        room.put("dark15", new Room("黑暗监牢15"));
        room.put("dark16", new Room("黑暗监牢16"));
        
        room.get("dark1").setExit("east", room.get("dark2"));        
        room.get("dark2").setExit("west", room.get("dark1"));
        room.get("dark2").setExit("east", room.get("dark3"));
        room.get("dark3").setExit("west", room.get("dark2"));
        room.get("dark3").setExit("east", room.get("dark4"));
        room.get("dark3").setExit("south", room.get("dark7"));
        room.get("dark4").setExit("west", room.get("dark3"));
        room.get("dark4").setExit("south", room.get("dark8"));
        room.get("dark5").setExit("east", room.get("dark6"));
        room.get("dark5").setExit("south", room.get("dark9"));
        room.get("dark6").setExit("east", room.get("dark7"));
        room.get("dark6").setExit("west", room.get("dark5"));
        room.get("dark7").setExit("north", room.get("dark3"));
        room.get("dark7").setExit("west", room.get("dark6"));
        room.get("dark8").setExit("north", room.get("dark4"));
        room.get("dark8").setExit("south", room.get("dark12"));
        room.get("dark9").setExit("north", room.get("dark5"));
        room.get("dark9").setExit("south", room.get("dark13"));
        room.get("dark10").setExit("east", room.get("dark11"));
        room.get("dark11").setExit("west", room.get("dark10"));
        room.get("dark11").setExit("south", room.get("dark15"));
        room.get("dark12").setExit("north", room.get("dark8"));
        room.get("dark12").setExit("south", room.get("dark16"));
        room.get("dark13").setExit("north", room.get("dark9"));
        room.get("dark13").setExit("east", room.get("dark14"));
        room.get("dark14").setExit("west", room.get("dark13"));
        room.get("dark14").setExit("east", room.get("dark15"));
        room.get("dark15").setExit("west", room.get("dark14"));
        room.get("dark15").setExit("north", room.get("dark11"));
        room.get("dark16").setExit("north", room.get("dark12"));
        
        monster.put(room.get("dark6"), Constant.creatMonster(Constant.MONSTER_1_ID,Constant.ITEM_1001_ID));
        monster.put(room.get("dark10"), Constant.creatMonster(Constant.MONSTER_2_ID, Constant.ITEM_501_ID));
        monster.put(room.get("dark15"), Constant.creatMonster(Constant.MONSTER_3_ID, Constant.ITEM_2_ID));
        item.put(room.get("dark13"), Constant.creatItem(Constant.ITEM_1_ID));
        
        //创建第二层房间
        room.put("light1", new Room("光明殿堂1"));
        room.put("light2", new Room("光明殿堂2"));
        room.put("light3", new Room("光明殿堂3"));
        room.put("light4", new Room("光明殿堂4"));
        room.put("light5", new Room("光明殿堂5"));
        room.put("light6", new Room("光明殿堂6"));
        room.put("light7", new Room("光明殿堂7"));
        room.put("light8", new Room("光明殿堂8"));
        room.put("light9", new Room("光明殿堂9"));
        room.put("light10", new Room("光明殿堂10"));
        room.put("light11", new Room("光明殿堂11"));
        room.put("light12", new Room("光明殿堂12"));
        room.put("light13", new Room("光明殿堂13"));
        room.put("light14", new Room("光明殿堂14"));
        room.put("light15", new Room("光明殿堂15"));
        room.put("light16", new Room("光明殿堂16"));
        
        
        room.get("light1").setExit("east", room.get("light2"));
        room.get("light2").setExit("south", room.get("light6"));
        room.get("light3").setExit("southwest", room.get("light10"));
        room.get("light4").setExit("west", room.get("light3"));
        room.get("light5").setExit("south", room.get("light9"));
        room.get("light6").setExit("west", room.get("light5"));
        room.get("light6").setExit("south", room.get("light10"));
        room.get("light6").setExit("east", room.get("light7"));
        room.get("light7").setExit("south", room.get("light11"));
        room.get("light8").setExit("north", room.get("light4"));
        room.get("light9").setExit("east", room.get("light10"));
        room.get("light10").setExit("south", room.get("light14"));
        room.get("light10").setExit("north", room.get("light6"));
        room.get("light11").setExit("east", room.get("light12"));
        room.get("light12").setExit("south", room.get("light16"));
        room.get("light12").setExit("north", room.get("light8"));        
        room.get("light13").setExit("north", room.get("light9"));
        room.get("light14").setExit("west", room.get("light13"));
        room.get("light14").setExit("east", room.get("light15"));
        room.get("light15").setExit("east", room.get("light16"));
        
        item.put(room.get("light11"), Constant.creatItem(Constant.ITEM_2_ID));
        item.put(room.get("light3"), Constant.creatItem(Constant.ITEM_2_ID));
        monster.put(room.get("light6"), Constant.creatMonster(Constant.MONSTER_4_ID, Constant.ITEM_3_ID));
        monster.put(room.get("light5"), Constant.creatMonster(Constant.MONSTER_5_ID, Constant.ITEM_1002_ID));
        monster.put(room.get("light4"), Constant.creatMonster(Constant.MONSTER_6_ID, Constant.ITEM_502_ID));
        
        
        //创建第三层房间
        room.put("trial1", new Room("审判大厅1"));
        room.put("trial2", new Room("审判大厅2"));
        room.put("trial3", new Room("审判大厅3"));
        room.put("trial4", new Room("审判大厅4"));
        room.put("trial5", new Room("审判大厅5"));
        room.put("trial6", new Room("审判大厅6"));
        room.put("trial7", new Room("审判大厅7"));
        room.put("trial8", new Room("审判大厅8"));
        room.put("trial9", new Room("审判大厅9"));
        room.put("trial10", new Room("审判大厅10"));
        room.put("trial11", new Room("审判大厅11"));
        room.put("trial12", new Room("审判大厅12"));
        room.put("trial13", new Room("审判大厅13"));
        room.put("trial14", new Room("审判大厅14"));
        room.put("trial15", new Room("审判大厅15"));
        room.put("trial16", new Room("审判大厅16"));
        
        room.get("trial2").setExit("west", room.get("trial1"));
        room.get("trial3").setExit("west", room.get("trial2"));
        room.get("trial4").setExit("south", room.get("trial16"));
        room.get("trial5").setExit("east", room.get("trial8"));
        room.get("trial6").setExit("southwest", room.get("trial13"));
        room.get("trial7").setExit("north", room.get("trial3"));
        room.get("trial8").setExit("west", room.get("trial7"));
        room.get("trial9").setExit("north", room.get("trial5"));
        room.get("trial10").setExit("west", room.get("trial9"));
        room.get("trial11").setExit("west", room.get("trial10"));
        room.get("trial12").setExit("west", room.get("trial11"));
        room.get("trial13").setExit("east", room.get("trial14"));
        room.get("trial14").setExit("northeast", room.get("trial4"));
        room.get("trial15").setExit("northwest", room.get("trial6"));
        room.get("trial16").setExit("west", room.get("trial15"));
        room.get("trial16").setExit("north", room.get("trial12"));
        
        item.put(room.get("trial6"), Constant.creatItem(Constant.ITEM_4_ID));
        monster.put(room.get("trial4"), Constant.creatMonster(Constant.MONSTER_7_ID, Constant.ITEM_5_ID));
        monster.put(room.get("trial5"), Constant.creatMonster(Constant.MONSTER_9_ID, Constant.ITEM_503_ID));
        monster.put(room.get("trial10"), Constant.creatMonster(Constant.MONSTER_8_ID, Constant.ITEM_1003_ID));
        monster.put(room.get("trial1"), Constant.creatMonster(Constant.MONSTER_10_ID, 0));
        
        room.get("dark1").setExit("up", room.get("light1"));
        room.get("light1").setExit("down", room.get("dark1"));
        room.get("light16").setExit("up", room.get("trial16"));
        room.get("trial16").setExit("down", room.get("light16"));

        //起点
        currentRoom = room.get("dark16");
        
    }

    private void printWelcome() {
        System.out.println();
        System.out.println("欢迎来到魔窟！");
        System.out.println("开启你的冒险吧！");
        System.out.println("如果需要帮助，请输入 'help' 。");
        System.out.println();
        showPrompt();
        
        //调用showState显示角色信息
        showState();
    }

    // 以下为用户命令
    
    //列出所有帮助命令，用空格间隔
    public void printHelpInfo() {
//    	for ( String str : handlers.keySet()){
//    		System.out.print(str);
//    		System.out.print(" ");
//    	}
    	System.out.println(handlers.keySet());
    }


    public void goRoom(String direction) 
    {

    	Room nextRoom = currentRoom.getExit(direction);

        if (nextRoom == null) {
            System.out.println("那里没有门！");
        }
        else {
    	
            currentRoom = nextRoom;
            showPrompt();
            if(item.get(currentRoom) != null){
            	showItem();
            }
            if(monster.get(currentRoom) != null){
            	showMonster();
            }
            
        }
    }
    
    //显示角色信息
    public void showState(){
    	System.out.println("你现在剩余 " + people.getHealth() + "点生命值");
    	System.out.println("攻击力为 " + people.getAttack() + "点");
    	System.out.println("防御力为 " + people.getDefense() + "点");
    	System.out.println("金币有" + people.getGold() + ".");
    	System.out.println("经验有" + people.getExp() + "点。");
    }
    
    
    //显示房间物品
    
    public void showItem() {
    	if ( item.get(currentRoom) == null ) {
    		System.out.println("地上什么都没有！");
    	}else{
    		System.out.println("地上有" + item.get(currentRoom).getDescription() + ".");
    		System.out.println(" ");
    	}
    }
    
    //显示房间中的怪物
    public void showMonster() {
    	if ( monster.get(currentRoom) == null ) {
    		System.out.println("房间内安全，没有发现怪物");
    	} else {
    		System.out.println("警告！————————————");
    		System.out.println("发现" + monster.get(currentRoom).getDescription() + ".");
    	}
    }
    
    
    
    
    //使用物品
    

    
    public void pickUpItem() {
    	if ( item.get(currentRoom) == null ) {
    		System.out.println("地上没有东西！");
    	} else {
    		typeOfMethod(item.get(currentRoom).getType());
    		showState();
    	}
    }
    
    
    public void typeOfMethod(int type) {
    	switch(type) {
    	case 0 : 
    		people.changeHealth(item.get(currentRoom).getRecoverHealth());
    		item.remove(currentRoom);
    		break;
    	case 1 :
    		people.changeAttack(item.get(currentRoom).getAttack());
    		item.remove(currentRoom);
    		break;
    	case 2 :
    		people.changeDefense(item.get(currentRoom).getDefense());
    		item.remove(currentRoom);
    		break;
    	default :
    		System.out.println("类型错误！");
    	}
    }
    
    //战斗
    
    public void fight() {
    	
    	while(!people.isDie()) {
    		if ( people.getDefense() <= monster.get(currentRoom).getAttack()) {
    			people.changeHealth(people.getDefense() - monster.get(currentRoom).getAttack());
    		}
    		if ( monster.get(currentRoom).getDefense() <= people.getAttack()) {
    			monster.get(currentRoom).changeHealth(monster.get(currentRoom).getDefense() - people.getAttack());
    		}
    		if ( monster.get(currentRoom).isDie()) {
   					
    			people.changeGold(monster.get(currentRoom).getGold());
    			people.changeExp(monster.get(currentRoom).getExp());
    			System.out.println("恭喜你，成功击杀了" + monster.get(currentRoom).getDescription() + ".");
    			if(monster.get(currentRoom).getDropID() != 0) {
    				item.put(currentRoom, Constant.creatItem(monster.get(currentRoom).getDropID()));
    				System.out.println("掉落了" + item.get(currentRoom).getDescription() + ".");
    			}      			
    			System.out.println("获得了" + monster.get(currentRoom).getGold() + "金币和" + monster.get(currentRoom).getExp() + "点经验.");
    			showState();
    			monster.remove(currentRoom);
    			break;
    		}
    	}
    	if(people.isDie()) {
    		System.out.println("你已经阵亡，游戏结束！");
    	}
    	
    	
    }
    

	
    public void showPrompt() {
    	System.out.println("你在" + currentRoom);
    	if(!(currentRoom.getExitDesc().length() == 0)){
            System.out.print("出口有: ");
            System.out.println(currentRoom.getExitDesc());
            System.out.println();
    	}else{
    		System.out.println("该房间没有出口！");
    	}

    }
    
    public void play() {
    	Scanner in = new Scanner(System.in);
    	while ( true ) {
    		String line = in.nextLine();
    		String[] words = line.split(" ");
    		Handler handler = handlers.get(words[0]);
    		String value = "";
    		if( words.length > 1){
    			value = words[1];
    		}
    		if (handler != null ) {
    			handler.doCmd(value);
    			if( handler.isBye()){
    				break;
    			}
    		}
    	}
    	
    	in.close();
    }
    
    
	public static void main(String[] args) {
		
		Game game = new Game();
		game.printWelcome();
		game.play();

        
        
        System.out.println("感谢您的光临。再见！");
        
	}

}
