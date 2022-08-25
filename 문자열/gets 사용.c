#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)

void main() {
	char str1[101] = { '\0', };//크기가 101인 문자열 str1 선언
	char str2[101] = { '\0', };//크기가 101인 문자열 str2 선언
	gets(str1);//str1에 입력
	scanf("%s", str2);//str2에 입력

	int cnt1 = strlen(str1);//cnt1에 str1의 길이 대입
	int cnt2 = strlen(str2);//cnt2에 str2의 길이 대입
	int cnt3 = 0, r = 0;//cnt3에 0, r에 0 대입
	for (int i = 0; i < cnt1; i++) {//cnt1번 반복하는 반복문
		int k = i;//k에 i 대입
		cnt3 = 0;//cnt3에 0 대입
		for (int j = 0; j < cnt2; j++) {//cnt2번 반복하는 반복문

			if (*(str1 + i) == *(str2 + j)) {//*(str1 + i) == *(str2 + j)이 같을 조건
				cnt3++;//cnt3 1씩 증가
				if (cnt2 == cnt3) {//cnt2와 cnt3가 같을 조건
					r++;//r 1씩 증가
					break;//탈출
				}
				i++;//i 1씩 증가
			}
			else {//*(str1 + i) == *(str2 + j)이 다를 조건
				cnt3 = 0;//cnt3에 0 대입
				j = 0;//j에 0 대입
				i = k;//j에 k 대입
				break;//탈출
			}
		}

	}
	printf("%d", r);//r값 출력

}