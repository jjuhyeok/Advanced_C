#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<math.h>
#pragma warning(disable:4996)

int A(int n) {
	if (n == 0) {//n�� 0 �� ����
		return 0;//0 ��ȯ
	}
	else if (n == 1) {//n�� 1 �� ����
		return 1;//1 ��ȯ
	}
	else {//n�� 0,1�� �ƴ� ����
		return A(n - 1) + A(n - 2);//�Ǻ���ġ
	}
}

int main() {
	int n;//������ ���� n ����
	scanf("%d", &n); //n�� ���� �Է�
	int s;//������ ���� s ����
	s = A(n); //s�� �Լ� A�� ����
	printf("%d", s); //s ���
	return 0;
}
