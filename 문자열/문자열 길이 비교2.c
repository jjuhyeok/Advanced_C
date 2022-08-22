#include <stdio.h>
#pragma warning(disable : 4996)

void main() {
	char s1[50] = { '\0', };//크기가 50인 문자열 배열 선언 
	char s2[50] = { '\0', };//크기가 50인 문자열 배열 선언 
	scanf("%s%s", s1, s2);//s1과 s2에 문자열 대입

	if (strcmp(s1, s2) > 0)//s1이 s2보다 문자열이 긴 조건
		printf("%s%s", s1, s2);//s1, s2 출력
	else//s2가 s1보다 문자열이 긴 조건
		printf("%s%s", s2, s1);//s1, s2 출력
}