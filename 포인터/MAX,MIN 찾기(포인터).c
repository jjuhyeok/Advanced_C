#include <stdio.h>
#pragma warning(disable : 4996)
int MAX(int* ar) {//MAx�Լ�
	int* p;//������ p ����
	int max = *ar;//���� max ���� �� *ar ����
	for (p = ar; p < ar + 100; p++) {//100�� �ݺ��ϴ� �ݺ���
		if (*p >= max)//*p�� max���� ũ�ų� ���� ���
			max = *p;//max�� *p����
	}
	return max;//max ��ȯ
}
int MIN(int* ar) {//MIN �Լ�
	int* p;//������ p ����
	int min = *ar;//���� min ���� �� *ar ����
	for (p = ar; p < ar + 100; p++) {//100�� �ݺ��ϴ� �ݺ���
		if (*p != 0 && *p <= min)//*p�� 0�� �ƴϸ鼭 *p�� max���� �۰ų� ���� ���
			min = *p;//min�� *p ����
	}
	return min;//min ��ȯ
}

int main() {
	int N, i;//���� N,i ����
	scanf("%d", &N);//N�� ���� �Է�
	int cnt[2] = { 0 };//ũ�Ⱑ 2�� �迭 cnt ���� �� 0���� �ʱ�ȭ
	int* p, j, d, m;//������ p, ������ j,d,m����

	for (i = 0; i < N; i++) {//i�� 0���� i++�ϸ� i<N ���� �ݺ��ϴ� �ݺ���
		int ar[100] = { 0 };//ũ�Ⱑ 100�� �迭 ar���� �� 0���� �ʱ�ȭ
		for (p = ar; p < ar + 100; p++) {//100�� �ݺ��ϴ� �ݺ���
			scanf("%d", p);//p�� ���� �Է�
			if (*p == 0)//*p�� 0�� ����
				break;//Ż��
		}
		cnt[0] = MAX(ar);//cnt[0]�� MAX(ar)����
		cnt[1] = MIN(ar);//cnt[1]�� MIN(ar)����

		printf("%d %d\n", cnt[0], cnt[1]);//���
	}

	return 0;
}