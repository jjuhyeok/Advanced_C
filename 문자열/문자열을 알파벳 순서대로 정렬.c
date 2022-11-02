#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

int main() {
	char a[101];//크기가 101인 배열 a 선언
	scanf("%s", a);//a에 문자열 입력
	int n = strlen(a);//문자열 a의 길이를 정수형 변수 n에 대입
	char tmp;//tmp선언
	for (int i = 0; i < n; i++) {//n번만큼 반복하는 반복문
		for (int j = i; j < n; j++) {//n번만큼 반복하는 반복문
			if (a[j] <= a[i]) {//a[j]가 a[i]보다 알파벳 순서가 빠른 조건
				tmp = a[j];//tmp에 a[j] 대입
				a[j] = a[i];//a[j]에 a[i] 대입
				a[i] = tmp;//a[i]에 tmp값 대입
			}//알파벳 순서대로 정렬
		}
	}
	printf("%s", a);//문자열 a 출력
}