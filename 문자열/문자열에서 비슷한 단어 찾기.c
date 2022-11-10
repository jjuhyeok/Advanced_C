#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	char a[1001] = { '\0', };//크기가 1001인 배열 a 선언 후 null로 초기화
	char* pa[100] = { '\0', };//크기가 100인 포인터 *pa 선언 후 null로 초기화
	int k;//정수형 변수 k 선언
	gets(a);//a에 입력
	scanf("%d", &k);//k에 정수 입력
	int n = strlen(a);//정수형 변수 n 선언 후 n의 길이 대입
	pa[0] = a;// 문자열 a 의 첫번째 자리의 주소를 pa 배열 첫번째에 저장
	int cnt2 = 1;//정수형 변수 cnt2 선언 후 1 대입
	for (int i = 0; i < n; i++) {//n번 반복하는 반복문
		if (a[i] == ' ') {//a[i]가 공백인 조건
			a[i] = '\0';// 공백이 나오면 공백자리에 null 값을 대입한다
			pa[cnt2++] = a + i + 1; // 공백 이후 문자 자리의 주소를 pa[cnt2++]에 차례대로 저장
		}
	}

	char* tmp = { '\0', };//포인터 *tmp 선언 후 null로 초기화

	for (int i = 0; i < cnt2; i++) {//cnt2번 반복하는 반복문
		for (int j = 0; j < cnt2 - 1; j++) {//cnt2 - 1번 반복하는 반복문
			if (strlen(pa[j]) < strlen(pa[j + 1])) {//pa[j]길이보다 pa[j+1]의 길이가 긴 조건
				tmp = pa[j];//tmp에 pa[j] 대입
				pa[j] = pa[j + 1];//pa[j]에 pa[j+1] 대입
				pa[j + 1] = tmp;//pa[j+1]에 tmp 대입
			}
		}
	} //단어의 길이가 긴 것 부터 정렬하는 이중반복문
	for (int i = 0; i < cnt2; i++) {//cnt2번 반복하는 반복문
		for (int j = 0; j < cnt2 - 1; j++) {//cnt2 - 1번 반복하는 반복문
			if (strlen(pa[j]) == strlen(pa[j + 1])) {//pa[j]길이와 pa[j+1]의 길이가 같은 조건
				if (strcmp(pa[j], pa[j + 1]) > 0) {//pa[j]가 pa[j+1]보다 사전순으로 빠른 조건
					tmp = pa[j];//tmp에 pa[j] 대입
					pa[j] = pa[j + 1];//pa[j]에 pa[j+1] 대입
					pa[j + 1] = tmp;//pa[j+1]에 tmp 대입
				}
			}
		}
	}//길이가 같은 단어들끼리 사전순으로 정렬

	int k_n = strlen(pa[k - 1]);//정수형 변수 k_n선언 후 pa[k-1]의 길이 대입
	printf("%s\n", pa[k - 1]);//pa[k-1] 문자열 출력
	for (int i = 0; i < cnt2; i++) {//cnt2번 반복하는 반복문
		int i_n = strlen(pa[i]);//정수형 변수 i_n선언 후 pa[i]의 길이 대입
		if (i != k - 1) {//k-1과 i의 값이 다른 조건
			if (-1 <= k_n - i_n && k_n - i_n <= 1) {// k_n과 i_n의 차이가 1 이하인 조건
				char AtoZ[27] = { '\0', };//크기가 27인 배열 AtoZ선언 후 null로 초기화
				int  atz_n[27] = { 0 };//크기가 27인 배열 atz_n선언 후 0으로 초기화
				for (int i = 0; i < 26; i++) {//26번 반복하는 반복문
					AtoZ[i] = 'a' + i;//AtoZ[i]에 'a' + i값 대입
				}

				for (int j = 0; j < k_n; j++) {//k_n만큼 반복하는 반복문
					for (int t = 0; t < 26; t++) {//26번 반복하는 반복문
						if (pa[k - 1][j] == AtoZ[t]) { //pa[k - 1][j]와 AtoZ[t]가 같은 알파벳인 조건
							atz_n[t]++;// atz_n의 값 1 증가
						}
					}
				}

				for (int j = 0; j < i_n; j++) {//i_n만큼 반복하는 반복문
					for (int t = 0; t < 26; t++) {//26번 반복하는 반복문
						if (pa[i][j] == AtoZ[t]) { //pa[i][j]와 AtoZ[t]가 같은 알파벳인 조건
							atz_n[t]--;// atz_n의 값 1 감소
						}
					}
				}


				int sum = 0;//정수형 변수 sum 선언 후 0으로 초기화
				for (int i = 0; i < 26; i++) {//26번 반복하는 반복문
					if (atz_n[i] < 0)//atz_n[i]가 음수인 조건
						sum += (atz_n[i]) * (-1);//sum에 atz_n[i]* (-1) 더하기
					else
						sum += atz_n[i];//sum에 atz_n[i] 더하기
				}
				if (sum <= 2)//sum의 값이 2보다 작을 조건
					printf("%s\n", pa[i]);//단어 출력
			}
		}
	}
}