package cn.guo.array;

public class test01 {
	public static void main(String[] args) {
		int a[] ={1,2,3} ;// int[] a =new int[3];
		car[] car = new car[2];// 数组可以为任意类型牛逼
		// car[0]=new car("宝马");
		// car[1]=new car("奔驰");
		for(int i=0;i<car.length;i++)
		{
			System.out.println(car[i]);		
		}//java数组new出来都会初始化为0 非基本数据 就是nuLL
		for(int q : a){
		
		
		System.out.println(q);
			
		}
		Integer k = null; //每个基础类型 都有一个包裹类型 这个东西可以看最大值最小值
		
		System.out.println(k.MAX_VALUE);
		// car cars[]={new car("宝马"),new car("保时捷")};
		car cars[] = { new car("宝马"), new car("保时捷"), };
		 
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
