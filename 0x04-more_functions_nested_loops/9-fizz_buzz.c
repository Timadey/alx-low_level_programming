#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int x = 2;

	printf("%d", 1);
	while (x <= 100)
	{

		if (x % 3 == 0 && x % 5 == 0)
			printf("%c%s", ' ', "FizzBuzz");
		else if (x % 3 == 0)
			printf("%c%s", ' ', "Fizz");
		else if (x % 5 == 0)
			printf("%c%s", ' ', "Buzz");
		else
			printf("%c%d", ' ', x);
		x++;
	};
	printf("%c", '\n');
	return (0);
}
