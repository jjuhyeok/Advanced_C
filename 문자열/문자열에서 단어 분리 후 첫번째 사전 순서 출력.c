#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
void main() {
	int i = 0, j = 0, k = 0;//������ ���� i, j, k�� ���� �� 0 ����
	char A[1001] = { '\0', };//ũ�Ⱑ 1001�� �迭 A ���� �� null�� �ʱ�ȭ
	char B[10][100] = { '\0', };//ũ�Ⱑ 10,100�� ���߹迭 B ���� �� null�� �ʱ�ȭ
	int B_n = 0;//������ ���� B_n ���� �� 0���� �ʱ�ȭ
	gets(A);//A�� �Է�
	int l = strlen(A);//������ ���� l ���� �� A�� ���� ����

	for (i = 0; i < l; i++) {//l��ŭ �ݺ��ϴ� �ݺ���
		B[B_n][j++] = A[i];//B[B_n][j++] �� A[i]�� ����
		if (A[i] == ' ') {//A[i]�� ' '�� ����
			B[B_n][--j] = '\0';//B[B_n][--j] �� null�� �ʱ�ȭ
			B_n++;//B_n�� 1 ����
			j = 0;//j�� 0 ����
		}
	}
	B_n++;//B_n�� 1 ����
	for (i = 0; i < B_n; i++) {//B_n��ŭ �ݺ��ϴ� �ݺ���
		puts(B[i]);//B[i]���
	}
	char tmp[100] = { '\0', };//ũ�Ⱑ 100�� �迭tmp ���� �� 0���� �ʱ�ȭ

	for (i = 0; i < B_n; i++) {//B_n��ŭ �ݺ��ϴ� �ݺ���
		for (j = 0; j < B_n - 1; j++) {//B_n -1 ��ŭ �ݺ��ϴ� �ݺ���
			for (k = 0; k < 100; k++) {//100���ݺ��ϴ� �ݺ���
				if (strcmp(B[j], B[j + 1]) > 0) {//strcmp(B[j], B[j + 1])�� 0���� ū ����
					strcpy(tmp, B[j]);//tmp�� B[j]����
					strcpy(B[j], B[j + 1]);//B[j]�� B[j+1]����
					strcpy(B[j + 1], tmp);//B[j+1]�� tmp����
					k++;//k�� 1 ����
				}
				else
					break;//break
			}
		}
	}

	puts(B[0]);//B[0]���

}