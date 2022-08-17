#include<stdio.h>

#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	char str[101];//크기가 101인 문자형 배열 str선언
	scanf("%s", str);//str에 문자열 입력
	int cnt = 0;//cnt를 0으로 초기화
	for (int i = 0;; i++) {//반복문
		if (str[i] == '\0') {//str[i]가 널 값인 조건
			break;//탈출
		}
		cnt = cnt + 1;//cnt를 1씩 증가
	}
	char tmp;//문자형 tmp 선언
	for (int i = 0; i < cnt; i++) {//cnt만큼 반복하는 반복문
		printf("%s\n", str);//str출력
		for (int j = 1; j < cnt; j++) {//j<cnt일때까지 반복하는 반복문
			tmp = str[j - 1];//tmp에 str[j-1]대입
			str[j - 1] = str[j];//str[j-1]에 str[j]대입
			str[j] = tmp;//str[j-1]에 tmp대입
		}

	}
}