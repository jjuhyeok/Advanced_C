#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	int ara[11];//크기 11인 배열 ara선언
	int arb[11];//크기 11인 배열 arb선언

	int* pa = ara;//포인터 pa 선언 후 ara과 연결
	int* pb = arb;//포인터 pb 선언 후 arb과 연결
	int ca = 0;//정수 ca 선언 후 0 대입
	int cb = 0;//정수 cb 선언 후 0 대입
	for (pa = ara; pa < ara + 11; pa++) {//11번 반복하는 반복문
		scanf("%d", pa);//pa에 정수 입력
		ca = ca + 1;//ca 1씩 증가
		if (*pa == 0) {//*pa가 0인 조건
			break;//탈출
		}
	}
	for (pb = arb; pb < arb + 11; pb++) {//11번 반복하는 반복문
		scanf("%d", pb);//pb에 정수 입력
		cb = cb + 1;//cb 1씩 증가
		if (*pb == 0) {//*pb가 0인 조건
			break;//탈출
		}
	}
	int tmp1 = 0;//정수 tmp1 선언 후 0 대입
	for (int i = 0; i < ca; i++) {//i가 0에서 i++하며 i<ca까지 반복하는 반복문
		for (int j = i + 1; j < ca; j++) {//j = i+1에서 j++하며 j<ca까지 반복하는 반복문
			if (*(ara + i) <= *(ara + j)) {//*(ara+i)보다 *(ara+j)가 같거나 클 조건
				tmp1 = *(ara + i);//tmp1에 *(ara+i)대입
				*(ara + i) = *(ara + j);//*(ara+i)에 *(ara+j)대입
				*(ara + j) = tmp1;//*(ara+j)에 tmp1 대입
			}
		}
	}

	int tmp2 = 0;//정수 tmp2 선언 후 0 대입
	for (int i = 0; i < cb; i++) {//i가 0에서 i++하며 i<cb까지 반복하는 반복문
		for (int j = i + 1; j < cb; j++) {//j = i+1에서 j++하며 j<cb까지 반복하는 반복문
			if (*(arb + i) <= *(arb + j)) {//*(arb+i)보다 *(arb+j)가 같거나 클 조건
				tmp2 = *(arb + i); // tmp2에 * (arb + i)대입
				*(arb + i) = *(arb + j);//*(arb+i)에 *(arb+j)대입
				*(arb + j) = tmp2;//*(arb+j)에 tmp1 대입
			}
		}
	}

	pa = ara;//pa에 ara 대입
	pb = arb;//pb에 arb 대입
	ca--;//ca 1감소
	cb--;//cb 1감소
	for (int j = 0; j < ca; j++) {//j가 0부터 j++하며 j<ca인 반복문
		if (*pa > *pb) {//*pa가 *pb보다 큰 조건
			if (*pa == 0) {//*pa가 0인 조건
				pa++;//pa 1씩 증가
				j--;//j 1씩 감소
			}
			else {
				printf("%d ", *pa);//*pa출력
				pa++;//pa 1씩 증가
			}
		}
		else if (*pa < *pb) {//*pa가 *pb보다 작은 조건
			if (*pb == 0) {//*pb가 0인 조건
				pa++;//pa 1씩 증가
				j--;//j 1씩 감소
			}
			else {
				printf("%d ", *pb);//*pb 출력
				pb++;//pb 1씩 증가
			}
		}
		else if (*pa == *pb) {
			if (*pa == 0) {
				pa++;//pa 1씩 증가
				pb++;//pb 1씩 증가
				j--;//j 1씩 감소
			}

			else {
				printf("%d ", *pa);//*pa출력
				j++;//j 1씩 증가
				if (j < cb) {//j가 cb보다 작은 조건
					printf("%d ", *pb);//*pb 출력
				}
				pa++;//pa 1씩 증가
				pb++;//pb 1씩 증가
			}
		}
	}
	pa = ara;//pa에 ara 대입
	pb = arb;//pb에 arb 대입

	int tmp3 = 0;//정수 tmp3 선언 후 0 대입
	cb++;//cb 1씩 증가
	ca++;//ca 1씩 증가
	for (int i = 0; i < ca; i++) {//i가 0에서 ca까지 1씩 증가하는 반복문
		for (int j = i + 1; j < ca; j++) {//j가 i+1부터 j<ca까지 1씩 증가하는 반복문
			if (*(ara + i) >= *(ara + j)) {//*(ara+i)가 *(ara+j)보다 큰 조건
				tmp3 = *(ara + i);//tmp3에 *(ara+i)값 대입
				*(ara + i) = *(ara + j);// *(ara+i)에  *(ara+j)값 대입
				*(ara + j) = tmp3;// *(ara+j)에 tmp3
			}
		}
	}

	int tmp4 = 0;//정수 tmp4 선언 후 0 대입
	for (int i = 0; i < cb; i++) {//i가 0에서 cb까지 1씩 증가하는 반복문
		for (int j = i + 1; j < cb; j++) {//j가 i+1부터 j<cb까지 1씩 증가하는 반복문
			if (*(arb + i) >= *(arb + j)) {//*(arb+i)가 *(arb+j)보다 큰 조건
				tmp4 = *(arb + i);//tmp4에 *(arb+i)값 대입
				*(arb + i) = *(arb + j);// *(arb+i)에  *(arb+j)값 대입
				*(arb + j) = tmp4;// *(arb+j)에 tmp4
			}
		}
	}

	pa = ara;//pa에 ara 대입
	pb = arb;//pb에 arb 대입
	ca--;//ca 1씩 감소
	cb--;//cb 1씩 감소
	printf("\n");//공백 출력
	for (int j = 0; j < cb; j++) {//j가 0에서 j<cb까지 1씩 증가하는 반복문
		if (*pa < *pb) {//*pa가 *pb보다 작은 조건
			if (*pa == 0) {//*pa가 0인 조건
				pa++;//pa 1씩 증가
				j--;//j 1씩 감소
			}
			else {
				printf("%d ", *pa);//*pa 출력
				pa++;//pa 1씩 증가
			}
		}
		else if (*pa > *pb) {//*pa가 *pb보다 큰 조건
			if (*pb == 0) {//*pb 가 0인 조건
				pb++;//pb 1씩 증가
				j--;//j 1씩 감소
			}
			else {
				printf("%d ", *pb);//*pb 출력
				pb++;//pb 1씩 증가
			}
		}
		else if (*pa == *pb) {//*pb랑 *pb인 조건
			if (*pa == 0) {//*pb가 0인 조건
				pa++;//pa 1씩 증가
				pb++;//pb 1씩 증가
				j--;//j 1씩 감소
			}

			else {
				printf("%d ", *pa);//*pa 출력
				j++;//j 1씩 증가
				if (j < cb) {//j가 cb보다 작은 조건
					printf("%d ", *pb);//*pb출력
				}
				pa++;//pa 1씩 증가
				pb++;//pb 1씩 증가

			}
		}
	}
}