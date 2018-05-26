import java.util.*;
import java.lang.*;
import java.util.ArrayList;
public class wordrev{
    public static void main(String aa[]){
    String s;
    Scanner ss=new Scanner(System.in);
    s=ss.nextLine();
    String a[]=s.split("\\s+");
    for(int i=0;i<a.length;i++){
        String v=new StringBuffer(a[i]).reverse().toString();
        System.out.printf("%s ", v);
    }

}
}
