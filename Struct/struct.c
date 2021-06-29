#include <stdio.h>
/* string.h is required for strcpy() */
#include <string.h>

struct Car{
	char model[50];
	char brand[50];
	int year;
};


int main()
{
	struct Car car1;
	car1.year=1997;
	/*pass array to string */
	strcpy(car1.brand, "BMW");
	strcpy(car1.model, "i8");
	
	printf("Year: %d\n", car1.year);
	printf("Brand: %s\n", car1.brand);
	printf("Model: %s\n", car1.model);
	return 0;
}
