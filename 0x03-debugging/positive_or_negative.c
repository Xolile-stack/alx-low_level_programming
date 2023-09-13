#include <stdio.h>
#include "main.h"

// Function declaration
void positive_or_negative(int i);

// Function definition
void positive_or_negative(int i) {
	if (i > 0)
	    printf("%d is positive\n", i);
    else if (i == 0)
	    printf("%d is zero\n", i); // Fixed the printf format string
    else
	    printf("%d is negative\n", i); // Fixed the printf format string
}
