#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<math.h>
#pragma warning(disable:4996)

int A(int a, int b) {
	if (a != b) {//a�� b�� �ٸ� ����
		if (a > b) {//a�� b���� ū ����
			A(b, a - b);//A�Լ� ȣ��
		}
		else {//a�� b ������ ����
			A(a, b - a);//A�Լ� ȣ��
		}
	}
	else {//a�� b�� ���� ����
		return a;//a ��ȯ
	}
}

int main() {
	int a, b;//�� �� a,b ����
	scanf("%d %d", &a, &b);//a,b�� ���� �Է�
	int c = A(a, b);//������ ���� c ���� �� A�Լ� �� ����
	printf("%d", c);//c�� �� ���
}