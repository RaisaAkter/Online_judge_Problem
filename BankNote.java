import java.util.Scanner;
public class Main
{
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		double taka=input.nextDouble();
		//System.out.printf("%.2f\n",taka);
		System.out.printf("NOTAS:\n");

		double mod1=taka%100;
		int div1=(int)taka/100;
		System.out.printf("("%d nota(s) de R$ 100.00\n",div1);

		double mod2=mod1%50;
		int div2=(int)mod1/50;
		System.out.printf("("%d nota(s) de R$ 50.00\n",div2);

		double mod3=mod2%20;
		int div3=(int)mod2/20;
		System.out.printf("("%d nota(s) de R$ 20.00\n",div3);

		double mod4=mod3%10;
		int div4=(int)mod3/10;
		System.out.printf("("%d nota(s) de R$ 10.00\n",div4);

		double mod5=mod4%5;
		int div5=(int)mod4/5;
		System.out.printf("("%d nota(s) de R$ 5.00\n",div5);

		double mod6=mod5%2;
		int div6=(int)mod5/2;
		System.out.printf("("%d nota(s) de R$ 2.00\n",div6);

		System.out.printf("MOEDAS:\n");

		double mod7=mod6%1;
		int div7=(int)mod6/1;
		System.out.printf("%d moeda(s) de R$ 1.00\n",div7);

		double mod8=mod7%.5;
		int div8=(int)(mod7/.5);
		System.out.printf("%d moeda(s) de R$ 0.50\n",div8);

		double mod9=mod8%.25;
		int div9=(int)(mod8/.25);
		System.out.printf("%d moeda(s) de R$ 0.25\n",div9);


		double mod10=mod9%.1;
		int div10=(int)(mod9/.1);
		System.out.printf("%d moeda(s) de R$ 0.10\n",div10);


		double mod11=mod10%.05;
		int div11=(int)(mod10/.05);
		System.out.printf("%d moeda(s) de R$ 0.05\n",div11);


		double mod12=mod11%.01;
		int div12=(int)(mod11/.01);
		System.out.printf("%d moeda(s) de R$ 0.01\n",div12);


	}
}
