import java.util.*;
public class Palindrome1
{
	public static void main(String[] args)
	{
		int r,p=0,b;
		Scanner in=new Scanner(System.in);
		int n=in.nextInt();
		for(int i=1;i<=n;i++)
		{
		   if(i<10 && i<=n)
		   System.out.printf("%d ",i);}
		for(int i=11;i<=n;i++)
		{
			int a=i;
			r=i%10;
			p=p*10+r;
			i=i/10;
			if(p==i)
			  System.out.printf("%d ",a);
		}
     }
		
}
	
	      
	
