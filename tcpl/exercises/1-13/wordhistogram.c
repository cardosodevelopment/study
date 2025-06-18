#include <stdio.h>

main() {

	int c;
	int count = 0;
	int lengthword;
	int wordcount;

	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\t' && c != '\n') {
			++count;
			lengthword = count;
		} else {
			count = 0;
		}
	}

	for (int i = 0; i < 15; ++i) {
		printf("\n%2d", i);
		for (int a = 0; a < 10; ++a) {
			printf(" -");
		}
	}
	printf("\n");
}
