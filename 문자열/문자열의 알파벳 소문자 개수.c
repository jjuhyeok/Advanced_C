#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

char s_check(char* p, char* q) {
	int cnt = 0;//������ ���� cnt ���� �� 0���� �ʱ�ȭ
	for (p; p <= q; p++) {//p���� q���� p++�ϴ� �ݺ���
		if (*p >= 'a' && *p <= 'z') {//*p�� a~z�� ����
			cnt++;//cnt 1 ����
		}
	}
	return cnt;//cnt ��ȯ
}

int main() {
	int M;//������ ���� M����
	scanf("%d", &M);//M�� ���� �Է�
	int k1, k2;//������ ���� k1,k2����
	scanf("%d %d ", &k1, &k2);//k1, k2�� ���� �Է�
	char ch[10][200] = { '\0', };//ũ�Ⱑ 10,200�� ���߹迭 ch���� �� null�� �ʱ�ȭ
	for (int i = 0; i < M; i++) {//M�� �ݺ��ϴ� �ݺ���
		gets(ch[i]);//ch[i]�� �Է�
		if ((s_check(&ch[i][k1], &ch[i][k2])) != 0) {//cnt�� 0 �� �ƴ� ����
			if (k1 <= strlen(ch)) {//k1���� ch�� ���̰� ū ����
				printf("%d\n", s_check(&ch[i][k1], &ch[i][k2]));//s_check �Լ� ȣ�� �� ���
			}
		}
	}

}