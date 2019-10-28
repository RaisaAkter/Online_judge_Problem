import java.util.Scanner;

public class UvaProb1
{
	public static void main(String[] args)
	{
		Scanner in=new Scanner(System.in);
		
		int[] n=new int[100];
		for(int i=0;i<2;i++)
		  n[i]=in.nextInt();
		for(int i=0;i<2;i++)
		  System.out.printf("%d ",n[i]);
		  
		int c=0;
		int count=1;
		for(int i=0;i<2;i++)
		{
		for(int j=n[i];j<=n[i+1];j++)
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
		}
		
		System.out.printf(" %d\n",c);	
	}
}