#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
struct score {
	char name[10];//�ִ� ���̰� 9�� �̸�
	double a, b, c;//3ȸ ���� ����
	double avg;//��� ����
};
read_data(struct score sc[10]) {
	for (int i = 0; i < 10; i++) {//10�� �ݺ��ϴ� �ݺ���
		scanf("%s %lf %lf %lf", &sc[i].name, &sc[i].a, &sc[i].b, &sc[i].c);//�̸�, ���� ���� �Է�
	}
}
cal_avg(struct score sc[10]) {
	double sum = 0;//�Ǽ��� ���� sum ���� �� 0 ����
	for (int i = 0; i < 10; i++) {//10�� �ݺ��ϴ� �ݺ���
		sum = (sc[i].a + sc[i].b + sc[i].c) / 3;//sum�� ������� ����
		sc[i].avg = sum;//����ü avg�� ��հ� �Է�
	}
}
sort(struct score sc[10]) {
	int cnt = 0;//������ ���� cnt ���� �� 0���� �ʱ�ȭ
	struct score tmp = { "",0,0,0,0 };//�� ����ü tmp ����
	struct score cpy[10] = { "",0,0,0,0 };//�� ����ü cpy ����
	for (int i = 0; i < 10; i++) {//10�� �ݺ��ϴ� �ݺ���
		for (int j = 0; j < 10; j++) {//10�� �ݺ��ϴ� �ݺ���
			if (sc[i].avg < sc[j].avg) {//��հ��� sc[i].avg ���� sc[j].avg�� ū ����
				cnt++;//cnt 1 ����
			}
		}
		cpy[cnt] = sc[i];//cpy[cnt] ��sc[i] ����
		cnt = 0;//cnt�� 0 ����
	}
	for (int i = 0; i < 10; i++) {//10�� �ݺ��ϴ� �ݺ���
		sc[i] = cpy[i];//�迭 0~9�� �������ֱ�
	}
}
print_score(struct score sc[10]) {
	printf("%s %.2lf\n", sc[0].name, sc[0].avg);//�ְ��� �л��� �̸��� ������� ���
	printf("%s %.2lf\n", sc[9].name, sc[9].avg);//������ �л��� �̸��� ������� ���
	printf("%s %.2lf\n", sc[7].name, sc[7].avg);//8��° �л��� �̸��� ������� ���
	printf("%s %.2lf\n", sc[8].name, sc[8].avg);//9��° �л��� �̸��� ������� ���
	printf("%s %.2lf", sc[9].name, sc[9].avg);//10��°(������) �л��� �̸��� ������� ���

}int main() {
	struct score a[10];//ũ�Ⱑ 10�� ����ü �迭 a ����
	read_data(a);//read_data�Լ� ȣ��
	cal_avg(a);//cal_avg�Լ� ȣ��
	sort(a);//sort �Լ� ȣ��
	print_score(a);//print_score �Լ� ȣ��
}
