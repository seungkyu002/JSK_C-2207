//#include <stdio.h>
//
///*
//	�ڷ���(������ ����)�� ũ��
//	int, double, char, [], * 
//*/
//
//int main() {
//
//	int num1 = 5;
//	printf("int �� ������ =%d\n", sizeof(num1)); //4
//	// llu : unsigned long long
//
//	double num2 = 3.0;
//	printf("double�� ������ =%d\n", sizeof(num2));
//
//	char num3 = 'a';
//	printf("char�� ������ = %d\n", sizeof(num3));
//
//	int iarr[3];
//	printf("iarr[ ]�� ������ = %d\n",sizeof(iarr));
//
//	double darr[4];
//	printf("darr [ ]�� ������ = %d\n", sizeof(darr));
//
//	int* iptr = &num1; // ������ ����
//	printf("iptr[ ]�� ������ = %d\n", sizeof(iptr));
//
//	double* dptr = &num2;
//	printf("dptr[ ]�� ������ = %d\n", sizeof(dptr));
//
//	return 0;
//}