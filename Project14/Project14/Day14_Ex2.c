//#include <stdio.h> // 표준 입출력
//#include <stdlib.h> // 표준 라이브러리
//
//int main() {
//	int n;
//	scanf_s("%d", &n); // 칸 수
//
//	//int num[n]; // 컴퓨터가 할당 해줄 때
//	int* num = malloc(n * sizeof(int));
//
//	free(num); // 메모리에서 사라짐
//
//	for (int i = 0; i < n; i++) {
//		num[i] = (i + 1) * 100;
//		printf("%d\n", num[i]);
//	}
//	free(num); // 메모리에서 사라짐
//
//	return 0;
//}