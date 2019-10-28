import java.util.Scanner;
public class Difference
{
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		int A,B,C,D,dif;
		A=input.nextInt();
		B=input.nextInt();
		C=input.nextInt();
		D=input.nextInt();
		dif=(A*B-C*D);
		System.out.printf("DIFERENCA = %d\n",dif);
	}
}