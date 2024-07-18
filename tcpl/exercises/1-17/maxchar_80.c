#include <stdio.h>

#define MAXLINE 1000
#define MINIMUM 80

void storage(char to[], char from[], int num_input, int length);
int get_line(char s[], int lim);

main()
{
  int num_input = 0;
  int max = 0;
  int len;
  char input[MAXLINE];
  char output[MAXLINE];

  while ((len = get_line(input, MAXLINE)) > 0) {
    if (len >= MINIMUM) {
      ++num_input;
      storage(output, input, num_input, max);
    }
    max = max + len;
  }

  printf("\n");
  printf("%s", output);
  printf("\n");
  printf("Number of inputs = %d\nCharacter in the all inputs = %d\n", num_input, max);
  
  return 0;
}

int get_line(char s[], int lim)
{
  int i, c;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  
  return i;
}

void storage(char to[], char from[], int num_input, int max)
{
  int i;  

  if (num_input == 1) {
    for (i = 0; (to[i] = from[i]) != '\0'; ++i)
      ;
  }
  else {
    for (i = 0; (to[max] = from[i]) != '\0'; ++i)
      max++;
  }
}
