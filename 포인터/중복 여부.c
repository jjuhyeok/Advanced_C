#include <stdio.h>
#pragma warning(disable:4996)
void main() {
	int N, cnt = 0, i, j, k = 0, c = 0;//정수 N,cnt = 0,i,j,k,c 선언
	scanf("%d", &N);//N에 정수 입력
	int a[21] = { 0 };//크기가 21인 배열 a 선언 후 0으로 초기화
	int b[21] = { 0 };//크기가 21인 배열 b 선언 후 0으로 초기화
	int* pa = a, * pb = b, * pc = a;//포인터 pa 선언 후 a와 연결, 포인터 pb 선언후 b와 연결, 포인터 pc 선언 후 a와 연결
	for (pa = a; pa < a + N; pa++) {//pa=a 부터 pa++하며 pa<a+N까지 반복하는 반복문
		scanf("%d", pa);//pa에 정수 입력
	}
	if (N >= 5) {//N이 5이상인 조건
		for (i = 0, pa = a; pa < a + N; pa++, i++) {//pa++ 하며 pa< a+N까지 반복하는 반복문
			for (j = 0, pb = a; pb < a + N; pb++, j++) {//pb++ 하며 pb< a+N까지 반복하는 반복문
				if (*pa == *pb) {//*pa == *pb인 조건
					cnt++;//cnt 1씩 증가
					if (i > j)//i>j인 경우
						k = 1;//k에 1 대입
				}
			}
			if (k != 1 && cnt != 1) {//k 가 1이 아니며 cnt가 1이 아닌 경우
				printf("%d %d\n", *pa, cnt);//출력
				c++;//c 1씩 증가
			}
			cnt = 0;//cnt에 0 대입
			k = 0;//k에 0 대입
		}
		if (c == 0)//c가 0 인 조건
			printf("0\n");//0출력
	}
	else
		printf("-1");//-1출력
}