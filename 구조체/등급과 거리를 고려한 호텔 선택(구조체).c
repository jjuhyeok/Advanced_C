#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)
struct hotel_info {
	char name[31];
	int grade;
	double repute;
	double dis;
	char YN;
};
int in_hotel_info(struct hotel_info* p) {
	int i = 0;
	for (i; i < 100; i++, p++) {
		scanf("%s", &(p->name));
		if (strcmp("0", p->name) == 0)
			return i;
		scanf("%d %lf %lf %c", &(p->grade),
			&(p->repute), &(p->dis), &(p->YN));
	}
}
void out_hotel_info(struct hotel_info* p, int N, int G, double D) {
	double R = 0;
	int I = 0;
	struct hotel_info* k = p;
	struct hotel_info tmp = { "",0,0,0,' ' };
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1; j++) {
			if ((p + j)->repute < (p + j + 1)->repute) {
				tmp = *(p + j + 1);
				*(p + j + 1) = *(p + j);
				*(p + j) = tmp;
			}
			else if ((p + j)->repute == (p + j + 1)->repute) {
				if (strcmp((p + j)->name, (p + j + 1)->name) > 0) {
					tmp = *(p + j + 1);
					*(p + j + 1) = *(p + j);
					*(p + j) = tmp;
				}
			}
		}
	}
	for (int i = 0; i < N; k++, i++) {
		if (k->grade >= G && k->dis <= D) {
			printf("%s %d %.1lf %.1lf %c\n", k->name, k->grade,
				k->repute, k->dis, k->YN);
		}
	}
}
void main() {
	struct hotel_info h[101];
	int n, G;
	double D;
	n = in_hotel_info(h);
	scanf("%d %lf", &G, &D);
	out_hotel_info(h, n, G, D);
}