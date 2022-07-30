#include<stdio.h>
#pragma warning(disable : 4996)

int main() {
	char ch[20];//크기가 20인 문자형 배열을 선언
	char* pch = &ch;//*pch와 ch의 주소값을 연결해줌
	int k = 0;//변수k를 0으로 초기화
	for (int i = 0; i < 20; i++) {//20번 돌아가는 반복문
		scanf("%c", pch);//pch에 문자를 입력
		if (*pch == '#') {//*pch의 값이 '#'인 조건
			break;//탈출
		}
		k = k + 1;//k의 값이 1씩 증가
		pch = pch + 1;//pch의 순서가 1씩 증가
	}
	k = k - 1;//k의 값을 1 뺌
	pch = pch - 1;//pch의 순서 1을 뺌
	for (pch; k >= 0; k--, pch--) {//k번만큼 돌아가는 반복문
		printf("%c", *pch);//*pch를 출력
	}
	return 0;
}