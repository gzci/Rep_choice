package castle;

public class HandlerUse implements Handler {

	public HandlerUse(Game game) {
		super(game);
	}

	@Override
	public void doCmd(String word) {
		game.pickUpItem();
	}
	
	
}
