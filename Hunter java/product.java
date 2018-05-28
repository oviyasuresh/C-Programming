import java.util.*; 
class product
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int n1,i,j,pro=1,sum;
        n1=sc.nextInt();
        int a[]=new int[n1];
          int b[]=new int[n1];
        for(i=0;i<n1;i++)
        {
            a[i]=sc.nextInt();
            b[i]=a[i];
        }
        for(i=0;i<n1;i++)
        {
            pro=pro*b[i];
        }
        for(i=0;i<n1;i++)
        {
            b[i]=pro/b[i];
            System.out.print(b[i]+" ");
        }
        
    }
}
