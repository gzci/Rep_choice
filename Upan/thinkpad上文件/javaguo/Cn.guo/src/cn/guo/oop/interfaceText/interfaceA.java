package cn.guo.oop.interfaceText;

public interface interfaceA {
	void aaa();
	

}
interface InterfaceB{
	void bbb();
	
}
interface InterfaceC extends InterfaceB,interfaceA{
	void ccc();
	
}
class TesClass implements InterfaceC{

	public void bbb() {
		// TODO 自动生成的方法存根
		
	}

	public void aaa() {
		// TODO 自动生成的方法存根
		
	}

	public void ccc() {
		// TODO 自动生成的方法存根
		
	}
	
	
}