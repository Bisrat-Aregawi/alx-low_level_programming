#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int random_number;
	int sum = 0;

	srand(time(NULL));

	while (sum + random_number < 2739)
	{
		random_number = (rand() % (127 - 33 + 1)) + 33;
		printf("%c", random_number);
		sum += random_number;
	}
	while (1)
	{
		random_number = (rand() % (127 - 33 + 1)) + 33;
		if (sum + random_number == 2772)
		{
			printf("%c", random_number);
			break;
		}
	}
	printf("\n");
	
	return (0);
}
