#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
void main() {
	int i = 0, j = 0, k = 0, cnt = 0, r = 0;//정수형 변수 i,j,k,cnt,r 선언 후 0으로 초기화
	char A[100] = { '\0', };//크기가 100인 배열 A 선언 후 null로 초기화
	char B[100] = { '\0', };//크기가 100인 배열 B 선언 후 null로 초기화

	gets(A);//A에 문자열 입력
	gets(B);//B에 문자열 입력
	int A_n = strlen(A);//문자열 A의 길이를 정수형 변수 A_n에 대입
	int B_n = strlen(B);//문자열 B의 길이를 정수형 변수 B_n에 대입

	for (i = 0; i < A_n; i++) {//A_n번만큼 반복하는 반복문
		k = i;//k에 i 대입
		cnt = 0;//cnt에 0 대입

		for (j = 0; j < B_n; j++) {//B_n번만큼 반복하는 반복문

			if (A[i] == B[j]) {//A[i]와 B[j] 알파벳이 같은 경우
				cnt++;//cnt값 1 증가
				if (cnt == B_n) {//cnt와 B_n이 같은 조건
					r++;//r값 1 증가
					break;//break
				}
				i++;//i값 1 증가
			}
			else {//A[i]와 B[j] 알파벳이 다른 경우
				cnt = 0;//cnt 0 대입
				i = k;//i에 k 대입
				j = 0;//j에 0 대입
				break;//break
			}
		}
	}
	printf("%d", r);//r값 출력

}