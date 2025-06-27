#include <stdio.h>

/*
	Exercise 1-13. Write a program to print a histogram of the lengths of words in its input.
	It is easy to draw the histogram with the bars horizontal; a vertical orientation is more
	challenging.
*/

#define MAXCHAR 15
#define MINCHAR 0
#define FIRSTWORD 0
#define LASTWORD 10

main() {

	int c;
	int a = 0;
	int lengthword[10];

	for (int i = 0; i < 10; ++i)
		lengthword[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\t' && c != '\n'
			&& c != '\b') 
			++lengthword[a];
		else 
			++a;
	}

	for (int i = MAXCHAR; i > MINCHAR; --i) {
		printf("\n");
		for (int u = FIRSTWORD; u < LASTWORD; ++u) {
			if (lengthword[u] >= i)
				printf(" *");
			else
				printf(" -");
		}
	}
	
	printf("\n");
	for (int i = 0; i < 10; ++i)
		printf(" %d", lengthword[i]);
	printf("\n");
}
