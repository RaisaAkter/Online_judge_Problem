import java.util.Scanner ;
public class Distance
{
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		double x1,x2,y1,y2,dis;
		x1=input.nextDouble();
		y1=input.nextDouble();
		x2=input.nextDouble();
		y2=input.nextDouble();
		dis=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
		double dis1=Math.sqrt(dis);
		System.out.printf("%.4f\n",dis1);
		
	}
}