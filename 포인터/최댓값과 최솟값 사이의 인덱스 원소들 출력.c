#include <stdio.h>
#pragma warning(disable : 4996)
int* MAX(int* ar) {//MAX�Լ�
	int* p = ar;//������ p ���� �� ar�� ����
	int* pmax = ar;//������ pmax���� �� ar�� ����
	for (p = ar; p < ar + 100; p++) {//100�� �ݺ��ϴ� �ݺ���
		if (*p != 0 && *p >= *pmax)//*p�� 0�� �ƴϸ鼭 *p>=*pmax�� ����
			pmax = &(*p);//pmax�� &(*p) ����
	}
	return pmax;//pmax ��ȯ
}
int* MIN(int* ar) {//MIN�Լ�
	int* p;//������ p ����
	int* pmin = ar;//������ pmin���� �� ar�� ����
	for (p = ar; p < ar + 100; p++) {//100�� �ݺ��ϴ� �ݺ���
		if (*p != 0 && *p <= *pmin)//*p�� 0�� �ƴϸ鼭 *p<=*pmin�� ����
			pmin = &(*p);//pmin�� &(*p) ����
	}
	return pmin;//pmin ��ȯ
}

void main() {
	int N, i;//���� N,i ����
	scanf("%d", &N);//N�� ���� ����
	int ar[100] = { 0 };//ũ�Ⱑ 100�� ar ���� �� 0���� �ʱ�ȭ
	int* max = &ar[0], * min = &ar[0];//������ max ���� �� &ar[0]�� ����, ������ min ���� �� &ar[0]�� ����
	int* p;//������ p ����

	for (i = 0; i < N; i++) {//i�� 0���� 1�� �����ϸ� i<N���� �ݺ��ϴ� �ݺ���
		int ar[100] = { 0 };//ũ�Ⱑ 100�� �迭 ar ���� �� 0���� �ʱ�ȭ
		for (p = ar; p < ar + 100; p++) {//100�� �ݺ��ϴ� �ݺ���
			scanf("%d", p);//p�� ���� �Է�
			if (*p == 0)//*p�� 0�� ����
				break;//Ż��
		}
		max = MAX(ar);//max�� MAX(ar) ����
		min = MIN(ar);//min�� MIN(ar) ����
		if (max < min && min - max != 1) {//max < min�̸鼭 min - max !=1 �� ����
			for (p = max + 1; p < min; p++)//p�� max+1�� ���Խ�Ű�� p++�ϸ� p<min���� �ݺ��ϴ� �ݺ���
				printf("%d ", *p);//���
		}
		else if (min < max && max - min != 1) {//min < max �̸鼭 max - min !=1 �� ����
			for (p = min + 1; p < max; p++)//p�� min+1�� ���Խ�Ű�� p++�ϸ� p<max���� �ݺ��ϴ� �ݺ���
				printf("%d ", *p);//���
		}
		else {

			printf("none");//none���

		}
	}

}