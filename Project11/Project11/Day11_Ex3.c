#include <stdio.h>

int main() {
	char sarr[] = "banana";
	
	int result = 0;
		for (int i = 0; i < 10; i++) {
			if (sarr[i] == '\0') { // NULL
				result = i;
			}
		}

		for (int j = result - 1; j >= 0; j--);
		printf(sarr[%d] = %c);

	return 0;
}