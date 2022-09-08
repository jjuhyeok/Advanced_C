#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

struct student {
	char name[8];//ũ�Ⱑ 8�� ���ڿ� ����
	int k, e, m;//������ ���� k,e,m ����
	float avg;//�Ǽ��� avg ����
};
void main() {
	int N;//������ ���� N ����
	scanf("%d", &N);//N�� ���� ����
	struct student* p = (struct student*)malloc(N * sizeof(struct student));//����ü�� N * sizeof(struct student) ũ�� �����Ҵ�

	for (int i = 0; i < N; i++) {//N�� �ݺ��ϴ� �ݺ���
		scanf("%s", &p[i].name);//p[i].name�� �̸� �Է�
		scanf("%d%d%d", &p[i].k, &p[i].e, &p[i].m);//���� ���� ���� ���� �Է�
	}

	for (int i = 0; i < N; i++) {//N�� �ݺ��ϴ� �ݺ���
		printf("%s ", (p + i)->name);//�̸� ���
		p[i].avg = (float)(p[i].k + p[i].e + p[i].m);//���� 3�� ���� ���ؼ� p[i].avg�� ����
		p[i].avg /= 3;//p[i].avg�� 3���� ������
		printf("%.1f ", p[i].avg);//��� ���
		if (p[i].k >= 90 || p[i].e >= 90 || p[i].m >= 90) {//GREAT�� ����
			printf("GREAT ");//GREAT ���
		}
		if (p[i].k < 70 || p[i].e < 70 || p[i].m < 70) {//BAD�� ����
			printf("BAD");//BAD ���
		}
		printf("\n");//�ٹٲ�
	}
	free(p);//p�޸� ����

}