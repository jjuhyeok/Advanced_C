#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int N;//정수형 변수 N 선언
	scanf("%d", &N);//N에 정수 입력
	getchar();//getchar
	char* p = { '\0' };//문자형 포인터 *p 선언
	p = (char*)malloc(N * sizeof(char));//동적할당을 해서 포인터 p에 연결
	for (int i = 0; i < N; i++) {//N번 반복하는 반복문
		scanf("%c", (p + i));//p+i주소에 문자 입력
	}
	getchar();//getchar
	char a, b;//문자형 변수 a,b 선언
	scanf("%c %c", &a, &b);//a,b에 문자 입력
	int sa = 0;//정수형 변수 sa 선언 후 0으로 초기화
	int sb = 0;//정수형 변수 sb 선언 후 0으로 초기화
	for (int i = 0; i < N; i++) {//N번 반복하는 반복문
		if (*(p + i) == a) {//*(p+i)와 a가 같을 조건
			sa++;//sa 값 1 증가
		}
	}
	for (int i = 0; i < N; i++) {//N번 반복하는 반복문
		if (*(p + i) == b) {//*(p+i)와 b가 같을 조건
			sb++;//sb값 1 증가
		}
	}
	printf("%d %d", sa, sb);//두 문자가 문자열에 몇 번 포함되어있는지 출력
	free(p);//메모리 해제
}