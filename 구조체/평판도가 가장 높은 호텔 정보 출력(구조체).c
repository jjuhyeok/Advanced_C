#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

struct hotel_info {
	char name[31];//ȣ���̸�
	int G;//���
	double k;//����
	double D;//�Ÿ�
	char b;//�������Կ���
};
int in_hotel_info(struct hotel_info* p) {
	int cnt = 0;//ȣ�ڼ� ���� ����
	for (int i = 0; i < 100; i++) {//100�� �ݺ��ϴ� �ݺ���
		scanf("%s", &(p + i)->name);//ȣ�� �̸� �Է�
		getchar();//getchar
		if ((*(p + i)).name[0] == '0') {//ȣ���̸��� 0�� ����
			break;//break
		}
		scanf("%d %lf %lf %c", &(p + i)->G, &(p + i)->k, &(p + i)->D, &(p + i)->b);//���, ����, �Ÿ�, �������Կ��� �Է�
		cnt++;//ȣ�ڼ� 1 ����
	}
	return cnt;//cnt ��ȯ 
}
void out_hotel_info(struct hotel_info* p, int N, int G, double D) {
	double h = 0;//����
	int n = 0;//���°
	char s[31] = { '\0', };//�̸�
	for (int i = 0; i < N; i++) {//N�� �ݺ��ϴ� �ݺ���
		if ((*(p + i)).G >= G && (*(p + i)).D <= D && h <= (*(p + i)).k) {
			if (h == (*(p + i)).k) {//������ ���� ����
				if (strcmp((*(p + i)).name, s) < 0) {//(*(p + i)).name�� s���� ���� ����
					strcpy(s, ((*(p + i)).name));//s�� ((*(p + i)).name) ����
					n = i;//n�� i ����
					h = ((*(p + i)).k);//h�� ���� ����
				}
			}
			else {//������ �ٸ� ����
				h = ((*(p + i)).k);//h�� ���� ����
				n = i;//n�� i ����
				strcpy(s, ((*(p + i)).name));//s�� ((*(p + i)).name)����
			}
		}
	}
	printf("%s %d %.1lf %.1lf %c", (*(p + n)).name, (*(p + n)).G, (*(p + n)).k, (*(p + n)).D, (*(p + n)).b);//ȣ���̸�, ���, ����, �Ÿ�, ���Ŀ��� ���
}
int main() {
	struct hotel_info ht[100], * p = ht;//ũ�Ⱑ 100�� ����ü �迭 ht ���� �� ������ *p�� ht ����
	int n = in_hotel_info(p);//in_hotel_infoȣ�� �� ������ ���� n�� ����
	int G;//������ ���� G ����(���)
	double D;//�Ǽ��� ���� D ����(�Ÿ�)
	scanf("%d %lf", &G, &D);//��ް� �Ÿ� �Է�
	out_hotel_info(p, n, G, D);//out_hotel_info ȣ��
}