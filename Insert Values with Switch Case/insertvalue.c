#include <stdio.h>

int main()
{
	
	int insertoptions;
	int num1, num2;
	int total;
	
	printf("This is a simple calculator.\n");
	printf("For Sum - Enter 1\n");
	printf("For Minus - Enter 2\n");
	printf("For Multiply - Enter 3\n");
	printf("For Division - Enter 4\n");
	
	printf("Insert >");
	scanf("%d", &insertoptions);
	

	
	switch(insertoptions)
	{
		//sum
		case 1:
			printf("\nEnter num1:");
			scanf("%d", &num1);
			printf("\nEnter num2:");
			scanf("%d", &num2);
			total = num1 + num2;
			printf("The answer is: %d", total);
			break;
		
		//minus
		case 2:
			printf("\nEnter num1:");
			scanf("%d", &num1);
			printf("\nEnter num2:");
			scanf("%d", &num2);
			total = num1 - num2;
			printf("The answer is: %d", total);
			break;
		
		//multiply
		case 3:
			printf("\nEnter num1:");
			scanf("%d", &num1);
			printf("\nEnter num2:");
			scanf("%d", &num2);
			total = num1 * num2;
			printf("The answer is: %d", total);
			break;
		
		//division
		case 4:
			printf("\nEnter num1:");
			scanf("%d", &num1);
			printf("\nEnter num2:");
			scanf("%d", &num2);
			total = num1 / num2;
			printf("The answer is: %d", total);
			break;
		
		//if out of options then print message
		default:
			printf("Please enter options between number 1 to 4");
			break;
	}
	
	
}
