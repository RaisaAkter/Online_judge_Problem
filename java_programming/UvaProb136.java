public class UvaProb136
{
	public static void main(String[] args)
	{
		int u=1;
		int i;
		for( i=1; ;i++)
		{
			if(i%2==0 || i%3==0 || i%5==0)
			u++;
			
			if(u==1500)
			break;
		}
		System.out.printf("The 1500'th ugly number is %d\n",i);
	}
}