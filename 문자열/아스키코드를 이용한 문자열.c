#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
void main() {
	char A[21] = { '\0', };//크기가 21인 배열 A 선언 후 null로 초기화
	int N, cnt = 0;//정수형 변수 N, cnt 선언 cnt 0으로 초기화
	scanf("%s", A);//A에 문자열 입력
	scanf("%d", &N);//N에 정수 입력
	char n[3] = { '\0', };//크기가 3인 배열 n 선언 후 null로 초기화

	cnt = strlen(A);//문자열 A의 길이를 cnt에 대입
	for (int i = 0; i < cnt; i++) {//cnt만큼 반복하는 반복문
		if ('A' <= *(A + i) && *(A + i) <= 'Z') {//*(A+i)가 A~Z사이인 조건
			printf("%c", *(A + i) + N);//*(A + i) + N 출력
		}
		else if ('a' <= *(A + i) && *(A + i) <= 'z') {//*(A+i)가 a~z사이인 조건
			printf("%c", *(A + i) - N);//*(A + i) - N 출력
		}
		else if ('0' <= *(A + i) && *(A + i) <= '9') {//*(A+i)가 0~9인 조건
			if ('0' <= *(A + i + 1) && *(A + i + 1) <= '9') {// *(A + i + 1)이 0~9 인 조건
				n[0] = *(A + i);//n[0]에 *(A + i) 대입
				n[1] = *(A + i + 1);//n[0]에 *(A + i + 1) 대입
				printf("%c", 'A' + atoi(n) - 1);//문자 출력
				for (int j = 0; j < N - 1; j++) {//N-1만큼 반복하는 반복문
					printf("%c", 'A' + atoi(n) - 1);//문자 출력
				}
				i++;//i값 1 증가
			}
			else {// *(A + i + 1)이 0~9가 아닌 조건 
				for (int j = 0; j < N; j++) {//N만큼 반복하는 반복문
					printf("%c", 'A' + atoi(A + i) - 1);//문자 출력
				}
			}
		}
		else {//*(A+i)가 대문자,소문자,숫자도 아닌 조건
			printf(" ");//공백 출력
		}
	}

}