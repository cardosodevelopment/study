#include <stdio.h>

/* Exercise 1-9. Write a program to copy its input in its output, replacing each
	string of one or more blanks by a single blank. */

main() {

	int c;
	int countblank = 0;

	while ((c = getchar()) != EOF) {
		if (countblank == 0) {
			if (c == ' ') {
				putchar(c);
				countblank = 1;
			}
		}
		if (c != ' ') {
			putchar(c);
			countblank = 0;
		}
	}
}
