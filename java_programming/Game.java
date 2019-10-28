import java.util.Scanner;
public class Game
{
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		int a=input.nextInt();
		int b=input.nextInt();
		if(a>=b)
		{
		int count=a-b;
		int time=24-count;
		System.out.printf("O JOGO DUROU %d HORA(S)\n",time);
		}
		else if(a<b)
		{
			int time=b-a;
			System.out.printf("O JOGO DUROU %d HORA(S)\n",time);
		}
		
		
		//System.out.printf("O JOGO DUROU %d HORA(S)\n",time);
	}
}