#include <stdio.h>

int main()
{
	int n = 1, x = 10;
	
	do
	{
		printf("Do Loops: %d\n", n);
		n = n + 1;
	}
	while(n <= x);
	
	return 0;
}
