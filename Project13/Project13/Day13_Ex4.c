#include <stdio.h>

/*가위1, 바위,2, 보,3 게임*/
//입력 형태: 컴,2 나,2
//출력: 비겼습니다.
//입력: 컴,3 나,2
//출력: 졌습니다.
//내가 이길때까지.

int main() {
	int a = 0;
	int b = 0;
	int rs = 0;
	while(1) {
		printf("가위바위보 게임입니다. 가위:1, 바위:2, 보:3 \n");
		printf("컴퓨터 : ");
		scanf_s("%d", &a);
		printf("나 : ");
		scanf_s("%d", &b);
		rs = a - b;
		if (rs == 2) {
			printf("이겼습니다.");
			break;
		}
		else if(rs == 1) {
			printf("패배했습니다.");
		}
		else if (rs == 0) {
			printf("비겼습니다.");
		}
		else if (rs == -2) {
			printf("패배했습니다.");
		}
		else if (rs == -1) {
			printf("이겼습니다.");
			break;
		}
	}

	return 0;
}
