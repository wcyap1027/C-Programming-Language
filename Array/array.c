//array

#include <stdio.h>

int main ()
{
	//int num1 , num2 , num3 , num4 , num5 ;
	int num[5];
	int x;
	printf("Enter five numbers : ");
	//scanf("%d%d%d%d%d\n",&num1, &num2, &num3 , &num4, &num5 );
	//print("\n");
	
	/*printf("Num1=%d\n",num1);
	printf("Num2=%d\n",num2);
	printf("Num3=%d\n",num3);
	printf("Num4=%d\n",num4);
	printf("Num5=%d\n",num5);
	*/
	
	for (x=0 ; x<5 ; x++)
		scanf("%d",&num[x]);
	
	for (x=0 ; x<5 ; x++)
		printf("Num[%d]=%d\n",(x+1),num[x]);
		
	printf("Number in reverse order is...\n");
	
	//for (x=5 ; x<0 ; x--)
		//scanf("%d",&num[x]);
	
	for (x=5 ; x>0 ; x--)
		printf("Num[%d]=%d\n",x,num[x-1]);
	/*printf("Num5=%d\n",num1);
	printf("Num4=%d\n",num2);
	printf("Num3=%d\n",num3);
	printf("Num2=%d\n",num4);
	printf("Num1=%d\n",num5);
	*/
	
	return 0;
}
