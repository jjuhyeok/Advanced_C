#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int N;//������ ���� N ����
	scanf("%d", &N);//N�� ���� �Է�
	int* p = (int*)malloc(N * sizeof(int));// *p��  N * sizeof(int) �����Ҵ�

	for (int i = 0; i < N; i++) {//N�� �ݺ��ϴ� �ݺ���
		scanf("%d", &p[i]);//p[i]�� ���� �Է�
	}
	int D;//������ ���� D ����
	scanf("%d", &D);//D�� ���� �Է�
	int* q = (int*)malloc(N * sizeof(int));//*q��  N * sizeof(int) �����Ҵ�
	q = p;//q�� p����
	q = (int*)realloc(q, (N - D) * sizeof(int));//q�� (N-D)*sizeof(int) ���Ҵ�
	for (int i = 0; i < N - D; i++) {//N-D��ŭ �ݺ��ϴ� �ݺ���
		printf("%d\n", q[i]);//q[i]���
	}
	free(q);//q�޸� ����
	free(p);//p�޸� ����
}