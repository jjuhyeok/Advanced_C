#include <stdio.h>
#pragma warning(disable : 4996)

int passengerN(int n) {//passengeN함수
	if (n >= 5) {//n이 5이상인 조건
		return 0;//0반환
	}
	else {//n이 5 미만인 조건
		return -1;//-1 반환
	}
}


int rebooking(int* ar) {//rebooking 함수
	int* aar = ar;//포인터 aar 선언 후 ar과 연결
	int* bar = ar;//포인터 bar 선언 후 ar과 연결
	int* aaar = aar;//포인터 aaar선언 후 aar과 연결
	int i = 0;//정수 i 선언 후 0대입
	int j = 0;//정수 j 선언 후 0대입
	int cnt = 0;//정수 cnt 선언 후 0대입
	int s = 0;//정수 s 선언 후 0대입
	int cng = 0;//정수 cng 선언 후 0대입
	int k = 0;//정수 k 선언 후 0대입
	for (i, aar; *aar >= 1 && *aar <= 21; aar++, i++) {//aar++하며 *aar>=1이면서 *aar<=21까지 반복하는 반복문
		j = 0;//j에 0 대입
		cnt = 0;//cnt에 0 대입
		for (j, bar; *bar >= 1 && *bar <= 21; bar++, j++) {//bar++하며 *bar>=1이면서 *bar<=21까지 반복하는 반복문
			if (*aar == *bar && i != j) {//*aar과 *bar이 같고 i와 j가 다른 조건
				s = *aar;//s에 *aar 대입
			}
		}

		k = 0;//k에 0 대입
		for (k, aaar = ar; *aaar >= 1 && *aaar <= 21; aaar++, k++) {//aaar++하며 *aaar>=1이면서 *aaar<=21까지 반복하는 반복문
			if (s == *aaar) {//s와 *aaar이 같을 조건
				cnt = cnt + 1;//cnt 1씩 증가
			}
			if (cnt >= 2 && s == *aaar) {//cnt가 2이상이면서 s가 *aaar과 같을 조건
				cng = changeseat(ar);//cng에 changeseat(ar)대입
				ar[k] = cng;//ar[k]에 cng 대입
			}
		}
		bar = ar;//bar에 ar 대입
		cnt = 0;//cnt에 0 대입
		s = 0;//s에 0 대입
	}
	ar = aaar;//ar에 aaar 대입
}
int changeseat(int* ar) {//changeseat함수
	int cnt = 1;//정수 cnt 선언 후 1 대입
	int chn[21];//크기가 21인 배열 선언
	int* cr = ar;//포인터 cr 선언 후 ar과 연결
	for (cr = ar; *cr >= 1 && *cr <= 21; cr++) {//cr++하며 *cr>=1이면서 *cr<=21까지 반복하는 반복문
		if (*cr == cnt) {//*cr과 cnt인 조건
			cnt = cnt + 1;//cnt 1 씩 증가
			cr = ar;//cr에 ar 대입

		}
	}

	return cnt;//cnt 반환
}


int main() {
	int N;//정수 N선언
	scanf("%d", &N);//N에 정수 입력
	int ar[21];//크기가 21인 배열 ar 선언
	int* par = ar;//포인터 par 선언 후 ar과 연결

	for (par = ar; par < ar + N; par++) {//par++하며 par<ar+N까지 반복하는 반복문
		scanf("%d", par);//par에 정수 입력
	}
	if (N >= 5) {//N이 5 이상인 조건
		printf("%d\n", passengerN(N));//출력
		rebooking(ar);//rebooking 함수 호출
		for (par = ar; par < ar + N; par++) {//par++하며 par<ar+N까지 반복하는 반복문
			printf("%d ", *par);//출력
		}

	}
	else {
		printf("%d", passengerN(N));//출력
	}
}