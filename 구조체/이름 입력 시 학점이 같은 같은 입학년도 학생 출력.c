#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
struct student {
	char name[10];//�̸�
	char stnum[11];//�й�
	char e;//����
};
int main() {
	struct student st[5];//ũ�Ⱑ 5�� ����ü �迭 st����
	for (int i = 0; i < 5; i++) {//5�� �ݺ��ϴ� �ݺ���
		scanf("%s %s %c ", &st[i].name, &st[i].stnum, &st[i].e);//�̸�,�й�,���� �Է�
	}
	char n[10];//���̰� 10�� ���ڿ�
	int cnt = 0;//������ ���� cnt ���� �� 0���� �ʱ�ȭ
	int x = 0;//������ ���� x ���� �� 0���� �ʱ�ȭ
	scanf("%s", &n);//���ڿ� �Է�
	for (int i = 0; i < 5; i++) {//5�� �ݺ��ϴ� �ݺ���
		if (strcmp(n, (st[i]).name) == 0) {//�̸��� ���ڿ�n�� ���� ����
			for (int j = 0; j < 5; j++) {//5�� �ݺ��ϴ� �ݺ���
				if (strcmp(st[i].name, st[j].name) != 0 && st[i].e == st[j].e) {//st[i].name�� st[j].name�� ���� �ʰ� �й��� ���� ����
					for (int k = 0; k < 4; k++) {//4�� �ݺ��ϴ� �ݺ���
						if (st[i].stnum[k] == st[j].stnum[k]) {//�� �й��� ���� ����
							cnt++;//cnt �� 1 ����
						}
					}
					if (cnt == 4) {//cnt�� 4�� ����
						printf("%s ", st[j].name);//�̸� ���
						x = 1;//x�� 1����
					}
					cnt = 0;//cnt�� 0 ����
				}
			}
			int num = (atoi(st[i].stnum) / 1000000);//���ڿ��� �й��� ���������� ��ȯ �� �� 4�ڸ��� num�� ����
			int nnum = num % 131;//131�� ���� ������
			if (x == 0) {//x�� 0�� ����
				printf("0");//0���
			}
			printf("\n%d %d", num, nnum);//�й� �� 4�ڸ��� 131�� ���� ������ ���
		}
	}
}