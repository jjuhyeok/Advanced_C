#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
struct student {
	char name[10];//�л��̸�
	char stnum[11];//�й�
	char e;//����
};
int main() {
	struct student st[5];//ũ�Ⱑ 5�� ����ü �迭 st����
	for (int i = 0; i < 5; i++) {//5�� �ݺ��ϴ� �ݺ���
		scanf("%s %s %c ", st[i].name, st[i].stnum, &st[i].e);//�̸�, �й�, ���� �Է�
	}
	char n[10];//���̰� 10�� ���ڿ�
	scanf("%s", &n);
	for (int i = 0; i < 5; i++) {//5�� �ݺ��ϴ� �ݺ���
		if (strcmp(n, (st[i]).name) == 0) {//�̸��� ���ڿ�n�� ���� ����
			printf(" %s %c", st[i].stnum, st[i].e);//�й��� ���� ���
			break;//break
		}
	}
}