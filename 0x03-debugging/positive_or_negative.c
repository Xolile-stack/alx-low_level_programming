#include "main.h"
/**
 *This function determines if a number is positive, negative, or zero
 *positive_or_negative is printing the appropriate values
 *
 *
 *@param num i should also be analyzed
*/

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i)
	}
	else if (i == 0)
	{
	    printf("%d is zero\n", i);
	}
	else
	{
	    printf("%d is negative\n", i)
	}
}
