#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#define ABS(a)((a)>=0? (a):-(a))
#define MAX(a,b) ((a)>=0? (a):-(a))>((b)>=0? (b):-(b))?(a):(b)

void main() {
	int s[6];//ũ�Ⱑ 6�� ������ �迭 s ����
	for (int i = 0; i < 6; i++) {//6�� �ݺ��ϴ� �ݺ���
		scanf("%d", &s[i]);//���� �Է�
	}

	for (int i = 0; i < 6; i++) {//6�� �ݺ��ϴ� �ݺ���
		for (int j = 0; j < 5; j++) {//5�� �ݺ��ϴ� �ݺ���
			s[j] = MAX(s[j], s[j + 1]);//���밪�� ū ���� s[j]�� ����
		}
	}

	printf("\n%d %d", s[0], ABS(s[0]));//���
}