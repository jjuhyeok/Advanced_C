#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

double factorial(int n) {
	if (n == 0)//n�� 0�� ����
		return 1;//1 ��ȯ
	int fac = 1, i;//int fac ���� �� 1 �� �ʱ�ȭ, i ����
	for (i = 1; i <= n; i++) {//n����ŭ �ݺ��ϴ� �ݺ���
		fac *= i;//fac�� fac*i ����
	}
	return 1.0 / fac + factorial(n - 1);//����Լ�
}

int main() {
	int n;//������ ���� n ����
	scanf("%d", &n);//���� �Է�
	printf("%.6lf", factorial(n));//�� ���
	return 0;
}