#include <stdio.h>
#pragma warning(disable: 4996)
int add_to_k(int* str, int* end) {
	int sum = 0;//변수 sum 선언 후 0으로 초기화
	for (str; str <= end; str++)//str++하면서 end까지 반복하는 반복문
		sum += *str;//sum에 *str값 더하기
	return sum;//sum 반환
}

void main() {
	int N, sum = 0;//변수 N,sum 선언
	int d[100] = { 0 }, * pd = d;//크기가 100인 배열 d 선언 후 *pd와 배열 d 연결

	scanf("%d", &N);//N에 정수값 입력
	for (pd = d; pd < d + N; pd++)//N만큼 반복하고 pd++하는 반복문
		scanf("%d", pd);//pd에 정수값 대입

	for (pd = d; pd < d + N; pd++)//N만큼 반복하고 pd++하는 반복문
		sum += add_to_k(d, pd);//add_to_k함수 호출하면서 sum에 플러스

	printf("%d", sum);//sum값 출력
}