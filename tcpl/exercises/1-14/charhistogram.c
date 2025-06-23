#include <stdio.h>

main() {
	
	int c;
	int listchar[25];

	for (int i = 0; i < 25; ++i)
		listchar[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c >= 'A' && c <= 'Z')
			++listchar[c - 'A'];
		else if (c >= 'a' && c <= 'z')
			++listchar[c - 'a'];
	}

	for (int i = 30; i > 0; --i) {
		printf("\n%2d", i);
		for (int u = 0; u <= 25; ++u) {
			if (listchar[u] >= i)
				printf(" *");
			else
				printf(" -");
		}
	}
	
	printf("\n  ");
	for (int i = 65; i < 91; ++i)
		printf("%2c", i);
	printf("\n");
}
