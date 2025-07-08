#include <stdio.h>

/*
	Exercise 1-19. Write a function reverse(s) that reverses the character string s.
	Use it to write a program that reverses its input a line at a time.
*/

#define MAXLINE 1000

int get_line(char s[], int lim);
void reverse(char s[]);

main()
{
	int len;
	char input[MAXLINE];
	
	while ((len = get_line(input, MAXLINE)) > 0) {
		reverse(input);
		printf("%s", input);
	}
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

void reverse(char s[])
{
	int firstchar, lastchar;
	char c;

	lastchar = 0;
	while (s[lastchar] != '\0')
		++lastchar;
	
	if (lastchar > 0)
		--lastchar;
	
	for (firstchar = 0; firstchar < lastchar; ++firstchar, --lastchar) {
		c = s[firstchar];
		s[firstchar] = s[lastchar];
		s[lastchar] = c;
	}
}
