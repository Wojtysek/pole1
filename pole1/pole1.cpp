#include <stdio.h>
#include <stdio.h>

int main(void) {

	int pole[4];
	pole[0] = 23;
	pole[1] = 6;
	pole[2] = 1268;
	pole[3] = 98;

	for (int i = 0; i < 4; i++) {
		printf("%d: %d\n", i, pole[i]);
	}

	//jina moznost:
	int cisla[] = { 15, 7, 3, 8, 24, 100, 48 };
	for (int i = 0; i < 7; i++) {
		printf("%d: %d\n", i, cisla[i]);
	}

	//naplnit pole nahodnymi cisly:
}