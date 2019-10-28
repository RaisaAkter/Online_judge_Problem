import java.util.Scanner;
public class Interval
{
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		float n=input.nextFloat();
		Interval number=new Interval();
		number.check(n);
		
		
	}
	public void check(float a)
	{
		// [0,25] (25,50], (50,75], (75,100]
		if(a>=0 && a<=25)
		System.out.printf("Intervalo [0,25]\n");
		else if(a>25 && a<=50)
		System.out.printf("Intervalo (25,50]\n");
		else if(a>50 && a<=75)
		System.out.printf("Intervalo (50,75]\n");
		else if(a>75 && a<=100)
		System.out.printf("Intervalo (75,100]\n");
		else
		System.out.printf("Fora de intervalo\n");
	}
}