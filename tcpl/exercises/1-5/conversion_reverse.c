#include <stdio.h>

/* Using Symbolic Constants and the for statement, rather than previous example. */

#define UPPER 300
#define LOWER 0
#define STEP 20
main()
{
  int fahr;

  for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
  }
}