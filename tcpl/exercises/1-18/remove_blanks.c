#include <stdio.h>

#define MAXLINE 1000

void storage(char to[], char from[], int max);
int get_line(char s[], int lim);

main()
{
	int max = 0;
	int len;
	char input[MAXLINE];
	char output[MAXLINE];

	while ((len = get_line(input, MAXLINE)) > 0) {
		storage(output, input, max);
		max = max + len;
	}

	if (max > 0) {
		printf("\n");
		for (int i = 0; i < max; ++i) {
			if (output[i] != ' ' && output[i] != '\t')
				printf("%c", output[i]);
			if (output[i] == '\n' && output[i+1] == '\n')
				++i;
		}
	}
  
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

void storage(char to[], char from[], int max)
{
	int a = 0;
	for (int i = max; (to[i] = from[a]) != '\0'; ++i)
      ++a;
}

