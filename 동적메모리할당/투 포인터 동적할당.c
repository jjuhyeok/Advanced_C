#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable: 4996)


int main() {
	int r, c;//정수형 변수 r,c선언
	scanf("%d%d", &r, &c);//r,c에 정수 입력

	char** p = (char**)malloc(c * sizeof(char*));//c * sizeof(char*)크기 동적할당


	for (int i = 0; i < c; i++) {//반복문
		p[i] = (char*)malloc(r * sizeof(char));//r * sizeof(char) 크기 동적할당
	}

	char k, a = 'a';// k, a에 'a' 대입

	for (int i = 0; i < c; i++) {//c번반복하는 반복문
		for (int j = 0; j < r; j++) {//r번반복하는 반복문
			k = a++;//k에 a대입 후 a값 1증가
			p[i][j] = k;//p[i][j]에 k 대입
			if (k == 'z') {//k가 z인  조건
				a = 'A';//a에 A 대입
			}
			if (k == 'Z') {//k가 Z인 조건
				a = 'a';//a에 a 대입
			}
		}
	}
	for (int i = 0; i < c; i++) {//c번반복하는 반복문
		for (int j = 0; j < r; j++) {//r번반복하는 반복문
			printf("%c ", p[i][j]);//p[i][j] 출력
		}printf("\n");//줄바꿈
	}
	free(p);//p메모리 해제
}