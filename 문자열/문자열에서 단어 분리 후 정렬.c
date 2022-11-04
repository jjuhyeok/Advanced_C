#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
void main() {
	int i = 0, j = 0, k = 0;//정수형 변수 i,j,k 선언 후 0으로 초기화
	char A[100] = { '\0', };//크기가 100인 배열 A 선언 후 null로 초기화
	char B[10][100] = { '\0', };//크기가 100인 배열 B 선언 후 null로 초기화
	char C[100] = { '\0', };//크기가 100인 배열 C 선언 후 null로 초기화
	int B_n = 0;//정수형 변수 B_n 선언 후 0으로 초기화
	gets(A);//A에 입력
	int l = strlen(A);//문자열 A의 길이를 정수형 변수 l에 대입
	for (i = 0; i < l; i++) {//l번만큼 반복하는 반복문
		B[B_n][j++] = A[i];//B[B_n][j++]에 A[i]값 대입
		if (A[i] == ' ') {//A[i]가 공백인 조건
			B_n++;//B_n값 1 증가
			j = 0;//j에 0 대입
		}
	}
	B_n++;//B_n값 1 증가
	for (i = 0; i < B_n; i++) {//B_n번만큼 반복하는 반복문
		puts(B[i]);//B[i] 출력
	}
	char tmp[100] = { '\0', };//크기가 100인 배열 tmp 선언 후 null로 초기화
	for (i = 0; i < B_n; i++) {//B_n번 반복하는 반복문
		for (j = 0; j < B_n - 1; j++) {//B_n - 1번 반복하는 반복문
			if (B[j][0] > B[j + 1][0]) {//B[j][0]이 B[j + 1][0] 보다 알파벳 순서가 느린 조건
				strcpy(tmp, B[j]);//문자열 복사 함수 tmp에 B[j]복사
				strcpy(B[j], B[j + 1]);//문자열 복사 함수 B[j]에 B[j+1] 복사
				strcpy(B[j + 1], tmp);//문자열 복사 함수 B[j+1]에 tmp 복사
			}//단어 정렬
		}
	}
	for (i = 0; i < B_n; i++) {//B_n번 반복하는 반복문
		puts(B[i]);//B[i]출력
	}
}