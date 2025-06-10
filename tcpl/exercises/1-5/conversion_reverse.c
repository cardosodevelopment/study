#include <stdio.h>

/* Exercise 1-5. Modify the temperature conversion program to print the table in
	reverse order, that is, from 300 degrees to 0. */

/* Using Symbolic Constants and the for statement, rather than previous example.
	Symbolic Constants is in the chapter 1.4 */

#define UPPER 300
#define LOWER 0
#define STEP 20

main()
{
	int fahr;

	for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
}
