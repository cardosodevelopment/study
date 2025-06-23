#include <stdio.h>

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

	for (int i = 15; i > 0; --i) {
		printf("\n");
		for (int u = 0; u < 10; ++u) {
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
