import java.util.Scanner ;
public class Selection
{
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		int A,B,C,D;
		A=input.nextInt();
		B=input.nextInt();
		C=input.nextInt();
		D=input.nextInt();
		int s1=A+B;
		int s2=C+D;
		if(B>C && D>A && s2>s1)
		{
			if(C>0 && D>0 && A%2==0)
			  System.out.print("Valores aceitos\n");
		}
		else
		System.out.print("Valores nao aceitos\n");
		
	}
}