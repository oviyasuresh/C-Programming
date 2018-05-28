package JUNE;

import java.util.Scanner;

public class hunter24 
{

	public static void main(String[] args) 
	{
		int n,k,a[];
		Scanner scan=new Scanner(System.in);
		n=scan.nextInt();
		a=new int[n];
		k=scan.nextInt();
		for(int i=0;i<n;i++)
		 a[i]=scan.nextInt();
		int count=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]<=k)
			{
				int sum=0;
				for(int j=i+1;j<n;j++)
				{
					sum=a[i]+a[j];
					if(sum==k)
						{System.out.print("YES");
						count=count+1;
					    System.exit(0);}//if
				}//for
				
			}//if
			
		}//for
		if(count==0)
			System.out.print("NO");
		  
		

		
	}

}
