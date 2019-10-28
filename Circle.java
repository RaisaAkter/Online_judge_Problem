import java.util.Scanner;
public class Circle
{
    final static double pi=3.14159;
	public static void main(String[] args)
	{
		Scanner data=new Scanner(System.in);
		double R;
		;
		R=data.nextDouble();
		
		double A=pi*R*R;
		
		System.out.printf("A=%.4f\n",A);
	}
}