package day401onclass;

public class test1 {
	int fz;
	int fm=0;
	public int chu() {
		if(fm==0){
			try {
				throw new Exception("fuck");
			} catch (Exception e) {
				// TODO 自动生成的 catch 块
				e.printStackTrace();
			}
			
		}
		return fz/fm;
		
	}
	public static void main(String[] args) throws Exception  {
		test1 qTest1=new test1();
		
		qTest1.chu();
		
		
	}
}
