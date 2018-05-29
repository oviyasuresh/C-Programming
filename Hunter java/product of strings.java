package javastrings.java;

import java.util.Scanner;

public class Returnasstring {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String s1=sc.nextLine();
		String s2=sc.nextLine();
		int x1,y1,z1;
		x1=Integer.parseInt(s1);
		y1=Integer.parseInt(s2);
		z1=x1*y1;
		System.out.print(String.valueOf(z1));
		sc.close();
	}
}
