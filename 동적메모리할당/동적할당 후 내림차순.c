#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable: 4996)
int main() {
	int N;//������ ���� N����
	scanf("%d", &N);//N�� ���� �Է�
	int* p = (int*)malloc(N * sizeof(int));//*p�� N * sizeof(int) ũ�� �����Ҵ�

	for (int i = 0; i < N; i++) {//N�� �ݺ��ϴ� �ݺ���
		scanf("%d", p + i);//p+i�� ���� �Է�
	}
	for (int i = 0; i < N - 1; i++) {//N-1�� �ݺ��ϴ� �ݺ���
		if (*(p + i) > *(p + i + 1)) {//*(p + i)���� *(p + i+1)���� ū ����
			int tmp = *(p + i);//tmp��  *(p + i)����
			*(p + i) = *(p + i + 1);// *(p + i)��  *(p + i+1)����
			*(p + i + 1) = tmp;// *(p + i+1)�� tmp ����
		}//���������ϰ� ���� ū ���� �ڷ� ����
	}
	for (int i = 0; i < N; i++) {//N�� �ݺ��ϴ� �ݺ���
		printf("%d\n", *(p + i));//���
	}
	free(p);//p�޸� ����
}