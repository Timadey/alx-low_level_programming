#include "rand_overide.h"
/**
 * rand - overide the random function of c
 * this function would be used instead of the rand used in gm
 * Return: the appropraite number
 */
int rand()
{
	if (rand_count == 0)
	{
		rand_count++;
		return (1);
	}
	else if (rand_count == 1)
	{
		rand_count++;
		return (2);
	}
	else if (rand_count == 2)
	{
		rand_count++;
		return (3);
	}
	else if (rand_count == 3)
	{
		rand_count++;
		return (4);
	}
	else if (rand_count == 4)
	{
		rand_count++;
		return (5);
	}
	else
	{
		rand_count++;
		return (6);
	}
}
