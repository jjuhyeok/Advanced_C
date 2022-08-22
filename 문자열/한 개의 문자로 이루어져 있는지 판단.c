#include <stdio.h>
#pragma warning(disable:4996)
int check(char* ps) {//check 함수
	int cnt1 = strlen(ps), cnt2 = 0;//정수 cnt1 선언 후 ps의 길이 대입, cnt2  선언 후 0 대입

	for (int i = 0; i < cnt1 / 2; i++) {//cnt/2 만큼 반복하는 반복문
		if (*(ps + i) == *(ps + cnt1 - i - 1))//*(ps + i) == *(ps + cnt1 - i - 1)같은 조건
			cnt2++;//cnt2 1씩 증가
	}
	if (cnt1 / 2 == cnt2)// cnt1/2 가 cnt와 같을 조건
		return 1;//1 반환
	else//cnt1/2 가 cnt와 다른 조건
		return 0;//0 반환
}
void main() {
	char s[30] = { '\0', };//크기가 30인 문자열 배열 선언
	char* ps = s;//포인터 ps 선언 후 s와 연결
	scanf("%s", s);//문자열 입력

	printf("%d %d", strlen(s), check(ps));//s의 길이와 ps 함수 호출 후 출력
}