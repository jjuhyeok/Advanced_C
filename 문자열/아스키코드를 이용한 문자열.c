#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
void main() {
	char A[21] = { '\0', };//ũ�Ⱑ 21�� �迭 A ���� �� null�� �ʱ�ȭ
	int N, cnt = 0;//������ ���� N, cnt ���� cnt 0���� �ʱ�ȭ
	scanf("%s", A);//A�� ���ڿ� �Է�
	scanf("%d", &N);//N�� ���� �Է�
	char n[3] = { '\0', };//ũ�Ⱑ 3�� �迭 n ���� �� null�� �ʱ�ȭ

	cnt = strlen(A);//���ڿ� A�� ���̸� cnt�� ����
	for (int i = 0; i < cnt; i++) {//cnt��ŭ �ݺ��ϴ� �ݺ���
		if ('A' <= *(A + i) && *(A + i) <= 'Z') {//*(A+i)�� A~Z������ ����
			printf("%c", *(A + i) + N);//*(A + i) + N ���
		}
		else if ('a' <= *(A + i) && *(A + i) <= 'z') {//*(A+i)�� a~z������ ����
			printf("%c", *(A + i) - N);//*(A + i) - N ���
		}
		else if ('0' <= *(A + i) && *(A + i) <= '9') {//*(A+i)�� 0~9�� ����
			if ('0' <= *(A + i + 1) && *(A + i + 1) <= '9') {// *(A + i + 1)�� 0~9 �� ����
				n[0] = *(A + i);//n[0]�� *(A + i) ����
				n[1] = *(A + i + 1);//n[0]�� *(A + i + 1) ����
				printf("%c", 'A' + atoi(n) - 1);//���� ���
				for (int j = 0; j < N - 1; j++) {//N-1��ŭ �ݺ��ϴ� �ݺ���
					printf("%c", 'A' + atoi(n) - 1);//���� ���
				}
				i++;//i�� 1 ����
			}
			else {// *(A + i + 1)�� 0~9�� �ƴ� ���� 
				for (int j = 0; j < N; j++) {//N��ŭ �ݺ��ϴ� �ݺ���
					printf("%c", 'A' + atoi(A + i) - 1);//���� ���
				}
			}
		}
		else {//*(A+i)�� �빮��,�ҹ���,���ڵ� �ƴ� ����
			printf(" ");//���� ���
		}
	}

}