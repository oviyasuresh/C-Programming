package matrix.java;

import java.util.Scanner;

public class Diagonalsum {

	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		int data=sc.nextInt();
		int a[][]=new int[data][data];
		int sum=0;
		for(int i=0;i<data;i++)
		{
			for(int j=0;j<data;j++)
			{
				a[i][j]=sc.nextInt();
			}
		}
		for(int i=0;i<data;i++)
		{
			for(int j=0;j<data;j++)
			{
				if(i==j)
				{
					sum=sum+a[i][j];
				}
			}
		}
		System.out.print(sum);
		sc.close();
	}
}
