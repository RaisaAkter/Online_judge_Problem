import java.util.Scanner;
public class EvenSqr
{
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		int N=input.nextInt();
		for(int i=2;i<=N;i++)
		{
			if(i%2==0)
			{
				int sqr=i*i;
				System.out.printf("%d^2 = %d\n",i,sqr);
			}
		}
	}
}