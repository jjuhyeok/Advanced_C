#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	int ara[11];//ũ�� 11�� �迭 ara����
	int arb[11];//ũ�� 11�� �迭 arb����

	int* pa = ara;//������ pa ���� �� ara�� ����
	int* pb = arb;//������ pb ���� �� arb�� ����
	int ca = 0;//���� ca ���� �� 0 ����
	int cb = 0;//���� cb ���� �� 0 ����
	for (pa = ara; pa < ara + 11; pa++) {//11�� �ݺ��ϴ� �ݺ���
		scanf("%d", pa);//pa�� ���� �Է�
		ca = ca + 1;//ca 1�� ����
		if (*pa == 0) {//*pa�� 0�� ����
			break;//Ż��
		}
	}
	for (pb = arb; pb < arb + 11; pb++) {//11�� �ݺ��ϴ� �ݺ���
		scanf("%d", pb);//pb�� ���� �Է�
		cb = cb + 1;//cb 1�� ����
		if (*pb == 0) {//*pb�� 0�� ����
			break;//Ż��
		}
	}
	int tmp1 = 0;//���� tmp1 ���� �� 0 ����
	for (int i = 0; i < ca; i++) {//i�� 0���� i++�ϸ� i<ca���� �ݺ��ϴ� �ݺ���
		for (int j = i + 1; j < ca; j++) {//j = i+1���� j++�ϸ� j<ca���� �ݺ��ϴ� �ݺ���
			if (*(ara + i) <= *(ara + j)) {//*(ara+i)���� *(ara+j)�� ���ų� Ŭ ����
				tmp1 = *(ara + i);//tmp1�� *(ara+i)����
				*(ara + i) = *(ara + j);//*(ara+i)�� *(ara+j)����
				*(ara + j) = tmp1;//*(ara+j)�� tmp1 ����
			}
		}
	}

	int tmp2 = 0;//���� tmp2 ���� �� 0 ����
	for (int i = 0; i < cb; i++) {//i�� 0���� i++�ϸ� i<cb���� �ݺ��ϴ� �ݺ���
		for (int j = i + 1; j < cb; j++) {//j = i+1���� j++�ϸ� j<cb���� �ݺ��ϴ� �ݺ���
			if (*(arb + i) <= *(arb + j)) {//*(arb+i)���� *(arb+j)�� ���ų� Ŭ ����
				tmp2 = *(arb + i); // tmp2�� * (arb + i)����
				*(arb + i) = *(arb + j);//*(arb+i)�� *(arb+j)����
				*(arb + j) = tmp2;//*(arb+j)�� tmp1 ����
			}
		}
	}

	pa = ara;//pa�� ara ����
	pb = arb;//pb�� arb ����
	ca--;//ca 1����
	cb--;//cb 1����
	for (int j = 0; j < ca; j++) {//j�� 0���� j++�ϸ� j<ca�� �ݺ���
		if (*pa > *pb) {//*pa�� *pb���� ū ����
			if (*pa == 0) {//*pa�� 0�� ����
				pa++;//pa 1�� ����
				j--;//j 1�� ����
			}
			else {
				printf("%d ", *pa);//*pa���
				pa++;//pa 1�� ����
			}
		}
		else if (*pa < *pb) {//*pa�� *pb���� ���� ����
			if (*pb == 0) {//*pb�� 0�� ����
				pa++;//pa 1�� ����
				j--;//j 1�� ����
			}
			else {
				printf("%d ", *pb);//*pb ���
				pb++;//pb 1�� ����
			}
		}
		else if (*pa == *pb) {
			if (*pa == 0) {
				pa++;//pa 1�� ����
				pb++;//pb 1�� ����
				j--;//j 1�� ����
			}

			else {
				printf("%d ", *pa);//*pa���
				j++;//j 1�� ����
				if (j < cb) {//j�� cb���� ���� ����
					printf("%d ", *pb);//*pb ���
				}
				pa++;//pa 1�� ����
				pb++;//pb 1�� ����
			}
		}
	}
	pa = ara;//pa�� ara ����
	pb = arb;//pb�� arb ����

	int tmp3 = 0;//���� tmp3 ���� �� 0 ����
	cb++;//cb 1�� ����
	ca++;//ca 1�� ����
	for (int i = 0; i < ca; i++) {//i�� 0���� ca���� 1�� �����ϴ� �ݺ���
		for (int j = i + 1; j < ca; j++) {//j�� i+1���� j<ca���� 1�� �����ϴ� �ݺ���
			if (*(ara + i) >= *(ara + j)) {//*(ara+i)�� *(ara+j)���� ū ����
				tmp3 = *(ara + i);//tmp3�� *(ara+i)�� ����
				*(ara + i) = *(ara + j);// *(ara+i)��  *(ara+j)�� ����
				*(ara + j) = tmp3;// *(ara+j)�� tmp3
			}
		}
	}

	int tmp4 = 0;//���� tmp4 ���� �� 0 ����
	for (int i = 0; i < cb; i++) {//i�� 0���� cb���� 1�� �����ϴ� �ݺ���
		for (int j = i + 1; j < cb; j++) {//j�� i+1���� j<cb���� 1�� �����ϴ� �ݺ���
			if (*(arb + i) >= *(arb + j)) {//*(arb+i)�� *(arb+j)���� ū ����
				tmp4 = *(arb + i);//tmp4�� *(arb+i)�� ����
				*(arb + i) = *(arb + j);// *(arb+i)��  *(arb+j)�� ����
				*(arb + j) = tmp4;// *(arb+j)�� tmp4
			}
		}
	}

	pa = ara;//pa�� ara ����
	pb = arb;//pb�� arb ����
	ca--;//ca 1�� ����
	cb--;//cb 1�� ����
	printf("\n");//���� ���
	for (int j = 0; j < cb; j++) {//j�� 0���� j<cb���� 1�� �����ϴ� �ݺ���
		if (*pa < *pb) {//*pa�� *pb���� ���� ����
			if (*pa == 0) {//*pa�� 0�� ����
				pa++;//pa 1�� ����
				j--;//j 1�� ����
			}
			else {
				printf("%d ", *pa);//*pa ���
				pa++;//pa 1�� ����
			}
		}
		else if (*pa > *pb) {//*pa�� *pb���� ū ����
			if (*pb == 0) {//*pb �� 0�� ����
				pb++;//pb 1�� ����
				j--;//j 1�� ����
			}
			else {
				printf("%d ", *pb);//*pb ���
				pb++;//pb 1�� ����
			}
		}
		else if (*pa == *pb) {//*pb�� *pb�� ����
			if (*pa == 0) {//*pb�� 0�� ����
				pa++;//pa 1�� ����
				pb++;//pb 1�� ����
				j--;//j 1�� ����
			}

			else {
				printf("%d ", *pa);//*pa ���
				j++;//j 1�� ����
				if (j < cb) {//j�� cb���� ���� ����
					printf("%d ", *pb);//*pb���
				}
				pa++;//pa 1�� ����
				pb++;//pb 1�� ����

			}
		}
	}
}