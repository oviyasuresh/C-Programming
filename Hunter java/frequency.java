import java.util.*;
class frequency{
     
     public static void main(String aa[]){
         int n;
         Scanner s=new Scanner(System.in);
         String d=s.nextLine();
         char a[]=d.toCharArray();
         LinkedHashSet<Character>b=new LinkedHashSet<Character>();
         ArrayList<Character>bb=new ArrayList<Character>();
         for(int i=0;i<d.length();i++){
             b.add(a[i]);
             bb.add(a[i]);
             
         }
         ArrayList<Character>bbb=new ArrayList<Character>(b);
         for(int i=0;i<b.size();i++){
             int y=Collections.frequency(bb,bbb.get(i));
             if(y>1){
                 System.out.print(bbb.get(i));
             }
         }
         }
     }
