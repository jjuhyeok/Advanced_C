#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

struct score {
	char name[10];//�̸�
	int sc;//����
};
struct score* select_min(struct score* a) {
	int cnt = 0;//������ ���� cnt���� �� 0 ����
	for (int k = 0; k < 5; k++) {//5�� �ݺ��ϴ� �ݺ���
		for (int j = 0; j < 5; j++) {//5�� �ݺ��ϴ� �ݺ���
			if ((*(a + k)).sc < ((*(a + j)).sc)) {//(*(a + k)).sc�� ((*(a + j)).sc���� ���� ����
				cnt++;//cnt 1����
			}
		}
		if (cnt == 4) {//cnt�� 4�� ����
			return a + k;// a + k ��ȯ
		}
		cnt = 0;//cnt 0 ����
	}
}
int main() {
	struct score st[5], * p = st;//ũ�Ⱑ 5�� ����ü st ���� �� ������ *p�� st ����
	int i = 0;//������ ���� i ���� �� 0 ����
	for (i, p; i < 5; i++, p++) {//5�� �ݺ��ϴ� �ݺ���
		scanf("%s %d", &p->name, &p->sc);//�̸��� ���� �Է�
	}
	p = st;//������ p�� st �ٽ� ����
	i = 0;//i�� 0 ����

	printf("%s %d", (*select_min(p)).name, (*select_min(p)).sc);//������ �������� �л��� �̸�, ���� ���
}