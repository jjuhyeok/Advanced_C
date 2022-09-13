#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int N;//정수형 변수 N 선언
	scanf("%d", &N);//N에 정수 입력
	getchar();//getchar
	char** p = (char**)malloc(N * sizeof(char*));//char **p에 N*char 크기의 동적할당

	for (int i = 0; i < N; i++)//N번 반복하는 반복문
		p[i] = (char*)malloc(100 * sizeof(char));//동적할당
	for (int i = 0; i < N; i++) {//N번 반복하는 반복문
		gets((p[i]));//문자열 입력받기

	}
	char tmp[100];//크기가 100인 문자열tmp 선언
	for (int i = 0; i < N; i++) {//N번 반복하는 반복문
		for (int j = 0; j < N - 1; j++) {//N-1번 반복하는 반복문
			if (strlen(p[j]) < strlen(p[j + 1])) {//p[j] 문자열이 p[j+1]문자열보다 길이가 작은 조건
				strcpy(tmp, p[j]);//문자열 복사
				strcpy(p[j], p[j + 1]);//문자열 복사
				strcpy(p[j + 1], tmp);//문자열 복사
			}
		}
	}
	for (int i = 0; i < N; i++) {//N번 반복하는 반복문
		printf("%s\n", p[i]);//문자열 출력
	}
	for (int i = 0; i < N; i++) {
		free(p[i]);//p[i] 메모리 해제
	}
	free(p);//p메모리 해제
}