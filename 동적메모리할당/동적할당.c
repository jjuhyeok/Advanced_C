#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int N;//������ ���� N ����
	scanf("%d", &N);//N�� ���� �Է�
	int* p = NULL;//������ ������ *p ���� �� NULL�� ����
	p = (int*)malloc(N * sizeof(int));//�����Ҵ� �� p�� ����
	int s = 0;//������ ���� s ����
	for (int i = 0; i < N; i++) {//N�� �ݺ��ϴ� �ݺ���
		scanf("%d", p + i);//p+i �ּҿ� ���� �Է�
	}
	for (int i = 0; i < N; i++) {//N�� �ݺ��ϴ� �ݺ���
		s = s + *(p + i);//s�� s + *(p+i)����
	}//�� ���ϴ� �ݺ���
	printf("%d", s);//�� ���
	free(p);//�޸�����
}