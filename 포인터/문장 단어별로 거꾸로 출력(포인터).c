#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	char ar[1000];//크기가 1000인 문자형 배열 ar선언
	char* par = ar;//포인터 par과 ar 연결
	int cnt = 0;//정수 cnt 선언 후 0 대입 
	char l;//
	for (par = ar;; par++) {//par = ar에서 par++ 되는 반복문
		scanf("%c", par);//par에 문자형 대입
		if (*par == '.' || *par == '?' || *par == '!') {//*par이 . ? ! 인 조건
			l = *par;//l에 *par 대입
			break;//탈출
		}
		cnt = cnt + 1;//cnt 1씩 증가
	}

	int ccnt = 0;//정수 ccnt 선언 후 0 대입
	par--;//par--
	for (par; cnt >= 0; par--, cnt--) {//반복문

		if (*par == ' ' || cnt == 0) {//*par이 ' '이거나 cnt가 0인 조건
			for (int i = 1; i <= ccnt; i++) {//i가 1에서 1씩 증가하며 i<=ccnt까지 반복하는 반복문
				printf("%c", *(par + i));//*(par + i)출력

			}
			printf(" ");//공백 출력
			ccnt = 0;//ccnt 0 대입
		}
		else
			ccnt = ccnt + 1;//ccnt 1씩 증가
	}
	printf("%c", l);//l출력
}