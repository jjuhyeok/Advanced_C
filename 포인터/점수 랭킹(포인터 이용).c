#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int arr[5];
	int* p;
	for (p = arr; p < arr + 5; p++) {
		scanf("%d", p);
	}
	int tmp;
	int rank[5];
	int c = 1;
	int z = 0;
	for (p = arr; p < arr + 5; p++) {
		for (int* q = arr; q < arr + 5; q++) {
			if (*(p) < *(q)) {
				c++;
			}
		}
		rank[z] = c;
		z++;
		c = 1;
	}
	int* rp = rank;
	for (p = arr; p < arr + 5; rp++, p++) {
		printf("%d=r%d ", *p, *rp);
	}
}