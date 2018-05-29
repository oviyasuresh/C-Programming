import java.io.*;
import java.util.*;
public class maxsubarrayprod {
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		int n;
		int i,j,max,prod=01;
		n=sc.nextInt();
		int[] a=new int[n];
		for(i=0;i<n;i++)
		{
		    a[i]=sc.nextInt();
		}
		max=a[0];
		for(i=0;i<n;i++)
		{
		    prod=1;
		    prod=a[i];
		    for(j=i+1;j<n;j++)
		    {
		        prod=prod*a[j];
		        if(prod>max)
		            max=prod;
		    }
		    
		}
		System.out.println(max);
	}
}
