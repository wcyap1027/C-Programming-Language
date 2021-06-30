#include <stdio.h>

int main ()

{
	int max , sum , limit ,x ,num [x];
	
	
	printf ("How many would you like to enter : ");
	scanf("%d",&limit);
	printf("\nEnter the numbers : ");
	
	for (x=0 ; x<limit ; x++)
		scanf("%d",&num[x]);
	
	max= num[0];
	
	for (x=1 ; x<limit ; x++)
	{
		if (num[x]>max)
			max=num[x];
	}
	
	sum=0;
	for (x=0 ; x<limit ;x++)
		sum=sum+num[x];
		
	printf("Largest of %d is %d",limit,max);
	printf("\nSum of %d numbers is %d",limit,sum);
	
	return 0;
	
}
