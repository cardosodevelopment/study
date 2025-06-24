#include <stdio.h>

/*
	Exercise 1-12. Write a program that prints its input one word per line. 
*/

main() {
	
	int c, blank;
	
	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\t' && c != '\n') {
			putchar(c);
			blank = 0;
		} else if (blank == 0) {
			blank = 1;
			putchar('\n');
		}
	}
}
