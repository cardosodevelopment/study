#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
	int length;
	int len;				/* current line length */
	int max;				/* maximum length seen so far */
	char line[MAXLINE];		/* current input line */
	char longest[MAXLINE];	/* longest line saved here */
	
	length = 0;
	max = 0;
	while ((len = get_line(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			length = max;
			copy(longest, line);
		}
	}
	if (max > 0) {
		printf("%s", longest);
		printf("%d characters, with max possible %d\n", length - 1, MAXLINE);
	}
	return 0;
}

int get_line(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] == c;
	return i;
}

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0') {
		++i;
	}
}
