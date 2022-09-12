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
	int m = 100;//정수형 변수 m 선언 후 100 대입
	int k;//정수형 변수 k 선언
	for (int i = 0; i < N; i++) {//N번 반복하는 반복문
		if (strlen(p[i]) < m) {//문자열의 길이가 m보다 작은 조건
			m = strlen(p[i]);//m에 문자열 길이 대입
			k = i;//k에 i 대입
		}
	}
	printf("%s", p[k]);//최소길이 문자열 출력
	for (int i = 0; i < N; i++) {
		free(p[i]);//p[i] 메모리 해제
	}
	free(p);//p 메모리 해제
}