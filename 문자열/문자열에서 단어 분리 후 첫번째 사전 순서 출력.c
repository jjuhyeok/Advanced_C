#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
void main() {
	int i = 0, j = 0, k = 0;//정수형 변수 i, j, k에 선언 후 0 대입
	char A[1001] = { '\0', };//크기가 1001인 배열 A 선언 후 null로 초기화
	char B[10][100] = { '\0', };//크기가 10,100인 이중배열 B 선언 후 null로 초기화
	int B_n = 0;//정수형 변수 B_n 선언 후 0으로 초기화
	gets(A);//A에 입력
	int l = strlen(A);//정수형 변수 l 선언 후 A의 길이 대입

	for (i = 0; i < l; i++) {//l만큼 반복하는 반복문
		B[B_n][j++] = A[i];//B[B_n][j++] 에 A[i]값 대입
		if (A[i] == ' ') {//A[i]가 ' '인 조건
			B[B_n][--j] = '\0';//B[B_n][--j] 를 null로 초기화
			B_n++;//B_n값 1 증가
			j = 0;//j에 0 대입
		}
	}
	B_n++;//B_n값 1 증가
	for (i = 0; i < B_n; i++) {//B_n만큼 반복하는 반복문
		puts(B[i]);//B[i]출력
	}
	char tmp[100] = { '\0', };//크기가 100인 배열tmp 선언 후 0으로 초기화

	for (i = 0; i < B_n; i++) {//B_n만큼 반복하는 반복문
		for (j = 0; j < B_n - 1; j++) {//B_n -1 만큼 반복하는 반복문
			for (k = 0; k < 100; k++) {//100번반복하는 반복문
				if (strcmp(B[j], B[j + 1]) > 0) {//strcmp(B[j], B[j + 1])가 0보다 큰 조건
					strcpy(tmp, B[j]);//tmp에 B[j]복사
					strcpy(B[j], B[j + 1]);//B[j]에 B[j+1]복사
					strcpy(B[j + 1], tmp);//B[j+1]에 tmp복사
					k++;//k값 1 증가
				}
				else
					break;//break
			}
		}
	}

	puts(B[0]);//B[0]출력

}