package javastrings.java;

import java.util.Scanner;

public class Characterstoascii {

	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		String s1=sc.nextLine();
		int n=s1.length();
		int temp=0,sum=0;
		for(int i=0;i<n;i++)
		{
			temp=(int)(s1.charAt(i));
			sum=sum+temp;
		}
		System.out.print(sum);
		sc.close();
	}

}
