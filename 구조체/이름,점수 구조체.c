#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning (disable :4996)

struct student {
	char name[10];//ũ�Ⱑ 10�� ���ڿ�name ����
	float score;//�Ǽ��� ���� score ����
};
void main() {
	struct student st[5];//����ü student st[5] ����

	float sum = 0;//�Ǽ��� ���� sum ���� �� 0���� �ʱ�ȭ
	for (int i = 0; i < 5; i++) {//5�� ���ư��� �ݺ���
		scanf("%s %f", st[i].name, &st[i].score);//st[i].name�� ���ڿ� �Է�, st[i].score�� �Ǽ� �Է�

	}
	for (int i = 0; i < 5; i++) {//5�� ���ư��� �ݺ���
		sum += st[i].score;//sum�� st[i].score �����ֱ�
	}
	for (int i = 0; i < 5; i++) {//5�� ���ư��� �ݺ���
		if (st[i].score <= sum / 5) {//��� ������ ������ ����
			printf("%s\n", st[i].name);//�̸� ���
		}
	}
}