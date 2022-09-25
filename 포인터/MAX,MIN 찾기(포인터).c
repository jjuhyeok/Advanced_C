#include <stdio.h>
#pragma warning(disable : 4996)
int MAX(int* ar) {//MAx함수
	int* p;//포인터 p 선언
	int max = *ar;//정수 max 선언 후 *ar 연결
	for (p = ar; p < ar + 100; p++) {//100번 반복하는 반복문
		if (*p >= max)//*p가 max보다 크거나 같을 경우
			max = *p;//max에 *p대입
	}
	return max;//max 반환
}
int MIN(int* ar) {//MIN 함수
	int* p;//포인터 p 선언
	int min = *ar;//정수 min 선언 후 *ar 연결
	for (p = ar; p < ar + 100; p++) {//100번 반복하는 반복문
		if (*p != 0 && *p <= min)//*p가 0이 아니면서 *p가 max보다 작거나 같을 경우
			min = *p;//min에 *p 대입
	}
	return min;//min 반환
}

int main() {
	int N, i;//정수 N,i 선언
	scanf("%d", &N);//N에 정수 입력
	int cnt[2] = { 0 };//크기가 2인 배열 cnt 선언 후 0으로 초기화
	int* p, j, d, m;//포인터 p, 정수형 j,d,m선언

	for (i = 0; i < N; i++) {//i가 0에서 i++하며 i<N 까지 반복하는 반복문
		int ar[100] = { 0 };//크기가 100인 배열 ar선언 후 0으로 초기화
		for (p = ar; p < ar + 100; p++) {//100번 반복하는 반복문
			scanf("%d", p);//p에 정수 입력
			if (*p == 0)//*p가 0인 조건
				break;//탈출
		}
		cnt[0] = MAX(ar);//cnt[0]에 MAX(ar)대입
		cnt[1] = MIN(ar);//cnt[1]에 MIN(ar)대입

		printf("%d %d\n", cnt[0], cnt[1]);//출력
	}

	return 0;
}