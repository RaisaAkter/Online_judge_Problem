public class Palindrome
{
	public static void main(String[] args)
	{
		for(int i=1;i<10;i++)
		  System.out.printf(" %d ,",i);
		  
		  for(int i=1;i<10;i++)
		  {
		  
		  for(int j=0;j<10;j++)
		  {
		  if((i*10+j)==(j*10+i))
		    System.out.printf(" %d%d ,",i,j);
		    }
		    }
		  
		  
		  for(int i=1;i<10;i++)
		  {
		  
		     for(int j=0;j<10;j++)
		     {
		    
		    	for(int z=1;z<10;z++)
		    	if(i==z)
		    	System.out.printf(" %d%d%d, ",i,j,z);
		    
		  
	         }
	      }
	    }
	}
	      
	
