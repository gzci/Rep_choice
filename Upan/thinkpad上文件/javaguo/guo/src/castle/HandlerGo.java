package castle;



public class HandlerGo implements Handler {

	
	public HandlerGo(Game game) {
		super(game);
	}

	@Override
	public void doCmd(String word) {
		game.goRoom(word);
	}
	

	
	
}
