#include<stdio.h>
#pragma warning(disable : 4996)

int main() {
	int ar[50] = { 0 }, N;//ũ�� 50�� �迭 �����ϰ� 0���� �ʱ�ȭ, ����N����
	int* p;//������ p����
	scanf("%d", &N);//ũ��N�� �Է�
	int c = 0;//����c���� �� 0����
	int cc = 0;//����cc���� �� 0����
	for (p = ar; p < ar + N; p++) {//N������ �ݺ��ϴ� �ݺ���
		scanf("%d", p);//������p�� ���� �Է�
		if (*p != 0 && cc == 0) {//*p�� 0�̾ƴϸ鼭 cc�� 0�� ����
			c = c + 1;//c 1����
		}
		if (*p == 0) {//*p�� 0�� ����
			cc = cc + 1;//cc 1����
		}

	}
	printf("%d", c);//c���
	return 0;
}