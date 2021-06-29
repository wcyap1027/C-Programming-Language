#include <stdio.h>

int main()
{
	//pointers variables (int * p)
	int age = 23;
	int * pAge = &age;
	
	double gpa = 3.5;	
	double *pGpa = &gpa;
	
	char grade = 'A';
	char *pGrade = &grade;
		
	printf("My age in memory address: %p\n", &age);
	return 0;
}
