//#include <stdio.h>
//
///*
//	매개변수로 정수 3개를 입력
//	그 숫자 3개의 합을 반환하는 함수
//*/
//int sum(int a, int b, int c) {
//	return a + b + c;
//}
//
//
//int main() {
//
//	printf("%d", sum(2,3,5)); // 배열
//
//	return 0;
//}
//
//#include <stdio.h>
//
///*
//	for문 돌려서 result가 배열요소의 합
//*/
//int sum(int num[]) {
//	int result = 0;
//
//	for (int i = 0; i < 3; i++) {
//		//i = 0;
//		result = result + num[i]; // result == 2;
//	}
//	return result; // 매개변수로 받은 배열 요소의 합
//}
//
//
//int main() {
//	int arr[] = { 2,3,5 }; // 배열
//
//	printf("%d", sum(arr));
//
//	return 0;
//}