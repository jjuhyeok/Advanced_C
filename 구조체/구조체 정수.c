#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

struct vector {
	int a, b, c;//������ ���� a,b,c����
};

int main() {
	struct vector v1;//����ü vector v1 ����
	scanf("%d %d %d", &v1.a, &v1.b, &v1.c);//v1.a, v1.b, v1.c�� ���� �Է�
	struct vector v2;//����ü vector v2 ����
	scanf("%d %d %d", &v2.a, &v2.b, &v2.c);//v2.a, v2.b, v2.c�� ���� �Է�
	struct vector v3 = { v1.a * v2.a,v1.b * v2.b,v1.c * v2.c };//����ü vector v3 ���� �� v1.a*v2a, v1.b*v2.b, v1.c*v2.c���� �ʱ�ȭ
	printf("%d %d %d", v3.a, v3.b, v3.c);//v3.a,v3.b,v3.c ���
	printf("\n%d", v3.a + v3.b + v3.c);//v3.a+v3.b+v3.c�� �� ���
}