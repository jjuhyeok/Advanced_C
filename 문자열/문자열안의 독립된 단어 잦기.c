#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	char a[100] = { '\0', };//ũ�Ⱑ 100�� �迭 a ���� �� null�� �ʱ�ȭ
	char b[100] = { '\0', };//ũ�Ⱑ 100�� �迭 b ���� �� null�� �ʱ�ȭ
	gets(a);//a�� �Է�
	gets(b);//b�� �Է�

	int na = strlen(a);//������ ���� na ���� �� a�� ���� ����
	int nb = strlen(b);//������ ���� nb ���� �� b�� ���� ����
	int cnt = 0;//������ ���� cnt ���� �� 0����
	int cntf = 0;//������ ���� cntf ���� �� 0����
	for (int i = 0; i < na; i++) {//na��ŭ �ݺ��ϴ� �ݺ���
		cnt = 0;//cnt�� 0 ����
		if (a[i] == b[0]) {//a[i]�� b[0]�� ���� ����
			for (int j = 0; j < nb; i++, j++) {//nb��ŭ �ݺ��ϰ� i,j 1�� �����ϴ� �ݺ���
				if (a[i] == b[j]) {//a[i]�� b[j]�� ���� ����
					cnt++;//cnt 1�� ����
				}
			}
			if ((cnt == nb) && (a[i] == '.' || a[i] == ' ') && (a[i - nb - 1] == '.' || a[i - nb - 1] == ' ') || ((cnt == nb) && (a[i] == '\0') && (a[i - nb - 1] == '.' || a[i - nb - 1] == ' ')) || ((cnt == nb) && (i - nb == 0) && ((a[i] == '.') || (a[i] == ' ') || (a[i] = '\0')))) {//�ܾ ��ġ�ϴ� ����
				cntf++;//cntf 1�� ����

			}


		}
	}
	printf("%d", cntf);//cntf ���
}