package cn.guo.oop;

public class Textoverload {
	
	//��������һ��������ķ���ѽ
	public int add(int a,int b){
		return a+b;
		
	}
	public static void main(String[] args){
		mymath m = new mymath();
		Textoverload k = new Textoverload();
		int result=m.add(4, 5);
		int kkk=k.add(4, 5);
		
		
		
	
	
		System.out.println(result);
		System.out.println(kkk);
		
	}

}



class mymath{//������Ҳ�ܲ����½����� ֱ�ӷ�һ������Ҳ����
	public int add(int a,int b){
		return a+b;
		
	}
}