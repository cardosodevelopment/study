#include <stdio.h>

/* Exercise 1-10. Write a program to copy its input to its output, replacing each
	tab by \t, each backspace by \b, and each backslash by \\. This makes tabs and
	backspaces visible in an unambiguous way. */

main() {
	
	int c;
	
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			putchar(92);
			putchar(116);
			continue;
		}
		if (c == '\b') {
			putchar(92);
			putchar(98);
			continue;
		}
		if (c == '\\') {
			putchar(92);
			putchar(92);
			continue;
		}

		putchar(c);
	}
}
