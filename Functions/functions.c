#include <stdio.h>

int main()
{
	int total; 
	
	/* calling a function to get addition value */
	total = addfunction();
	
	printf("The answer is: %d\n", total);
}


/* function returning the addition of two numbers */
int addfunction()
{
	int num1 = 10, num2 = 5;
	int total;
	total = num1+num2;
	
	return total;
}
