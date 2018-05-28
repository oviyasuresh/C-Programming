import java.util.*;
public class maxsubarray 
{
	public static void main(String[] args)
	{
		int n,sum=0,i,max,j,k;
		Scanner scan=new Scanner(System.in);
		n=scan.nextInt();
		int ar[]=new int[n];
		for(i=0;i<n;i++)
		{
			ar[i]=scan.nextInt();
		}
	    max=ar[0];
		for(i=0;i<n;i++)
		{	 
		  sum=0;
		  sum=ar[i];
		  for(j=i+1;j<n;j++)
		  {
			sum=sum+ar[j];
			
			if(sum>max)
			   max=sum;
		  }
		}
		System.out.print(max);
	}
}
