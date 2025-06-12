#include <stdio.h>

/* Exercise 1-8. Write a program to count blanks, tabs, and newlines. */

main() {
	
	int c;
	int blanks, newlines, tabs;

	blanks = 0;
	newlines = 0;
	tabs = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++blanks;
		if (c == '\n')
			++newlines;
		if (c == '\t')
			++tabs;
	}

	printf("\nBlanks = %d\n", blanks);
	printf("Newlines = %d\n", newlines);
	printf("Tabs = %d\n", tabs);
}
