import java.util.*;
import java.io.*;

class Loop{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
         int[] a=new int[t];
         int[] b=new int[t];
         int[] n=new int[t];
         int[] s=new int[1000];
        for(int z=0;z<t;z++)
        {
             a[z] = in.nextInt();
             b[z] = in.nextInt();
             n[z] = in.nextInt();
        }
        
        for(int j=0;j<t;j++)
        {
          for(int i=1;i<=n[j];i++)
          {
          	s[0]=a[j]+1*b[j];
          s[i]=s[i-1]+(int)(Math.pow(2,i))*b[j];
          	
          	System.out.printf(" %d ",s[i-1]);
          }
      System.out.println();
        	
        }
        
        in.close();
    }
}
