package day226;

import java.io.ObjectOutputStream.PutField;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
class student1{
	String banji;
	int cj;
	
	public student1(String banji, int cj){
		this.banji=banji;
		this.cj=cj;
		
	}
public String toString(){
		
		return banji+cj;
		
	}
}
public class redo {
	public String toString(){
		
		return "";
		
	}
	
	public static void main(String[] args) {
		//˳������
		ArrayList<redo> note=new ArrayList <redo>();
	    redo a =new redo();
	    note.add(a);
	    //��������
	    String [] k=new String[10];
	    int [] q=new int [20];
	    k[1]="sfefe";
	    q[2]=2;
	    System.out.println(k);
	    System.out.println(note);
	    //��������
	    HashSet<Integer > vvi =new HashSet<Integer>();
	    vvi.add(9);
	    vvi.add(0);
	    vvi.add(0);
	    System.out.println(vvi);
	    
// HashMap<String, HashMap<String,Integer>> student = new HashMap<String,HashMap<String,Integer>>();
// 	studen��t.putAll("һ��","С��",90);
//	  HashMap<String, Integer> stu=new HashMap<String, Integer>();
//	  HashMap<String, stu> crose=new HashMap<String, stu>();
//	  student.put("12",);
//	  stu.put("", 10);
	 HashMap<String, student1> stu=new HashMap<String, student1>();
	student1  y=new student1("С��",90);

	stu.put("һ��", y);
	System.out.println(stu);
	


	    
	    
	    
	}
	

}
