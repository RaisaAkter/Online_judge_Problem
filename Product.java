import java.util.Scanner;
public class Product
{
	public static void main(String[] args)
	{
		int A,B,PROD;
		Scanner input=new Scanner(System.in);
		A=input.nextInt();
		B=input.nextInt();
		PROD=A*B;
		System.out.printf("PROD = %d\n",PROD);
		
	}
}