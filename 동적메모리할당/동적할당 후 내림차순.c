#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable: 4996)
int main() {
	int N;//정수형 변수 N선언
	scanf("%d", &N);//N에 정수 입력
	int* p = (int*)malloc(N * sizeof(int));//*p에 N * sizeof(int) 크기 동적할당

	for (int i = 0; i < N; i++) {//N번 반복하는 반복문
		scanf("%d", p + i);//p+i에 정수 입력
	}
	for (int i = 0; i < N - 1; i++) {//N-1번 반복하는 반복문
		if (*(p + i) > *(p + i + 1)) {//*(p + i)값이 *(p + i+1)보다 큰 조건
			int tmp = *(p + i);//tmp에  *(p + i)대입
			*(p + i) = *(p + i + 1);// *(p + i)에  *(p + i+1)대입
			*(p + i + 1) = tmp;// *(p + i+1)에 tmp 대입
		}//내림차순하고 제일 큰 수가 뒤로 가기
	}
	for (int i = 0; i < N; i++) {//N번 반복하는 반복문
		printf("%d\n", *(p + i));//출력
	}
	free(p);//p메모리 해제
}