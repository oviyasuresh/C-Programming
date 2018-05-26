package CODEKATTAA;
import java.util.*;
class D
{
	String s;
	int n1;
	char a[];
	int j=0;
	Scanner scan=new Scanner(System.in);
	void getd()
	{
		s=scan.nextLine();
		StringBuffer sb=new StringBuffer(s);
		a=s.toCharArray();
		n1=scan.nextInt();
		if(s.length()==n1)
		   
			System.out.print("0");
		else
		{
		for(int i=0;i<n1;i++)
		{
		   	sb.deleteCharAt(j);
		
		}
		System.out.print(sb.toString());
		}
		
		
	}
}
public class deletenum 
{

	
	public static void main(String[] args) 
	{
		D p=new D();
		p.getd();
	}

}
