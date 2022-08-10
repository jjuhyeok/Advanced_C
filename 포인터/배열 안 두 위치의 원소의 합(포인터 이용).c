#include <stdio.h>
#pragma warning(disable: 4996)
int arrsum(int* str, int* end) {
	int sum = 0;//변수 sum 선언 후 0으로 초기화
	for (str; str <= end; str++)//str++하면서 end가 될때까지 반복하는 반복문
		sum += *str;//sum에 sum + *str 값 대입
	return sum;//sum반환
}
void main() {
	int N, S, E;//변수 N,S,E 선언
	scanf("%d%d%d", &N, &S, &E);//N,S,E에 정수값 입력
	int a[100] = { 0 }, * pa = a;//크기가 100인 배열a 선언 후 0으로 초기화, *pa와 a 연결
	for (pa = a; pa < a + N; pa++)//N만큼 반복하고 pa++ 하는 반복문
		scanf("%d", pa);//pa에 정수값 입력

	printf("%d", arrsum(a + S, a + E));//arrsum함수 호출 후 출력
}