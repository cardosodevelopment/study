#include <stdio.h>

main() {
	
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			putchar(10);
		else if (c)
			putchar(c);
	}
}
