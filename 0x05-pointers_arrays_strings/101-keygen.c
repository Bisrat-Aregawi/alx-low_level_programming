#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int rand(void);
int main(void)
{
	time_t seconds;

	seconds = time(NULL);
	srand(seconds);
	printf("%d\n", rand());
	return (0);
}
