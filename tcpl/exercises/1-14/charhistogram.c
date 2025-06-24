#include <stdio.h>

/*
	Exercise 1-14. Write a program to print a histogram of the frequencies of
	different characters in its inputs.
*/

#define MINCHAR 0
#define MAXCHAR 30
#define MINABC 1
#define MAXABC 26
#define CHARASCIIMIN 65
#define CHARASCIIMAX 91

main() 
{
	int c;
	int listchar[25];

	for (int i = 0; i <= 25; ++i)
		listchar[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c >= 'A' && c <= 'Z')
			++listchar[c - 'A'];
		else if (c >= 'a' && c <= 'z')
			++listchar[c - 'a'];
	}

	for (int i = MAXCHAR; i > MINCHAR; --i) {
		printf("\n%2d", i);
		for (int u = MINABC - 1; u < MAXABC; ++u) {
			if (listchar[u] >= i)
				printf(" *");
			else
				printf(" -");
		}
	}
	
	printf("\n  ");
	for (int i = CHARASCIIMIN; i < CHARASCIIMAX; ++i)
		printf("%2c", i);
	printf("\n");
}
