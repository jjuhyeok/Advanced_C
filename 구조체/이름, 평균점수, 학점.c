#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning (disable :4996)

struct student {
	char name[20];//ũ�Ⱑ 20�� ���ڿ� name ����
	float sc1, sc2, sc3;//�Ǽ��� sc1,sc2,sc3 ����
};
void main() {
	struct student st[20];//����ü student st[20]����
	float sum = 0;//�Ǽ��� ���� sum���� �� 0���� �ʱ�ȭ
	int N;//������ ���� N����
	scanf("%d", &N);//N�� ���� �Է�
	for (int i = 0; i < N; i++) {//N�� �ݺ��ϴ� �ݺ���
		scanf("%s%f%f%f", &st[i].name, &st[i].sc1, &st[i].sc2, &st[i].sc3);//st[i].name�� ���ڿ� �Է�,st[i].sc1, st[i].sc2, st[i].sc3�� �Ǽ� ����
	}
	for (int i = 0; i < N; i++) {//N�� �ݺ��ϴ� �ݺ���
		float sum = (st[i].sc1 + st[i].sc2 + st[i].sc3) / 3;//sum�� ������� ����
		if (sum >= 90)//sum�� 90�� �̻��� ����
			printf("%s %.1f A", st[i].name, sum);//�л� �̸��� �������, ���� A ���
		else if (80 <= sum)//sum�� 80�� �̻��� ����
			printf("%s %.1f B", st[i].name, sum);//�л� �̸��� �������, ���� B ���
		else if (70 <= sum)//sum�� 70�� �̻��� ����
			printf("%s %.1f C", st[i].name, sum);//�л� �̸��� �������, ���� C ���
		else//sum�� 70�� �̸��� ����
			printf("%s %.1f F", st[i].name, sum);//�л� �̸��� �������, ���� F ���
	}
}