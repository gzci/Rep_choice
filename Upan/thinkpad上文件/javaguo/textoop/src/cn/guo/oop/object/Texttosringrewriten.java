package cn.guo.object;

public class Texttosringrewriten  {
	public static void main(String[] args) {
		Object Obj=new Object();
		Textsucceed suc =new Textsucceed();
		
		Texttosringrewriten Obj2=new Texttosringrewriten();
		System.out.println(Obj2.toString());
		System.out.println(suc.peihesuper());
		
	}

public String toString() {
		return "我他妈是 object里的tostring我被重写了 我原来返回的是地址";//这他妈是个Object总类里的 tostring 让我改写了

}
	
}