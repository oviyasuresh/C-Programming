import java.util.*;
class solution{
    public static void main(String aa11[]){
         int n;
         Scanner s=new Scanner(System.in);
         n=s.nextInt();
         int a1[]=new int[n];
         ArrayList<Integer>a=new ArrayList<Integer>();
         ArrayList<Integer>b=new ArrayList<Integer>();
         int k=s.nextInt();
         int count=0;
         for(int i=0;i<n;i++){
             a1[i]=s.nextInt();
             b.add(a1[i]);
             int y=k-a1[i];
             if(y<0){
                 y=y*(-1);
             }
             if(y<k && k!=a1[i]){
                  a.add(a1[i]);
                  count++;
                  if(count==3){
                      break;
                  }
             }
             
         }
         int yy=0;
         int u=0;
         if(a.size()<3){
             u++;
             Collections.sort(b);
             for(Integer aa:b){
                 if(aa==k){
                    continue; 
                 }
                 System.out.println(aa);
                 if(yy>3){
                     break;
                 }
             }
         }
         if(u==0){
             for(Integer aa:a){
                 System.out.println(aa);
         }
        
         }
    }
}
