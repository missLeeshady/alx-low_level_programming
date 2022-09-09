#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	printf("%d\n",n = rand() - RAND_MAX / 2);
	if ((n = rand()) < 0)
	{
		printf("is negative\n");
	}
	else if((n = rand()) == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is positive\n");
	}	
	return (0);
}
