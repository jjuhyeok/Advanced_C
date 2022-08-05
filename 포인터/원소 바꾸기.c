#include <stdio.h>
#pragma warning(disable : 4996)

void swap(int* s1, int* s2) {
	int tmp = *s1;//tmp에 *s1대입
	*s1 = *s2;//*s1에 *s2대입
	*s2 = tmp;//*s2에 tmp대입
}

int main() {
	int N;//변수 N선언
	int ar[50];//크기 50인 배열 ar선언
	scanf("%d", &N);//N에 정수 입력
	for (int i = 0; i < N; i++) {//N만큼 반복하는 반복문
		scanf("%d", &ar[i]);//배열ar[i]에 정수 입력
	}
	int a, b;//a,b선언
	scanf("%d %d", &a, &b);//a,b에 정수 입력

	swap(&ar[a], &ar[b]);//swap함수 호출

	for (int i = 0; i < N; i++) {//N만큼 반복하는 반복문
		printf(" %d", ar[i]);//출력
	}
}