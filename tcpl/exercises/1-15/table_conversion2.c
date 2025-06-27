#include <stdio.h>

/*
	Exercise 1-15. Rewrite the temperature conversion program of section 1.2
	to use a function for conversion.
*/

#define UPPER 300
#define LOWER 0
#define STEP 20

float converter(int f);

main()
{	
	for (int fahr = LOWER; fahr <= UPPER; fahr += STEP)
		printf("%3d %6.1f\n", fahr, converter(fahr));
	return 0;
}

float converter(int fahr)
{
	float celsius;

	celsius = (5.0 / 9.0) * (fahr - 32.0);
	
	return celsius;
}
