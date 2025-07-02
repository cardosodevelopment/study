#include <stdio.h>

/*
	Exercise 1-17. Write a program to print all input lines that are longer than 80
	characters.
*/

#define MAXLINE 1000
#define MINIMUM 80

void storage(char a[], char b[], int max);
int get_line(char s[], int lim);

main()
{
	int max = 0;
	int len;
	char input[MAXLINE];
	char output[MAXLINE];

	while ((len = get_line(input, MAXLINE)) > 0) {
		if (len >= MINIMUM) {
			storage(output, input, max);
			max = max + len;
		}
	}
	
	if (max > 0)
		printf("\n%s\n", output);
    
	return 0;
}

int get_line(char s[], int lim)
{
	int i, c;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
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
