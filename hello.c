#include <stdio.h>


int max(int x, int y)
{
	return x > y ? x : y;
}	

int main()
{
	int a = 3;
	int b = 5;
	int c = max(a, b);

	printf("hello mornning.\n");
	
	printf("max is %d.\n", c);
	
	return 0;
}	
