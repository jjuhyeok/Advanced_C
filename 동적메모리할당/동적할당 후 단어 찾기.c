#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int N;//정수형 변수 N 선언
	scanf("%d", &N);//N에 정수 입력
	getchar();//getchar
	char* p = (char*)malloc(N * sizeof(char));//*p 에 N * sizeof(char)크기 동적할당
	for (int i = 0; i < N; i++) {//N번반복하는 반복문
		scanf("%c", (p + i));//p+i에 문자 입력
	}
	int c = 0;//정수형 변수 c 선언 후 0대입
	for (int i = 0; i < N; i++) {//N번 반복하는 반복문
		if (*(p + i) == 'c') {//*(p + i)이 'c'인 조건
			if (*(p + i + 1) == 'a') {//*(p + i+1)이 'a'인 조건
				if (*(p + i + 2) == 't') {//*(p + i+2)이 't'인 조건
					c++;//c값 1 증가
				}
			}
		}
	}
	printf("%d", c);//c 출력
	free(p);//p메모리 해제

}