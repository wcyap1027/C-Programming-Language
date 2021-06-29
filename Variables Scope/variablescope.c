#include <stdio.h>

int main()
{
	/*local variables */
	int x;
	int y;
	int total;
	
	/*ask to insert first number*/
	printf("Please enter num1:");
	scanf("%d", &x);
	
	/*ask to insert second number*/
	printf("\n\nPlease enter num2:");
	scanf("%d", &y);
	
	total = x + y;
	
	/*print out the values of x, y and total*/
	printf("\n");
	printf("The values of x: %d and values of y: %d and total is equal to: %d", x,y,total);
}
