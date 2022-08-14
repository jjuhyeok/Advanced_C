#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	char str[20];//크기가20인 문자형 배열str선언
	scanf("%s", str);//문자열을 str에 입력
	for (int i = 0; str[i] != 0; i++) {//str[i]가 null값이 될때까지 돌아가는 반복문
		if (str[i] >= 'a' && str[i] <= 'z') {//str[i]가 소문자인 조건
			printf("%c", str[i]);//str[i] 출력
		}
	}
}