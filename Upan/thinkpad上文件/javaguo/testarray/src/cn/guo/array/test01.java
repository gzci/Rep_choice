package cn.guo.array;

public class test01 {
	public static void main(String[] args) {
		int a[] ={1,2,3} ;// int[] a =new int[3];
		car[] car = new car[2];// �������Ϊ��������ţ��
		// car[0]=new car("����");
		// car[1]=new car("����");
		for(int i=0;i<car.length;i++)
		{
			System.out.println(car[i]);		
		}//java����new���������ʼ��Ϊ0 �ǻ������� ����nuLL
		for(int q : a){
		
		
		System.out.println(q);
			
		}
		Integer k = null; //ÿ���������� ����һ���������� ����������Կ����ֵ��Сֵ
		
		System.out.println(k.MAX_VALUE);
		// car cars[]={new car("����"),new car("��ʱ��")};
		car cars[] = { new car("����"), new car("��ʱ��"), };
		 
		// for (int i = 0; i < car.length; i++) {
		// System.out.println(car[i]);
		//
		// }
		// for (int i = 0; i < a.length; i++) {
		// a[i]=i;
		//
		// }

	}
}
