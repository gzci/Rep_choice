package cn.guo.final00;


public/*final*/ class Animal {//final ������ �����Ͳ��ܱ��̳�
	
	String eye;
	
	
		public /*final*/ void run(){//finalҲ���� ���η��� ������������д
			System.out.println("��");
			
		}
		public void eat(){
			System.out.println("��");
			
		}
}


class Mammal extends Animal{//�̳��� �����ڸ��۵����ж���  

	public void run(){
		System.out.println("�� ��������");
		
	}
	
			
}

