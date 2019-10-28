import java.util.*;
public class UvaProb113
{
	public static void main(String[] args)
	{
		int[] c=new int[10];
		Scanner in=new Scanner(System.in);
		
		int a,b;
		for(int i=0;i<10;i++)
		{
			a=in.nextInt();
			b=in.nextInt();
			root(a,b);
		}
	}
	
	
	public static void root(int a,int b)
	{
		int[] k=new int[10];
		for(int i=1;i<(Math.pow(10,9));i++)
		{
			if((Math.pow(i,a))==b)
			{
			  System.out.printf("%d\n",i);
			  break; }
	    }
}
}