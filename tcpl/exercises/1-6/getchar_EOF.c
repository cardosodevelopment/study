#include <stdio.h>

/* Exercise 1-6. Verify that the expression getchar() != EOF 
	is 0 or 1 .*/

main()
{
  int c = (getchar() != EOF);

  printf("%d\n", c); /* the value of getchar() != EOF is 1 */
}
