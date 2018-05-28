import java.util.*;
class rev{
     
     public static void main(String aa[]){
         int m;
         Scanner s=new Scanner(System.in);
         String d=s.nextLine();
         int l=d.length();
         int p=0;
         for(int i=l;i>=0;i--){
             String ll=d.substring(p,i);
             String o=new StringBuffer(ll).reverse().toString();
             if(!o.equals(ll)){
                 System.out.println(ll);
                 break;
                 
             }
         }
     }
}
