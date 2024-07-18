#include <stdio.h>

main()
{
  int c = (getchar() != EOF);

  printf("%d\n", c); /* the value of getchar() != EOF is 1 */
}
