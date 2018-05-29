package javastrings.java;

import java.util.Scanner;

public class reverseorderofwords {

	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		//int n=s.length();
		String[] str=s.split("\\s");
		int n1=str.length;
		for(int i=n1-1;i>=0;i--)
		{
			System.out.print(str[i]+" ");
		}
		sc.close();
	}

}
