#include <stdio.h>

/*����1, ����,2, ��,3 ����*/
//�Է� ����: ��,2 ��,2
//���: �����ϴ�.
//�Է�: ��,3 ��,2
//���: �����ϴ�.
//���� �̱涧����.

int main() {
	int a = 0;
	int b = 0;
	int rs = 0;
	while(1) {
		printf("���������� �����Դϴ�. ����:1, ����:2, ��:3 \n");
		printf("��ǻ�� : ");
		scanf_s("%d", &a);
		printf("�� : ");
		scanf_s("%d", &b);
		rs = a - b;
		if (rs == 2) {
			printf("�̰���ϴ�.");
			break;
		}
		else if(rs == 1) {
			printf("�й��߽��ϴ�.");
		}
		else if (rs == 0) {
			printf("�����ϴ�.");
		}
		else if (rs == -2) {
			printf("�й��߽��ϴ�.");
		}
		else if (rs == -1) {
			printf("�̰���ϴ�.");
			break;
		}
	}

	return 0;
}
