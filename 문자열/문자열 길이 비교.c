#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	char str1[101];//크기가 101인 문자형 str1 선언
	char str2[101];//크기가 101인 문자형 str2 선언
	scanf("%s", str1);//str1에 문자열 입력
	scanf("%s", str2);//str2에 문자열 입력
	int cnt = 0;//정수형 cnt 선언 후 0 대입
	for (int i = 0;; i++) {//반복문
		if (str1[i] == '\0') {//str[i]가 널 값인 조건
			break;//탈출
		}
		cnt = cnt + 1;//cnt 1씩 증가
	}
	int cnt2 = 0;//정수형 cnt 선언 후 0 대입
	for (int i = 0; i < cnt; i++) {//cnt만큼 반복하는 반복문
		if (str1[i] == str2[i]) {//str[i]와 str[2]가 같을 조건
			cnt2 = cnt2 + 1;//cnt2 1씩 증가
		}
	}
	printf("%d ", cnt);//cnt값 출력
	if (cnt == cnt2) {//cnt와 cnt2가 같을 조건
		printf("1");//1출력
	}
	else//다른 조건
		printf("0");//2출력
}