package castle;

public class HandlerFight implements Handler {

	public HandlerFight(Game game) {
		super(game);
	}

	@Override
	public void doCmd(String word) {
		game.fight();
	}
	
	
	
}
