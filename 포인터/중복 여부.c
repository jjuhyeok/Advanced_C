#include <stdio.h>
#pragma warning(disable:4996)
void main() {
	int N, cnt = 0, i, j, k = 0, c = 0;//���� N,cnt = 0,i,j,k,c ����
	scanf("%d", &N);//N�� ���� �Է�
	int a[21] = { 0 };//ũ�Ⱑ 21�� �迭 a ���� �� 0���� �ʱ�ȭ
	int b[21] = { 0 };//ũ�Ⱑ 21�� �迭 b ���� �� 0���� �ʱ�ȭ
	int* pa = a, * pb = b, * pc = a;//������ pa ���� �� a�� ����, ������ pb ������ b�� ����, ������ pc ���� �� a�� ����
	for (pa = a; pa < a + N; pa++) {//pa=a ���� pa++�ϸ� pa<a+N���� �ݺ��ϴ� �ݺ���
		scanf("%d", pa);//pa�� ���� �Է�
	}
	if (N >= 5) {//N�� 5�̻��� ����
		for (i = 0, pa = a; pa < a + N; pa++, i++) {//pa++ �ϸ� pa< a+N���� �ݺ��ϴ� �ݺ���
			for (j = 0, pb = a; pb < a + N; pb++, j++) {//pb++ �ϸ� pb< a+N���� �ݺ��ϴ� �ݺ���
				if (*pa == *pb) {//*pa == *pb�� ����
					cnt++;//cnt 1�� ����
					if (i > j)//i>j�� ���
						k = 1;//k�� 1 ����
				}
			}
			if (k != 1 && cnt != 1) {//k �� 1�� �ƴϸ� cnt�� 1�� �ƴ� ���
				printf("%d %d\n", *pa, cnt);//���
				c++;//c 1�� ����
			}
			cnt = 0;//cnt�� 0 ����
			k = 0;//k�� 0 ����
		}
		if (c == 0)//c�� 0 �� ����
			printf("0\n");//0���
	}
	else
		printf("-1");//-1���
}