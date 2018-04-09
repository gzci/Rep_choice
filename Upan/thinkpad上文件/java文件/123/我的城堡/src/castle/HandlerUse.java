package castle;

public class HandlerUse extends Handler {

	public HandlerUse(Game game) {
		super(game);
	}

	@Override
	public void doCmd(String word) {
		game.pickUpItem();
	}
	
	
}
