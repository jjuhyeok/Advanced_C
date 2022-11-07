#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	char a[100] = { '\0', };//크기가 100인 배열 a 선언 후 null로 초기화
	char b[100] = { '\0', };//크기가 100인 배열 b 선언 후 null로 초기화
	gets(a);//a에 입력
	gets(b);//b에 입력

	int na = strlen(a);//정수형 변수 na 선언 후 a의 길이 대입
	int nb = strlen(b);//정수형 변수 nb 선언 후 b의 길이 대입
	int cnt = 0;//정수형 변수 cnt 선언 후 0대입
	int cntf = 0;//정수형 변수 cntf 선언 후 0대입
	for (int i = 0; i < na; i++) {//na만큼 반복하는 반복문
		cnt = 0;//cnt에 0 대입
		if (a[i] == b[0]) {//a[i]와 b[0]이 같을 조건
			for (int j = 0; j < nb; i++, j++) {//nb만큼 반복하고 i,j 1씩 증가하는 반복문
				if (a[i] == b[j]) {//a[i]와 b[j]가 같을 조건
					cnt++;//cnt 1씩 증가
				}
			}
			if ((cnt == nb) && (a[i] == '.' || a[i] == ' ') && (a[i - nb - 1] == '.' || a[i - nb - 1] == ' ') || ((cnt == nb) && (a[i] == '\0') && (a[i - nb - 1] == '.' || a[i - nb - 1] == ' ')) || ((cnt == nb) && (i - nb == 0) && ((a[i] == '.') || (a[i] == ' ') || (a[i] = '\0')))) {//단어가 일치하는 조건
				cntf++;//cntf 1씩 증가

			}


		}
	}
	printf("%d", cntf);//cntf 출력
}