#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int N;//������ ���� N ����
	scanf("%d", &N);//N�� ���� �Է�
	float* p;//�Ǽ��� ������ *p ����
	p = (float*)malloc(N * sizeof(float));//�����Ҵ� �� p�� ����
	float s = -999;//�Ǽ��� ���� s ���� �� -999���� �ʱ�ȭ
	if (N == 0) {
		s = 0;
	}
	for (int i = 0; i < N; i++) {//N�� �ݺ��ϴ� �ݺ���
		scanf("%f", p + i);//p+i�� �Ǽ� �Է�
	}
	for (int i = 0; i < N; i++) {//N�� �ݺ��ϴ� �ݺ���
		if (*(p + i) > s) {//s���� *(p+i)���� ū ����
			s = *(p + i);//s�� *(p+i)�� ����
		}//ū �� ã�� �ݺ���
	}
	printf("%.2lf", s);//���� ū �� ���
	free(p);//�޸� ����
}