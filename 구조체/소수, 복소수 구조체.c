#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
struct complex {
	double a;//�Ҽ��κ�
	double b;//���Ҽ��κ�
};
struct complex add(struct complex c1, struct complex c2) {
	double s1 = 0;//�Ǽ��� ���� s1 ���� �� 0 ����
	double s2 = 0;//�Ǽ��� ���� s1 ���� �� 0 ����
	s1 = c1.a + c2.a;//�Ҽ����� ���ϱ�
	s2 = c1.b + c2.b;//���Ҽ����� ���ϱ�
	struct complex st = { s1,s2 };//����ü st�� s1,s2�� ����
	return st;//st ��ȯ
}
int main() {
	struct complex c0[2];//ũ�Ⱑ 2�� ����ü c0����
	for (int i = 0; i < 2; i++) {//2�� �ݺ��ϴ� �ݺ���
		scanf("%lf %lf", &c0[i].a, &c0[i].b);//�Ҽ��� ���Ҽ� �Է�
	}
	add(c0[0], c0[1]);//add�Լ� ȣ��
	printf("%.1lf + %.1lfi", add(c0[0], c0[1]));//�Ҽ��� ���Ҽ� ���
}