import java.util.*;
class palindrome{
    public static void main(String aa[]){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        String h=String.valueOf(n);
        int u=0;
        for(int i=h.length()-1;i>=0;i--){
            int y=Character.getNumericValue(h.charAt(i));
            u=u+y;
            
        }
        String k=String.valueOf(u);
        String jj=new StringBuffer(k).reverse().toString();
        if(k.equals(jj)){
            System.out.println("yes");
        }
        else{
            System.out.println("no");
        }
    }
}
