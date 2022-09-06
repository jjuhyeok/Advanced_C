#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int N;//정수형 변수 N 선언
	scanf("%d", &N);//N에 정수 입력
	float* p;//실수형 포인터 *p 선언
	p = (float*)malloc(N * sizeof(float));//동적할당 후 p에 연결
	float s = -999;//실수형 변수 s 선언 후 -999으로 초기화
	if (N == 0) {
		s = 0;
	}
	for (int i = 0; i < N; i++) {//N번 반복하는 반복문
		scanf("%f", p + i);//p+i에 실수 입력
	}
	for (int i = 0; i < N; i++) {//N번 반복하는 반복문
		if (*(p + i) > s) {//s보다 *(p+i)값이 큰 조건
			s = *(p + i);//s에 *(p+i)값 대입
		}//큰 수 찾는 반복문
	}
	printf("%.2lf", s);//제일 큰 수 출력
	free(p);//메모리 해제
}