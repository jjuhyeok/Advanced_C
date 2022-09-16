#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int N;//정수형 변수 N 선언
	scanf("%d", &N);//N에 정수 입력
	int* p = (int*)malloc(N * sizeof(int));// *p에  N * sizeof(int) 동적할당

	for (int i = 0; i < N; i++) {//N번 반복하는 반복문
		scanf("%d", &p[i]);//p[i]에 정수 입력
	}
	int D;//정수형 변수 D 선언
	scanf("%d", &D);//D에 정수 입력
	int* q = (int*)malloc(N * sizeof(int));//*q에  N * sizeof(int) 동적할당
	q = p;//q에 p연결
	q = (int*)realloc(q, (N - D) * sizeof(int));//q에 (N-D)*sizeof(int) 재할당
	for (int i = 0; i < N - D; i++) {//N-D만큼 반복하는 반복문
		printf("%d\n", q[i]);//q[i]출력
	}
	free(q);//q메모리 해제
	free(p);//p메모리 해제
}