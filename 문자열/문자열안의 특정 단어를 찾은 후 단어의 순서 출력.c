#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
void main() {
	int i = 0, j = 0, k = 0, cnt = 0, r = 0;//������ ���� i,j,k,cnt,r ���� �� 0���� �ʱ�ȭ
	char A[100] = { '\0', };//ũ�Ⱑ 100�� �迭 A ���� �� null�� �ʱ�ȭ
	char B[100] = { '\0', };//ũ�Ⱑ 100�� �迭 B ���� �� null�� �ʱ�ȭ

	gets(A);//A�� ���ڿ� �Է�
	gets(B);//B�� ���ڿ� �Է�
	int A_n = strlen(A);//���ڿ� A�� ���̸� ������ ���� A_n�� ����
	int B_n = strlen(B);//���ڿ� B�� ���̸� ������ ���� B_n�� ����

	for (i = 0; i < A_n; i++) {//A_n����ŭ �ݺ��ϴ� �ݺ���
		k = i;//k�� i ����
		cnt = 0;//cnt�� 0 ����

		for (j = 0; j < B_n; j++) {//B_n����ŭ �ݺ��ϴ� �ݺ���

			if (A[i] == B[j]) {//A[i]�� B[j] ���ĺ��� ���� ���
				cnt++;//cnt�� 1 ����
				if (cnt == B_n) {//cnt�� B_n�� ���� ����
					r++;//r�� 1 ����
					break;//break
				}
				i++;//i�� 1 ����
			}
			else {//A[i]�� B[j] ���ĺ��� �ٸ� ���
				cnt = 0;//cnt 0 ����
				i = k;//i�� k ����
				j = 0;//j�� 0 ����
				break;//break
			}
		}
	}
	printf("%d", r);//r�� ���

}