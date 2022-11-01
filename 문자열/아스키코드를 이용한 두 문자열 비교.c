#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
void main() {
	char A[21] = { '\0', };//크기가 21인 문자열 배열 A 선언 후 null로 초기화
	char B[21] = { '\0', };//크기가 21인 문자열 배열 B 선언 후 null로 초기화
	char C[201] = { '\0', };//크기가 201인 문자열 배열 C 선언 후 null로 초기화
	char D[201] = { '\0', };//크기가 201인 문자열 배열 D 선언 후 null로 초기화
	int N, A_n = 0, B_n = 0, C_n = 0, D_n = 0, r1 = 0, r2 = 0;//정수형 변수  A_n , B_n, C_n, D_n, r1, r2 선언 후 0으로 초기화
	gets(A);//A에 입력
	gets(B);//B에 입력
	char num[2] = { '\0', };//크기가 2인 문자열 변수 num선언 후 null로 초기화

	A_n = strlen(A);//A_n에 A의 길이 대입
	for (N = 1; N <= 10; N++) {//10번 반복하는 반복문
		for (int i = 0; i < A_n; i++) {//A_n번 반복하는 반복문
			if ('A' <= *(A + i) && *(A + i) <= 'Z') {//*(A+i)가 A~Z사이인 조건
				C[C_n++] = *(A + i) + N;//C[c_n++]에 *(A + i) + N 대입
			}
			else if ('a' <= *(A + i) && *(A + i) <= 'z') {//*(A+i)가 a~z사이인 조건
				C[C_n++] = *(A + i) - N;//C[c_n++]에 *(A + i) - N 대입
			}
			else if ('0' <= *(A + i) && *(A + i) <= '9') {//*(A + i)가 0~9사이인 조건
				if ('0' <= *(A + i + 1) && *(A + i + 1) <= '9') {//*(A + i + 1)가 0~9 사이인 조건
					num[0] = *(A + i);//num[0]에 *(A + i) 대입
					num[1] = *(A + i + 1);//num[1]에 *(A + i + 1) 대입
					for (int j = 0; j < N; j++) {//N번 반복하는 반복문
						C[C_n++] = 'A' + atoi(num) - 1;//C[C_n++] 에 'A' + atoi(num) - 1 값 대입
					}
					i++;//i값 1 증가
				}
				else {//*(A + i + 1)가 0~9 사이가 아닌 조건
					for (int j = 0; j < N; j++) {//N번 반복하는 반복문
						C[C_n++] = 'A' + atoi(A + i) - 1;//C[C_n++] 에'A' + atoi(A + i) - 1 값 대입
					}
				}
			}
			else//*(A+i)가 그 외인 조건
				C[C_n++] = ' ';//C[C_n++]에 ' '대입
		}
		if (strcmp(B, C) == 0) {//B와 C가 같을 조건
			r1 = 1;//r1에 1 대입
			break;//break
		}
		C_n = 0;//C_n에0 대입 
	}


	B_n = strlen(B);//B_n에 B의 길이 대입
	for (N = 1; N <= 10; N++) {//10번 반복하는 반복문
		for (int i = 0; i < B_n; i++) {//B_n번 반복하는 반복문
			if ('A' <= *(B + i) && *(B + i) <= 'Z') {//*(B + i)가 A~Z인 조건
				D[D_n++] = *(B + i) + N;//D[D_n++] 에 *(B + i) + N 값 대입
			}
			else if ('a' <= *(B + i) && *(B + i) <= 'z') {//*(B + i)가 a~z인 조건
				D[D_n++] = *(B + i) - N;//D[D_n++] 에 *(B + i) + N 값 대입
			}
			else if ('0' <= *(B + i) && *(B + i) <= '9') {//*(B + i)가 0~9인 조건
				if ('0' <= *(B + i + 1) && *(B + i + 1) <= '9') {//*(B + i + 1)이 0~9인 조건
					num[0] = *(B + i);//num[0]에 *(B + i)값 대입
					num[1] = *(B + i + 1);//num[1]에 *(B + i + 1)값 대입
					for (int j = 0; j < N; j++) {//N번 반복하는 반복문
						D[D_n++] = 'A' + atoi(num) - 1;//D[D_n++] 에 'A' + atoi(num) - 1 값 대입
					}
					i++;//i값 1씩 증가
				}
				else {//*(B + i + 1)이 0~9이 아닌 조건
					for (int j = 0; j < N; j++) {//N번 반복하는 반복문
						D[D_n++] = 'A' + atoi(B + i) - 1;//D[D_n++] 에 'A' + atoi(B + i) - 1값 대입
					}
				}
			}
			else//*(B+i)가 그 외인 조건
				D[D_n++] = ' ';//D[D_n++] 에 ' '대입
		}
		if (strcmp(A, D) == 0) {//A와 D가 같을 조건
			r2 = 1;//r2에 1 대입
			break;//break
		}
		D_n = 0;//D_n에 0 대입
	}


	if (r1 == 1)//r1이 1인 조건
		printf("1");//1 출력
	else if (r2 == 1)//r2가 1인 조건
		printf("2");//2 출력
	else//그 외인 조건
		printf("0");//0 출력
}