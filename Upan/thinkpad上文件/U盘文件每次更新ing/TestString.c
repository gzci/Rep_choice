#include <stdio.h>
#include<string.h>
#define nmb 3
int main() {
	char t[20];
	char names[nmb][20];
	int i, j;
	for (i = 0; i < nmb; i++) {
		gets(names[i]);
//		scanf("%s", names);
	}

	for (i = 0; i < nmb; i++) {
		for (j = 0; j < nmb; j++) {
			if (strcmp(names[i], names[i + 1]) > 0) {
				strcpy(t, names[i]);
				strcpy(names[i], names[i + 1]);
				strcpy(names[i + 1], t);
			}
		}
	}

	for (i = 0; i < nmb; i++) {
		printf(names[i]);
		printf("\n");
	}

	return 0;
}
