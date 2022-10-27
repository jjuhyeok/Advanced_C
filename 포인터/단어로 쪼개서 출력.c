#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	char ar[100] = { 0 };//크기가 100인 ar
	char* par = ar;//포인터 par 선언 후 ar과 연결
	for (par = ar; par < ar + 100; par++) {//100번 반복하는 반복문
		scanf("%c", par);//par에 문자 입력
		if (*par == '#') {//*par이 #인 조건
			break;//탈출
		}
	}
	int max = 0;//정수 max 선언 후 0 대입
	int cnt = 0;//정수 cnt 선언 후 0 대입
	for (par = ar; par < ar + 100; par++) {//100번 반복하는 반복문
		if (*par >= 'a' && *par <= 'z') {//*par이 'a'부터 'z' 사이인 조건
			printf("%c", *par);//출력
			cnt++;//cnt 1 씩 증가
		}
		else {

			if (cnt > max) {//cnt가 max보다 클 조건
				max = cnt;//max에 cnt 대입

			}
			if (*(par - 1) >= 'a' && *(par - 1) <= 'z') {//*(par - 1)이 'a'부터 'z' 사이인 조건
				printf("\n");//공백 출력
			}
			cnt = 0;//cnt에 0 대입
		}

		if (*par == '#') {//*par이 #인 조건
			break;//탈출
		}
	}
	printf("%d", max);//max 출력
}