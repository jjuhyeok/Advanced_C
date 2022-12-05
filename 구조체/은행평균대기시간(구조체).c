#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
struct _bank {
	int id; // ���̵�, T1, T2, T3 ���, 1, 2, 3, ... ���� �Ѵ�. 
	int arrival_time; // �����ð�
	int service_time; // ���񽺽ð�
	int waiting_time; // ���ð�
};
void waitingtime(struct _bank guest[], int N) {
	N = N - 1;//N�� 1 ����
	guest[0].waiting_time = 0;//ù��° ��ٸ��� �ð� 0 ����
	for (int i = 0; i < N; i++) {//������ŭ �ݺ��ϴ� �ݺ���
		guest[i + 1].waiting_time = guest[i].waiting_time + guest[i].arrival_time + guest[i].service_time - guest[i + 1].arrival_time;//�� ���� ����� ��ٸ��� �ð� ���ؼ� �������ֱ�
	}
}
double avgtime(struct _bank guest[], int N) {
	double sum = 0;//�Ǽ��� ���� sum ���� �� 0���� �ʱ�ȭ
	for (int i = 0; i < N; i++) {//������ŭ �ݺ��ϴ� �ݺ���
		sum = sum + guest[i].waiting_time;//sum�� ��ٸ��� �ð� �����ֱ�
	}
	sum = (sum / N);//��ٸ��� �ð��� ���� ��ŭ �����ֱ�
	return sum;//sum �� ��ȯ
}
int main() {
	struct _bank bk[100];//ũ�Ⱑ 100�� ����ü �迭 bk ����
	int N;//����
	scanf("%d", &N);//���� �Է�
	for (int i = 0; i < N; i++) {//������ŭ �ݺ��ϴ� �ݺ���
		scanf("%d %d %d", &bk[i].id, &bk[i].arrival_time, &bk[i].service_time);//�����, �����ð�, ���񽺽ð� �Է�
	}

	waitingtime(bk, N);//waitingtime �Լ� ȣ��
	printf("%.2lf", avgtime(bk, N));//��մ��ð� ���
}