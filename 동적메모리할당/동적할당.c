#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int N;//정수형 변수 N 선언
	scanf("%d", &N);//N에 정수 입력
	int* p = NULL;//정수형 포인터 *p 선언 후 NULL값 대입
	p = (int*)malloc(N * sizeof(int));//동적할당 후 p에 연결
	int s = 0;//정수형 변수 s 선언
	for (int i = 0; i < N; i++) {//N번 반복하는 반복문
		scanf("%d", p + i);//p+i 주소에 정수 입력
	}
	for (int i = 0; i < N; i++) {//N번 반복하는 반복문
		s = s + *(p + i);//s에 s + *(p+i)대입
	}//합 구하는 반복문
	printf("%d", s);//합 출력
	free(p);//메모리해제
}