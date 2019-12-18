#include <stdio.h>

int main()

{
	int a = 2;
	int b;
	int i;

	for (i = 0; i <=100; i ++)
	{
		if ( i % a == 0)
		{
			printf ("%d is divisible by %d\n",i,a);
		}
		else
		{
			printf ("%d is not divisible by %d\n",i,a);
		}
	}


	return 0;
}
