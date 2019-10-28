import java.util.Scanner;
public class Snake
{
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		int X,Y;
		X=input.nextInt();
		Y=input.nextInt();
		switch(X)
		{
		 case 1:
		   double amount=Y*4.00 ;
		   System.out.printf("Total: R$ %.2f\n",amount);
		   break;
		 case 2:
		    double amount1=Y*4.50 ;
		   System.out.printf("Total: R$ %.2f\n",amount1);
		   break;
		 case 3:
		   double amount2=Y*5.00 ;
		   System.out.printf("Total: R$ %.2f\n",amount2);
		   break;
		 case 4:
		    double amount3=Y*2.00 ;
		   System.out.printf("Total: R$ %.2f\n",amount3);
		   break;
		 default:
		   double amount4=Y*1.50 ;
		   System.out.printf("Total: R$ %.2f\n",amount4);
		   break;
		 
		}
	}
}