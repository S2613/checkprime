#include<stdio.h>  //whether given number prime or not
#include<math.h>
main()
{
	int n,i,status=1;
	printf("hello user\n");
	printf("be carefully while entering the number\n");
	printf("enter number\n");
	scanf("%d",&n);
	if(n==1)
	{
		printf("not a prime");
		status=0;
	}
	else if(n==2)
	{
		printf("a prime");
		status=0;
	}
	else if(n%2==0)
	{
		printf("not a prime");
		status=0;
	}
	else if(n>=3)
	{
		i=3;
		while(i<=sqrt(n) &&status==1)
		{
		
		    if(n%i==0)
		   {
		     printf("not a prime\n");
			 status=0;	
		   }
		   i=i+2;
		}
	}
	if(status==1)
	{
		printf("prime number\n");
	}	
}
