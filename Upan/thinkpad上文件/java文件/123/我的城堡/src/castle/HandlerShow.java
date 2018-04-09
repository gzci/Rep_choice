package castle;

public class HandlerShow extends Handler {

	public HandlerShow(Game game) {
		super(game);
	}

	@Override
	public void doCmd(String word) {
		if ( word.equals("item")) {
			game.showItem();
		}else if( word.equals("state")) {
			game.showState();
		}else if ( word.equals("map")) {
			game.showPrompt();
		}else if ( word.equals("monster")) {
			game.showMonster();
		}else{
			System.out.println("show的完整命令为 show state 或者 show item 或者 show map");
		}
		
	}

	
	
}
