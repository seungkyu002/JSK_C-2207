//#include <stdio.h>
//
///*
//	�Ű������� ���� 3���� �Է�
//	�� ���� 3���� ���� ��ȯ�ϴ� �Լ�
//*/
//int sum(int a, int b, int c) {
//	return a + b + c;
//}
//
//
//int main() {
//
//	printf("%d", sum(2,3,5)); // �迭
//
//	return 0;
//}
//
//#include <stdio.h>
//
///*
//	for�� ������ result�� �迭����� ��
//*/
//int sum(int num[]) {
//	int result = 0;
//
//	for (int i = 0; i < 3; i++) {
//		//i = 0;
//		result = result + num[i]; // result == 2;
//	}
//	return result; // �Ű������� ���� �迭 ����� ��
//}
//
//
//int main() {
//	int arr[] = { 2,3,5 }; // �迭
//
//	printf("%d", sum(arr));
//
//	return 0;
//}