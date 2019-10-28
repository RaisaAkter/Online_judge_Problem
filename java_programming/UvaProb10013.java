import java.util.Scanner;
public class UvaProb10013
{
	public static void main(String[] args)
	{
		Scanner in=new Scanner(System.in);
		
		int n=in.nextInt();
		int[] t=new int[n];
		for(int k=0;k<n;k++)
		{
			int r=0,s=0;
		   int m=in.nextInt();
		   int[] a=new int[m];
		   int[] b=new int[m];
		
		   for(int i=0;i<m;i++)
		   {
			  a[i]=in.nextInt();
			  b[i]=in.nextInt();
		    }
		   for(int j=0;j<m;j++)
		  {
			  r+=Math.pow(10,j)*a[m-j-1];
			  s+=Math.pow(10,j)*b[m-j-1];
		  
		   t[k]=r+s;
		    }
		    }
		    for(int z=0;z<n;z++)
		System.out.printf("%d\n\n",t[z]);
		
	}
}