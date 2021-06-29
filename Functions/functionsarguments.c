#include <stdio.h>

int main()
{
	int x = 10;
	int y = 15;
	int total = addfunction(x,y);
	
	printf("The total is: %d\n", total);
}


int addfunction(int a, int b)
{
	return a + b;
}
