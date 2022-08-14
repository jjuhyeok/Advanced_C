#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
int ABC(int* pa, int k) {
	//printf("½ÃÀÛ *pa : %d\n", *pa);
	int* tmp = pa;
	int max = -9999;
	int* c = pa;
	int* ppa = pa;
	int cnt = 0;
	int* a = pa;
	int t = 0;
	int cccnt = 0;
	for (tmp; tmp < a + k; tmp++) {
		//printf("tmp : %d\n", *tmp);
		if (max < *tmp) {
			max = *tmp;
			c = tmp;
			t = cnt;
			//printf("µé *c : %d max : %d *tmp : %d\n",*c,max,*tmp);
		}
		cnt++;
	}
	int x = *pa;
	*pa = *c;
	*c = x;

	//printf("%d %d\n", *c, *a);
	//printf("%d %d\n", *c, *pa);

}
int main() {
	int a[10];
	int* pa = a;
	for (pa = a; pa < a + 10; pa++) {
		scanf("%d", pa);
	}
	pa = a;
	int k = 10;
	for (int i = 0; i < 10; i++) {
		ABC(pa + i, k);
		k--;
	}
	for (pa = a; pa < a + 10; pa++) {
		printf(" %d", *pa);
	}
}