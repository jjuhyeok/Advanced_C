#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<math.h>
#pragma warning(disable:4996)

void ABC(int(*p)[20], int k1, int k2) {
	for (int i = 0; i < k1; i++) {//k1�� �ݺ��ϴ� �ݺ���
		for (int j = 0; j < k2; j++) {//k2�� �ݺ��ϴ� �ݺ���
			p[i][j] = i + j;//p[i][j]�� �� �ε��� ���� ���� ����
		}
	}
}

int main() {
	int N;//������ ���� N ����
	scanf("%d", &N);//N�� ���� �Է�
	int arr[20][20];//������ �迭 arr ����
	for (int i = 0; i < N; i++) {//N�� �ݺ��ϴ� �ݺ���
		for (int j = 0; j < N; j++) {//N�� �ݺ��ϴ� �ݺ���
			arr[i][j] = 0;//�迭�� 0 ���� �ʱ�ȭ
		}
	}
	ABC(arr, N, N);//ABC�Լ� ȣ��
	for (int i = 0; i < N; i++) {//N�� �ݺ��ϴ� �ݺ���
		for (int j = 0; j < N; j++) {//N�� �ݺ��ϴ� �ݺ���
			printf(" %d", arr[i][j]);//arr[i][j]�� ���
		}
		printf("\n");//�ٹٲ�
	}
	return 0;
}