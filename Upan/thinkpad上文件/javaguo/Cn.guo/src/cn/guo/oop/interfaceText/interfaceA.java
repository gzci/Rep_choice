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
		// TODO �Զ����ɵķ������
		
	}

	public void aaa() {
		// TODO �Զ����ɵķ������
		
	}

	public void ccc() {
		// TODO �Զ����ɵķ������
		
	}
	
	
}