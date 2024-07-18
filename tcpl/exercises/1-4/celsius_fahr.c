#include <stdio.h>

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 100;
  step = 10;

  printf("Table of conversion Celsius to Fahrenheint\n");
  printf("------------------------------------------\n");
  printf("Celsius\t\tFahrenheint\n");

  celsius = lower;
  while (celsius <= upper) {
    fahr = (celsius * 9.0 / 5.0) + 32.0;
    printf("%3.0f\t\t%6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
