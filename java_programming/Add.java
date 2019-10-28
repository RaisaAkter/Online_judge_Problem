import java.util.Scanner;
public class Add
{
	public static void main(String[] args)
	{
		int A,B,SOMA;
		Scanner input=new Scanner(System.in);
		A=input.nextInt();
		B=input.nextInt();
		SOMA=A+B;
		System.out.printf("SOMA = %d\n",SOMA);
		
	}
}