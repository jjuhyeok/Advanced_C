#include <stdio.h>
#pragma warning(disable : 4996)

int passengerN(int n) {//passengeN�Լ�
	if (n >= 5) {//n�� 5�̻��� ����
		return 0;//0��ȯ
	}
	else {//n�� 5 �̸��� ����
		return -1;//-1 ��ȯ
	}
}


int rebooking(int* ar) {//rebooking �Լ�
	int* aar = ar;//������ aar ���� �� ar�� ����
	int* bar = ar;//������ bar ���� �� ar�� ����
	int* aaar = aar;//������ aaar���� �� aar�� ����
	int i = 0;//���� i ���� �� 0����
	int j = 0;//���� j ���� �� 0����
	int cnt = 0;//���� cnt ���� �� 0����
	int s = 0;//���� s ���� �� 0����
	int cng = 0;//���� cng ���� �� 0����
	int k = 0;//���� k ���� �� 0����
	for (i, aar; *aar >= 1 && *aar <= 21; aar++, i++) {//aar++�ϸ� *aar>=1�̸鼭 *aar<=21���� �ݺ��ϴ� �ݺ���
		j = 0;//j�� 0 ����
		cnt = 0;//cnt�� 0 ����
		for (j, bar; *bar >= 1 && *bar <= 21; bar++, j++) {//bar++�ϸ� *bar>=1�̸鼭 *bar<=21���� �ݺ��ϴ� �ݺ���
			if (*aar == *bar && i != j) {//*aar�� *bar�� ���� i�� j�� �ٸ� ����
				s = *aar;//s�� *aar ����
			}
		}

		k = 0;//k�� 0 ����
		for (k, aaar = ar; *aaar >= 1 && *aaar <= 21; aaar++, k++) {//aaar++�ϸ� *aaar>=1�̸鼭 *aaar<=21���� �ݺ��ϴ� �ݺ���
			if (s == *aaar) {//s�� *aaar�� ���� ����
				cnt = cnt + 1;//cnt 1�� ����
			}
			if (cnt >= 2 && s == *aaar) {//cnt�� 2�̻��̸鼭 s�� *aaar�� ���� ����
				cng = changeseat(ar);//cng�� changeseat(ar)����
				ar[k] = cng;//ar[k]�� cng ����
			}
		}
		bar = ar;//bar�� ar ����
		cnt = 0;//cnt�� 0 ����
		s = 0;//s�� 0 ����
	}
	ar = aaar;//ar�� aaar ����
}
int changeseat(int* ar) {//changeseat�Լ�
	int cnt = 1;//���� cnt ���� �� 1 ����
	int chn[21];//ũ�Ⱑ 21�� �迭 ����
	int* cr = ar;//������ cr ���� �� ar�� ����
	for (cr = ar; *cr >= 1 && *cr <= 21; cr++) {//cr++�ϸ� *cr>=1�̸鼭 *cr<=21���� �ݺ��ϴ� �ݺ���
		if (*cr == cnt) {//*cr�� cnt�� ����
			cnt = cnt + 1;//cnt 1 �� ����
			cr = ar;//cr�� ar ����

		}
	}

	return cnt;//cnt ��ȯ
}


int main() {
	int N;//���� N����
	scanf("%d", &N);//N�� ���� �Է�
	int ar[21];//ũ�Ⱑ 21�� �迭 ar ����
	int* par = ar;//������ par ���� �� ar�� ����

	for (par = ar; par < ar + N; par++) {//par++�ϸ� par<ar+N���� �ݺ��ϴ� �ݺ���
		scanf("%d", par);//par�� ���� �Է�
	}
	if (N >= 5) {//N�� 5 �̻��� ����
		printf("%d\n", passengerN(N));//���
		rebooking(ar);//rebooking �Լ� ȣ��
		for (par = ar; par < ar + N; par++) {//par++�ϸ� par<ar+N���� �ݺ��ϴ� �ݺ���
			printf("%d ", *par);//���
		}

	}
	else {
		printf("%d", passengerN(N));//���
	}
}