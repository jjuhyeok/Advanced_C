#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

void add(int x, int y) {
	printf("%d", x + y);//x+y�� ���
}

int main() {
	int A;//������ ���� A ����
	scanf("%d", &A);//A�� ���� �Է�
	void* pa = &A;//void������ *pa���� �� A�� ����
	printf("%d\n", *(int*)pa);//int�� �����ͷ� ����ȯ �� �����������ڷ� ���
	void(*fp)();//�Լ������� fp����
	fp = add;//fp�� �Լ� add ����
	int x, y;//������ ���� x,y����
	scanf("%d %d", &x, &y);//x,y�� ���� �Է�
	fp(x, y);//�Լ� ȣ��
}