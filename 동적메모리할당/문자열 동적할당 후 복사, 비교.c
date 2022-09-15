#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int N;//정수형 변수 N 선언
	scanf("%d", &N);//N에 정수 입력
	getchar();//getchar
	char temp[100] = { '\0', };//크기가 100인 temp 선언
	char** p = (char**)malloc(N * sizeof(char*));//**p에 N * sizeof(char*) 동적할당
	for (int i = 0; i < N; i++) {//N번 반복하는 반복문
		scanf("%s", temp);//문자열 입력
		int l = strlen(temp);//문자열 길이를 정수형 변수 l에 대입
		p[i] = (char*)malloc((l + 1) * sizeof(char));//문자열이기때문에 +1해줘야함, p[i]에 동적할당
		strcpy(p[i], temp);//p[i]에 문자열 temp를 복사
	}
	char* t = { '\0', };
	for (int i = 0; i < N; i++) {//N번 반복하는 반복문
		for (int j = 0; j < N - 1; j++) {//N-1번 반복하는 반복문
			if (strcmp(p[j], p[j + 1]) > 0) {//사전순으로 p[j+1]이 더 빠른 조건
				t = *(p + j);//t에 *(p+j)대입
				*(p + j) = *(p + j + 1);//*(p+j)에 *(p+j+1)대입
				*(p + j + 1) = t;//*(p+j+1)에 t 대입
			}//사전순 내림차순 정렬
		}
	}
	for (int i = 0; i < N; i++) {//N번 반복하는 반복문
		printf("%s\n", p[i]);//사전 순서대로 문자열 출력
	}
	for (int i = 0; i < N; i++) {//N번 반복하는 반복문
		free(p[i]);//p[i]메모리 해제
	}
	free(p);//p메모리 해제
}