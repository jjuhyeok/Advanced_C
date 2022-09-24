#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#define ABS(a)((a)>=0? (a):-(a))
#define MAX(a,b) ((a)>=0? (a):-(a))>((b)>=0? (b):-(b))?(a):(b)

void main() {
	int s[6];//크기가 6인 정수형 배열 s 선언
	for (int i = 0; i < 6; i++) {//6번 반복하는 반복문
		scanf("%d", &s[i]);//정수 입력
	}

	for (int i = 0; i < 6; i++) {//6번 반복하는 반복문
		for (int j = 0; j < 5; j++) {//5번 반복하는 반복문
			s[j] = MAX(s[j], s[j + 1]);//절대값이 큰 수를 s[j]에 대입
		}
	}

	printf("\n%d %d", s[0], ABS(s[0]));//출력
}