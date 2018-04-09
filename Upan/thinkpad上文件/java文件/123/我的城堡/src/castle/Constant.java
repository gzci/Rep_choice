package castle;

public class Constant {
	
	//player's attribute
	protected static int PLAYER_HEALTH = 2000;
	protected static int PLAYER_ACCACK = 200;
	protected static int PLAYER_DEFENCE = 200;
	
	//type
	
	protected static int DRUG = 0;
	protected static int WEAPON = 1;
	protected static int ARMOR = 2;
	

	
	
	//物品数值
	protected static String ITEM_1_NAME = "生命药剂";
	protected static int DRUG_1_NUM = 100;
	protected static String ITEM_2_NAME = "活力药剂";
	protected static int DRUG_2_NUM = 200;
	protected static String ITEM_3_NAME = "活力药剂";
	protected static int DRUG_3_NUM = 500;
	protected static String ITEM_4_NAME = "活力圣瓶";
	protected static int DRUG_4_NUM = 500;
	protected static String ITEM_5_NAME = "龙之血瓶";
	protected static int DRUG_5_NUM = 10000;
	
	protected static String ITEM_501_NAME = "剑";
	protected static int WEAPON_1_NUM = 10;
	protected static String ITEM_502_NAME = "巨剑";
	protected static int WEAPON_2_NUM = 100;
	protected static String ITEM_503_NAME = "黑暗之刃";
	protected static int WEAPON_3_NUM = 10000;
	
	
	protected static String ITEM_1001_NAME = "布甲";
	protected static int ARMOR_1_NUM = 10;
	protected static String ITEM_1002_NAME = "皮甲";
	protected static int ARMOR_2_NUM = 100;
	protected static String ITEM_1003_NAME = "圣焰铠甲";
	protected static int ARMOR_3_NUM = 10000;
	
	
	
	//怪物数据
	protected static String MONSTER1_NAME = "骷髅勇士";
	protected static int MONSTER1_HEALTH = 100;
	protected static int MONSTER1_ACCACK = 10;
	protected static int MONSTER1_DEFENCE = 10;
	protected static int MONSTER1_GOLD = 10;
	protected static int MONSTER1_EXP = 10;
	
	protected static String MONSTER2_NAME = "怨魂";
	protected static int MONSTER2_HEALTH = 200;
	protected static int MONSTER2_ACCACK = 10;
	protected static int MONSTER2_DEFENCE = 5;
	protected static int MONSTER2_GOLD = 100;
	protected static int MONSTER2_EXP = 100;
	
	protected static String MONSTER3_NAME = "腐臭僵尸";
	protected static int MONSTER3_HEALTH = 100;
	protected static int MONSTER3_ACCACK = 5;
	protected static int MONSTER3_DEFENCE = 20;
	protected static int MONSTER3_GOLD = 50;
	protected static int MONSTER3_EXP = 50;
	
	protected static String MONSTER4_NAME = "吸血鬼王";
	protected static int MONSTER4_HEALTH = 300;
	protected static int MONSTER4_ACCACK = 20;
	protected static int MONSTER4_DEFENCE = 10;
	protected static int MONSTER4_GOLD = 200;
	protected static int MONSTER4_EXP = 200;
	
	protected static String MONSTER5_NAME = "吸血亲王";
	protected static int MONSTER5_HEALTH = 300;
	protected static int MONSTER5_ACCACK = 25;
	protected static int MONSTER5_DEFENCE = 20;
	protected static int MONSTER5_GOLD = 300;
	protected static int MONSTER5_EXP = 300;
	
	protected static String MONSTER6_NAME = "尸巫";
	protected static int MONSTER6_HEALTH = 500;
	protected static int MONSTER6_ACCACK = 50;
	protected static int MONSTER6_DEFENCE = 20;
	protected static int MONSTER6_GOLD = 500;
	protected static int MONSTER6_EXP = 500;
	
	protected static String MONSTER7_NAME = "大尸巫";
	protected static int MONSTER7_HEALTH = 500;
	protected static int MONSTER7_ACCACK = 60;
	protected static int MONSTER7_DEFENCE = 30;
	protected static int MONSTER7_GOLD = 700;
	protected static int MONSTER7_EXP = 700;
	
	protected static String MONSTER8_NAME = "黑暗骑士";
	protected static int MONSTER8_HEALTH = 1000;
	protected static int MONSTER8_ACCACK = 100;
	protected static int MONSTER8_DEFENCE = 50;
	protected static int MONSTER8_GOLD = 1000;
	protected static int MONSTER8_EXP = 1000;
	
	protected static String MONSTER9_NAME = "恐惧骑士";
	protected static int MONSTER9_HEALTH = 1000;
	protected static int MONSTER9_ACCACK = 150;
	protected static int MONSTER9_DEFENCE = 100;
	protected static int MONSTER9_GOLD = 1500;
	protected static int MONSTER9_EXP = 1500;
	
	protected static String MONSTER10_NAME = "血龙";
	protected static int MONSTER10_HEALTH = 2000;
	protected static int MONSTER10_ACCACK = 500;
	protected static int MONSTER10_DEFENCE = 250;
	protected static int MONSTER10_GOLD = 5000;
	protected static int MONSTER10_EXP = 5000;
	
	
	//物品ID
	//药品类
	protected static int ITEM_1_ID = 1;
	protected static int ITEM_2_ID = 2;
	protected static int ITEM_3_ID = 3;
	protected static int ITEM_4_ID = 4;
	protected static int ITEM_5_ID = 5;
	
	//武器类
	protected static int ITEM_501_ID = 501;
	protected static int ITEM_502_ID = 502;
	protected static int ITEM_503_ID = 503;
	
	//防具类
	protected static int ITEM_1001_ID = 1001;
	protected static int ITEM_1002_ID = 1002;
	protected static int ITEM_1003_ID = 1003;
	
	
	
	
	
	
	
	
	//怪物ID
	protected static int MONSTER_1_ID = 100001;
	protected static int MONSTER_2_ID = 100002;
	protected static int MONSTER_3_ID = 100003;
	protected static int MONSTER_4_ID = 100004;
	protected static int MONSTER_5_ID = 100005;
	protected static int MONSTER_6_ID = 100006;
	protected static int MONSTER_7_ID = 100007;
	protected static int MONSTER_8_ID = 100008;
	protected static int MONSTER_9_ID = 100009;
	protected static int MONSTER_10_ID = 100010;
	
	
	
	

	
	
	
	
	//暂时不用数据
	protected static int NPC_GOLD = 0;
	protected static int NPC_EXP = 0;
	
	
	
	
	//创建物品
	protected static Item creatItem(int id) {		
		switch(id) {
		case 1:
			return new Drug(ITEM_1_NAME, DRUG, ITEM_1_ID ,DRUG_1_NUM);
		case 2:
			return new Drug(ITEM_2_NAME, DRUG, ITEM_2_ID ,DRUG_2_NUM);
		case 3:
			return new Drug(ITEM_3_NAME, DRUG, ITEM_3_ID, DRUG_3_NUM);
		case 4:
			return new Drug(ITEM_4_NAME, DRUG, ITEM_4_ID, DRUG_4_NUM);
		case 5:
			return new Drug(ITEM_5_NAME, DRUG, ITEM_5_ID, DRUG_5_NUM);
			
			
		case 501:
			return new Weapon(ITEM_501_NAME, WEAPON, ITEM_501_ID, WEAPON_1_NUM);
		case 502:
			return new Weapon(ITEM_502_NAME, WEAPON, ITEM_502_ID, WEAPON_2_NUM);
		case 503:
			return new Weapon(ITEM_503_NAME, WEAPON, ITEM_503_ID, WEAPON_3_NUM);
			
		case 1001:
			return new Armor(ITEM_1001_NAME, ARMOR, ITEM_1001_ID, ARMOR_1_NUM);
		case 1002:
			return new Armor(ITEM_1002_NAME, ARMOR, ITEM_1002_ID, ARMOR_2_NUM);
		case 1003:
			return new Armor(ITEM_1003_NAME, ARMOR, ITEM_1003_ID, ARMOR_3_NUM);
			
			
		default :
			System.out.println("创建物品错误！");
			return null;
		}
	}

	
	
	protected static Monster creatMonster(int id,int drop_id) {
		switch(id) {
		case 100001:
			return new Monster(MONSTER1_NAME, MONSTER1_HEALTH, MONSTER1_ACCACK, MONSTER1_DEFENCE, MONSTER1_GOLD, MONSTER1_EXP, MONSTER_1_ID, drop_id);
		case 100002:
			return new Monster(MONSTER2_NAME, MONSTER2_HEALTH, MONSTER2_ACCACK, MONSTER2_DEFENCE, MONSTER2_GOLD, MONSTER2_EXP, MONSTER_2_ID, drop_id);
		case 100003:
			return new Monster(MONSTER3_NAME, MONSTER3_HEALTH, MONSTER3_ACCACK, MONSTER3_DEFENCE, MONSTER3_GOLD, MONSTER3_EXP, MONSTER_3_ID, drop_id);
		case 100004:
			return new Monster(MONSTER4_NAME, MONSTER4_HEALTH, MONSTER4_ACCACK, MONSTER4_DEFENCE, MONSTER4_GOLD, MONSTER4_EXP, MONSTER_4_ID, drop_id);
		case 100005:
			return new Monster(MONSTER5_NAME, MONSTER5_HEALTH, MONSTER5_ACCACK, MONSTER5_DEFENCE, MONSTER5_GOLD, MONSTER5_EXP, MONSTER_5_ID, drop_id);
		case 100006:
			return new Monster(MONSTER6_NAME, MONSTER6_HEALTH, MONSTER6_ACCACK, MONSTER6_DEFENCE, MONSTER6_GOLD, MONSTER6_EXP, MONSTER_6_ID, drop_id);
		case 100007:
			return new Monster(MONSTER7_NAME, MONSTER7_HEALTH, MONSTER7_ACCACK, MONSTER7_DEFENCE, MONSTER7_GOLD, MONSTER7_EXP, MONSTER_7_ID, drop_id);
		case 100008:
			return new Monster(MONSTER8_NAME, MONSTER8_HEALTH, MONSTER8_ACCACK, MONSTER8_DEFENCE, MONSTER8_GOLD, MONSTER8_EXP, MONSTER_8_ID, drop_id);
		case 100009:
			return new Monster(MONSTER9_NAME, MONSTER9_HEALTH, MONSTER9_ACCACK, MONSTER9_DEFENCE, MONSTER9_GOLD, MONSTER9_EXP, MONSTER_9_ID, drop_id);
		case 100010:
			return new Monster(MONSTER10_NAME, MONSTER10_HEALTH, MONSTER10_ACCACK, MONSTER10_DEFENCE, MONSTER10_GOLD, MONSTER10_EXP, MONSTER_10_ID, drop_id);
			
			
			
			
		default :
			System.out.println("创建怪物失败!");
			return null;
		}
	}

	
}
