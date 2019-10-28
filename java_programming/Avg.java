import java.util.Scanner ;
public class Avg 
{
	public static void main(String[] args)
	{
		Scanner data=new Scanner(System.in);
		double MEDIA;
		float A,B,C;
		
		A=data.nextFloat();
		B=data.nextFloat();
		C=data.nextFloat();
		
		MEDIA=(A*2+B*3+C*5)/(2+3+5);
		
		System.out.printf("MEDIA = %.1f\n",MEDIA);
	}
}