package javastrings;

import java.util.Scanner;

public class Substring {

	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		String s1=sc.next();
		String str=sc.next();
		int n=s1.length();
		int n1=str.length();
		int x=0,flag=0;
		for(int i=0;i<n1;i++)
		{
			for(int j=x;j<n;j++)
			{
				if(str.charAt(i)==s1.charAt(j))
				{
					flag++;
					x++;
					break;
				}	
				else
				{
					flag=0;
					x++;
					i=0;	
				}
			}
		}
		if(n1==flag)
		{
			System.out.print("yes..substring");
		}
		else
		{
			System.out.print("no..not a substring");
		}
		sc.close();
	}
}
