#include<stdio.h>
#pragma warning(disable : 4996)

int main() {
	int ar[50] = { 0 }, N;//크기 50인 배열 선언하고 0으로 초기화, 변수N선언
	int* p;//포인터 p선언
	scanf("%d", &N);//크기N을 입력
	int c = 0;//변수c선언 후 0대입
	int cc = 0;//변수cc선언 후 0대입
	for (p = ar; p < ar + N; p++) {//N번동안 반복하는 반복문
		scanf("%d", p);//포인터p에 정수 입력
		if (*p != 0 && cc == 0) {//*p가 0이아니면서 cc가 0인 조건
			c = c + 1;//c 1증가
		}
		if (*p == 0) {//*p가 0인 조건
			cc = cc + 1;//cc 1증가
		}

	}
	printf("%d", c);//c출력
	return 0;
}