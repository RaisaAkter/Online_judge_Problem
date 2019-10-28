import java.util.*;
public class UvaProb100
{
	public static void main(String[] args)
	{
		Scanner in=new Scanner(System.in);
		
		for(int i=0;i<2;i++)
		{
			int a=in.nextInt();
			int b=in.nextInt();
			int l=length(a,b);
		System.out.printf("%d %d %d",a,b,l);
		}
	}
	public static int length(int a,int b)
	{
		int c=0;
		int count=1;
		for(int j=a;j<=b;j++)
		{
			for(int z=1; ;z++)
		{
			
			if(j==1)
			  break;
			 else if(j%2!=0)
			{
			    count++;
				j=3*j+1;
				}
			else if(j%2==0)
			{
			    count++;
			    j=j/2;
			    }
			 }
		   if(c<count)
			c=count;
		}
		return c;
		//System.out.printf("%d %d %d",a,b,c);
	}
}