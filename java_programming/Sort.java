import java.util.Scanner;
import java.util.Arrays;
public class Sort
{
	private int[] arr;
	private int x;
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		int[] arr=new int[3];
		for(int i=0;i<3;i++)
		{
			arr[i]=input.nextInt();
			}
		int[] arr1=new int[arr.length];
		System.arraycopy(arr,0,arr1,0,arr.length);
		Sort A=new Sort(arr);
		A.asending();
		A.display();
		System.out.println();
		for(int i=0;i<3;i++)
		{
			System.out.printf("%d\n",arr1[i]);
			}	
		
	}
	public Sort(int[] arr1)
	{
		arr=arr1;
	}
	public void asending()
	{
		for(int i=0;i<(arr.length-1);i++)
		 for(int j=i+0;j<arr.length;j++)
		   if(arr[i]>arr[j]){
		   x=arr[i];
		   arr[i]=arr[j];
		   arr[j]=x;}
	}
	public void display()
	{
		for(int i=0;i<arr.length;i++)
		System.out.printf("%d\n",arr[i]);
	}
	
}