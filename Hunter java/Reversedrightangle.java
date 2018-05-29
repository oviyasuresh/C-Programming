package arrays.java;

import java.util.Scanner;

public class Reversedrightangle {

	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		int n1=sc.nextInt();
		for(int i=n1;i>0;i--)
		{
			for(int j=1;j<=i;j++)
			{
				System.out.print(1+" ");
			}
			System.out.println();
		}
		sc.close();
	}

}
