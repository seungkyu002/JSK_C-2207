#include <stdio.h>

/*
	int arr[5];

	for�� : i �� �̿��ؼ� �ֱ�
			arr[0] = 1
			arr[1] = 2
			......
			arr[4] = 5
	for�� : ���
			5
			4
			3
			2
			1
*/


int main() {

	int arr[5];

	for (int i = 0; i < 5; i++) {
		// 0 1 2 3 4 : i
		// 1 2 3 4 5 : i+1
		// 2 4 6 8 10 : 2 * (i+1)
		arr[i] = i + 1;
	}
	for (int j = 4; j >= 0; j--) {
		// 4 3 2 1 0 : j
		// 5 4 3 2 1 : j + 1
		arr[j] = j + 1;
		printf("%d\n", arr[j]);
	}




	return 0;
}