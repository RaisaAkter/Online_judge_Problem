import java.util.Scanner;
public class Odd
{
	public static void main(String[]args)
	{
		Scanner input=new Scanner(System.in);
		int X=input.nextInt();
		for(int i=X;i<X+12;i++)
		{
			if(i%2 !=0)
			System.out.printf("%d\n",i);
		}
	}
}