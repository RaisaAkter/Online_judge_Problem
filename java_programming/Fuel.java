import java.util.Scanner;
public class Fuel
{
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		int t=input.nextInt();
		int v=input.nextInt();
		double s=v*t;
		double l=s/12;
		System.out.printf("%.3f\n",l);
	}
}