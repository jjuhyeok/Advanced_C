#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	char ar[100] = { 0 };//ũ�Ⱑ 100�� ar
	char* par = ar;//������ par ���� �� ar�� ����
	for (par = ar; par < ar + 100; par++) {//100�� �ݺ��ϴ� �ݺ���
		scanf("%c", par);//par�� ���� �Է�
		if (*par == '#') {//*par�� #�� ����
			break;//Ż��
		}
	}
	int max = 0;//���� max ���� �� 0 ����
	int cnt = 0;//���� cnt ���� �� 0 ����
	for (par = ar; par < ar + 100; par++) {//100�� �ݺ��ϴ� �ݺ���
		if (*par >= 'a' && *par <= 'z') {//*par�� 'a'���� 'z' ������ ����
			printf("%c", *par);//���
			cnt++;//cnt 1 �� ����
		}
		else {

			if (cnt > max) {//cnt�� max���� Ŭ ����
				max = cnt;//max�� cnt ����

			}
			if (*(par - 1) >= 'a' && *(par - 1) <= 'z') {//*(par - 1)�� 'a'���� 'z' ������ ����
				printf("\n");//���� ���
			}
			cnt = 0;//cnt�� 0 ����
		}

		if (*par == '#') {//*par�� #�� ����
			break;//Ż��
		}
	}
	printf("%d", max);//max ���
}