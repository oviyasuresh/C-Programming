package javastrings.java;

import java.util.Scanner;

public class Returnasstring {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String s1=sc.nextLine();
		String s2=sc.nextLine();
		int x,y,z;
		x=Integer.parseInt(s1);
		y=Integer.parseInt(s2);
		z=x*y;
		System.out.print(String.valueOf(z));
		sc.close();
	}
}
