#include <stdio.h>

int main()
{
	int year = 1997;
	double horsepower = 3.5;
	char grade = 'S';
	
	/* %p is pointer, use to print out memory address */
	printf("Year: %p\nHorse Power: %p\nGrade: %p\n", &year, &horsepower, &grade);
	
	
	return 0;
	
}
