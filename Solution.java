import java.util.Scanner;
public class Solution
{
	private int p,q;
	public Solution(int a,int b)
	{
	 if(a>0 && b>0)
	   {
	   	p=a;
	   	q=b;
	   }
	   else
	     System.out.print("java.lang.Exception: Breadth and height must be positive");	
	}
	public int parallelogram()
	{
		return p*q;
	}
	public static void main(String[] args)
	{
		Scanner input= new Scanner(System.in);
		int breadth=input.nextInt();
		int height=input.nextInt();
		
		Solution A=new Solution(breadth,height);
		System.out.printf("%d\n",A.parallelogram());
		
		
		
	}
}