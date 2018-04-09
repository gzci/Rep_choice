package castle;

public class HandlerHelp extends Handler {
	
	public HandlerHelp(Game game) {
		super(game);
	}
	
	//隐形耦合
	
	
	@Override
	public void doCmd(String word) {
		System.out.print("迷路了吗？你可以做的命令有：");
		game.printHelpInfo();
        System.out.println("如：\tgo east");
	}

}
