#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int add(int x, int y) {
	return x + y;//x+y�� ��ȯ
}
int sub(int x, int y) {
	return x - y;//x-y�� ��ȯ
}
int multiply(int x, int y) {
	return x * y;//x*y�� ��ȯ
}

int main() {
	int x, y;//������ ���� x,y ����
	int (*handle[3]) (int, int) = { add, sub, multiply };//�迭�� ũ�Ⱑ 3�� �Լ� ������ �迭 handle ���� �� �Լ� �̸����� �ʱ�ȭ
	scanf("%d %d", &x, &y);//x,y�� ���� �Է�
	printf("%d %d %d", handle[0](x, y), handle[1](x, y), handle[2](x, y));//��, ��, �� ���
	return 0;
}