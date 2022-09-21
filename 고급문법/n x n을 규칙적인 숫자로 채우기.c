#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<math.h>
#pragma warning(disable:4996)

void ABC(int(*p)[20], int k1, int k2) {
	for (int i = 0; i < k1; i++) {//k1번 반복하는 반복문
		for (int j = 0; j < k2; j++) {//k2번 반복하는 반복문
			p[i][j] = i + j;//p[i][j]에 각 인덱스 값의 합을 대입
		}
	}
}

int main() {
	int N;//정수형 변수 N 선언
	scanf("%d", &N);//N에 정수 입력
	int arr[20][20];//이차원 배열 arr 선언
	for (int i = 0; i < N; i++) {//N번 반복하는 반복문
		for (int j = 0; j < N; j++) {//N번 반복하는 반복문
			arr[i][j] = 0;//배열을 0 으로 초기화
		}
	}
	ABC(arr, N, N);//ABC함수 호출
	for (int i = 0; i < N; i++) {//N번 반복하는 반복문
		for (int j = 0; j < N; j++) {//N번 반복하는 반복문
			printf(" %d", arr[i][j]);//arr[i][j]값 출력
		}
		printf("\n");//줄바꿈
	}
	return 0;
}