#include <stdio.h>
#pragma warning(disable:4996)
int check(char* ps) {//check �Լ�
	int cnt1 = strlen(ps), cnt2 = 0;//���� cnt1 ���� �� ps�� ���� ����, cnt2  ���� �� 0 ����

	for (int i = 0; i < cnt1 / 2; i++) {//cnt/2 ��ŭ �ݺ��ϴ� �ݺ���
		if (*(ps + i) == *(ps + cnt1 - i - 1))//*(ps + i) == *(ps + cnt1 - i - 1)���� ����
			cnt2++;//cnt2 1�� ����
	}
	if (cnt1 / 2 == cnt2)// cnt1/2 �� cnt�� ���� ����
		return 1;//1 ��ȯ
	else//cnt1/2 �� cnt�� �ٸ� ����
		return 0;//0 ��ȯ
}
void main() {
	char s[30] = { '\0', };//ũ�Ⱑ 30�� ���ڿ� �迭 ����
	char* ps = s;//������ ps ���� �� s�� ����
	scanf("%s", s);//���ڿ� �Է�

	printf("%d %d", strlen(s), check(ps));//s�� ���̿� ps �Լ� ȣ�� �� ���
}