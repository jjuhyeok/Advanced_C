#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	char ar[1000];//ũ�Ⱑ 1000�� ������ �迭 ar����
	char* par = ar;//������ par�� ar ����
	int cnt = 0;//���� cnt ���� �� 0 ���� 
	char l;//
	for (par = ar;; par++) {//par = ar���� par++ �Ǵ� �ݺ���
		scanf("%c", par);//par�� ������ ����
		if (*par == '.' || *par == '?' || *par == '!') {//*par�� . ? ! �� ����
			l = *par;//l�� *par ����
			break;//Ż��
		}
		cnt = cnt + 1;//cnt 1�� ����
	}

	int ccnt = 0;//���� ccnt ���� �� 0 ����
	par--;//par--
	for (par; cnt >= 0; par--, cnt--) {//�ݺ���

		if (*par == ' ' || cnt == 0) {//*par�� ' '�̰ų� cnt�� 0�� ����
			for (int i = 1; i <= ccnt; i++) {//i�� 1���� 1�� �����ϸ� i<=ccnt���� �ݺ��ϴ� �ݺ���
				printf("%c", *(par + i));//*(par + i)���

			}
			printf(" ");//���� ���
			ccnt = 0;//ccnt 0 ����
		}
		else
			ccnt = ccnt + 1;//ccnt 1�� ����
	}
	printf("%c", l);//l���
}