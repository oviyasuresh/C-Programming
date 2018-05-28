import java.util.*;
public class maxsubarray 
{
	public static void main(String[] args)
	{
		int n,sum=0,i,max,j,k;
		Scanner scan=new Scanner(System.in);
		n=scan.nextInt();
		int a[]=new int[n];
		for(i=0;i<n;i++)
		{
			a[i]=scan.nextInt();
		}
	    max=a[0];
		for(i=0;i<n;i++)
		{	 
		  sum=0;
		  sum=a[i];
		  for(j=i+1;j<n;j++)
		  {
			sum=sum+a[j];
			
			if(sum>max)
			   max=sum;
		  }
		}
		System.out.print(max);
	}
}
