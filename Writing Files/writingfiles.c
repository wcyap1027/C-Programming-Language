#include <stdio.h>

/* REMEMBER TO fclose() */
int main()
{

	//file mode
	// w = write
	// r = read
	// a = append
	
	//This is write mode
	FILE *fpointer = fopen("car.txt", "w");	
	fprintf(fpointer, "BMW, i8\nNissan, GTR35\nToyota, Camry");
	
	//This is append mode (add new line to the end of the text)
	//FILE *fpointer = fopen("car.txt", "a");	
	//fprintf(fpointer, "\nHonda, Accord");
	
	fclose(fpointer);

	return 0;	
}

