#include <stdio.h>

int main()
{
	int i;
	int x;
	
	
	for(i = 1; i < 10; i = i+1)
	{
		for(x = 0; x < i; x = x +1)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	
	return 0;
}
