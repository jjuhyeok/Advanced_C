#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)

int main() {
	int n;//정수형 변수 n 선언
	scanf("%d", &n);//n에 정수 입력
	char s1[101][99];//크기가 101,99인 문자열 배열 s1선언
	getchar();//getchar
	for (int i = 0; i < n; i++) {//n만큼 반복하는 반복문
		gets(s1[i]);////s1[i]에 문자열 입력
	}
	int m = 9999;//정수형 변수 m 선언 후 9999대입
	char s2[101] = { '\0', };//크기가 101인문자형 변수 s2 선언
	for (int i = 0; i < n; i++) {//n번 반복하는 반복문
		if (m > strlen(s1[i])) {//m이 문자열 s1의 길이보다 긴 조건
			strcpy(s2, s1[i]);//s2에 s1 복사
			m = strlen(s1[i]);//m에 s1의 길이 대입

		}
	}
	printf("%s", s2);//s2 출력
}