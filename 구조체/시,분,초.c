#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning (disable :4996)

struct vector {
	int h, m, s;//������ ���� h,m,s ����
};
void main() {
	struct vector t1, t2;//����ü vector t1�� t2 ����
	scanf("%d%d%d", &t1.h, &t1.m, &t1.s);//t1.h, t1.m, t1.s�� ���� �Է�
	scanf("%d%d%d", &t2.h, &t2.m, &t2.s);//t2.h, t2.m, t2.s�� ���� �Է�
	int a = t1.h * 3600 + t1.m * 60 + t1.s;//������ ���� a ���� �� t1.h * 3600 + t1.m * 60 + t1.s�� �ʱ�ȭ
	int b = t2.h * 3600 + t2.m * 60 + t2.s;//������ ���� a ���� �� t2.h * 3600 + t2.m * 60 + t2.s�� �ʱ�ȭ

	printf("%d %d %d", (b - a) / 3600, (b - a) % 3600 / 60, (b - a) % 3600 % 60);//��,��,�� ���
}