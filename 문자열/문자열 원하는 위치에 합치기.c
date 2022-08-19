#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	char str1[42];//크기가 42인 문자형 배열 str1 선언
	char str2[21];//크기가 21인 문자형 배열 str2 선언
	scanf("%s", str1);//str1에 문자열 입력
	scanf("%s", str2);//str2에 문자열 입력
	int n;//정수형 n 선언
	scanf("%d", &n);//n에 정수 입력
	int cnt = 0;//정수 cnt 선언 후 0 대입
	for (int i = 0;; i++) {//반복문
		if (str2[i] == '\0') {//str2[i]가 널 값인 조건
			break;//탈출
		}
		cnt = cnt + 1;//cnt1 증가
	}
	int c1 = 0;//정수 c1 선언 후 0 대입
	for (int i = 0;; i++) {//반복문
		if (str1[i] == '\0') {//str[1]이 널 값인 조건
			break;//탈출
		}
		c1 = c1 + 1;//c1 1씩 증가
	}
	int c2 = c1 - n;//정수 c2 선언 후 c1-n값 대입
	int cnt1 = cnt;//정수 cnt1 선언 후 cnt 대입
	int cnt2 = cnt;//정수 cnt2 선언 후 cnt 대입
	int cnt3 = cnt;//정수 cnt3 선언 후 cnt 대입
	int n1 = n;//정수 n1 선언 후 n 대입
	int k = 0;//정수 k 선언 후 0 대입
	int tmp = 0;//정수 tmp 선언 후 0 대입
	int cc = 0;//정수 cc 선언 후 0 대입
	
	for (k,n; k<=c2;cnt2++, n++,k++) {//반복문
		if (k > c2) {//k가 c2보다 클 조건
			str2[cnt2] = '\0';//str2[cnt2]에 0 대입
			break;//탈출
		}
		str2[cnt2] = str1[n];//str2[cnt2]에 str1[n] 대입
		cc = cc + 1;//cc 1씩 증가
	}
	for (int i = 0; i < cnt3+cc; n1++, i++) {//반복문
		str1[n1] = str2[i];//str1[n1]에 str2[i]값 대입
	}


	printf("%s", str1);//str1 출력
}