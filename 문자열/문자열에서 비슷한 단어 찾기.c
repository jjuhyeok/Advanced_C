#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	char a[1001] = { '\0', };//ũ�Ⱑ 1001�� �迭 a ���� �� null�� �ʱ�ȭ
	char* pa[100] = { '\0', };//ũ�Ⱑ 100�� ������ *pa ���� �� null�� �ʱ�ȭ
	int k;//������ ���� k ����
	gets(a);//a�� �Է�
	scanf("%d", &k);//k�� ���� �Է�
	int n = strlen(a);//������ ���� n ���� �� n�� ���� ����
	pa[0] = a;// ���ڿ� a �� ù��° �ڸ��� �ּҸ� pa �迭 ù��°�� ����
	int cnt2 = 1;//������ ���� cnt2 ���� �� 1 ����
	for (int i = 0; i < n; i++) {//n�� �ݺ��ϴ� �ݺ���
		if (a[i] == ' ') {//a[i]�� ������ ����
			a[i] = '\0';// ������ ������ �����ڸ��� null ���� �����Ѵ�
			pa[cnt2++] = a + i + 1; // ���� ���� ���� �ڸ��� �ּҸ� pa[cnt2++]�� ���ʴ�� ����
		}
	}

	char* tmp = { '\0', };//������ *tmp ���� �� null�� �ʱ�ȭ

	for (int i = 0; i < cnt2; i++) {//cnt2�� �ݺ��ϴ� �ݺ���
		for (int j = 0; j < cnt2 - 1; j++) {//cnt2 - 1�� �ݺ��ϴ� �ݺ���
			if (strlen(pa[j]) < strlen(pa[j + 1])) {//pa[j]���̺��� pa[j+1]�� ���̰� �� ����
				tmp = pa[j];//tmp�� pa[j] ����
				pa[j] = pa[j + 1];//pa[j]�� pa[j+1] ����
				pa[j + 1] = tmp;//pa[j+1]�� tmp ����
			}
		}
	} //�ܾ��� ���̰� �� �� ���� �����ϴ� ���߹ݺ���
	for (int i = 0; i < cnt2; i++) {//cnt2�� �ݺ��ϴ� �ݺ���
		for (int j = 0; j < cnt2 - 1; j++) {//cnt2 - 1�� �ݺ��ϴ� �ݺ���
			if (strlen(pa[j]) == strlen(pa[j + 1])) {//pa[j]���̿� pa[j+1]�� ���̰� ���� ����
				if (strcmp(pa[j], pa[j + 1]) > 0) {//pa[j]�� pa[j+1]���� ���������� ���� ����
					tmp = pa[j];//tmp�� pa[j] ����
					pa[j] = pa[j + 1];//pa[j]�� pa[j+1] ����
					pa[j + 1] = tmp;//pa[j+1]�� tmp ����
				}
			}
		}
	}//���̰� ���� �ܾ�鳢�� ���������� ����

	int k_n = strlen(pa[k - 1]);//������ ���� k_n���� �� pa[k-1]�� ���� ����
	printf("%s\n", pa[k - 1]);//pa[k-1] ���ڿ� ���
	for (int i = 0; i < cnt2; i++) {//cnt2�� �ݺ��ϴ� �ݺ���
		int i_n = strlen(pa[i]);//������ ���� i_n���� �� pa[i]�� ���� ����
		if (i != k - 1) {//k-1�� i�� ���� �ٸ� ����
			if (-1 <= k_n - i_n && k_n - i_n <= 1) {// k_n�� i_n�� ���̰� 1 ������ ����
				char AtoZ[27] = { '\0', };//ũ�Ⱑ 27�� �迭 AtoZ���� �� null�� �ʱ�ȭ
				int  atz_n[27] = { 0 };//ũ�Ⱑ 27�� �迭 atz_n���� �� 0���� �ʱ�ȭ
				for (int i = 0; i < 26; i++) {//26�� �ݺ��ϴ� �ݺ���
					AtoZ[i] = 'a' + i;//AtoZ[i]�� 'a' + i�� ����
				}

				for (int j = 0; j < k_n; j++) {//k_n��ŭ �ݺ��ϴ� �ݺ���
					for (int t = 0; t < 26; t++) {//26�� �ݺ��ϴ� �ݺ���
						if (pa[k - 1][j] == AtoZ[t]) { //pa[k - 1][j]�� AtoZ[t]�� ���� ���ĺ��� ����
							atz_n[t]++;// atz_n�� �� 1 ����
						}
					}
				}

				for (int j = 0; j < i_n; j++) {//i_n��ŭ �ݺ��ϴ� �ݺ���
					for (int t = 0; t < 26; t++) {//26�� �ݺ��ϴ� �ݺ���
						if (pa[i][j] == AtoZ[t]) { //pa[i][j]�� AtoZ[t]�� ���� ���ĺ��� ����
							atz_n[t]--;// atz_n�� �� 1 ����
						}
					}
				}


				int sum = 0;//������ ���� sum ���� �� 0���� �ʱ�ȭ
				for (int i = 0; i < 26; i++) {//26�� �ݺ��ϴ� �ݺ���
					if (atz_n[i] < 0)//atz_n[i]�� ������ ����
						sum += (atz_n[i]) * (-1);//sum�� atz_n[i]* (-1) ���ϱ�
					else
						sum += atz_n[i];//sum�� atz_n[i] ���ϱ�
				}
				if (sum <= 2)//sum�� ���� 2���� ���� ����
					printf("%s\n", pa[i]);//�ܾ� ���
			}
		}
	}
}