//#include <stdio.h>
//
///*
//	자료형(상자의 형태)의 크기
//	int, double, char, [], * 
//*/
//
//int main() {
//
//	int num1 = 5;
//	printf("int 의 사이즈 =%d\n", sizeof(num1)); //4
//	// llu : unsigned long long
//
//	double num2 = 3.0;
//	printf("double의 사이즈 =%d\n", sizeof(num2));
//
//	char num3 = 'a';
//	printf("char의 사이즈 = %d\n", sizeof(num3));
//
//	int iarr[3];
//	printf("iarr[ ]의 사이즈 = %d\n",sizeof(iarr));
//
//	double darr[4];
//	printf("darr [ ]의 사이즈 = %d\n", sizeof(darr));
//
//	int* iptr = &num1; // 포인터 변수
//	printf("iptr[ ]의 사이즈 = %d\n", sizeof(iptr));
//
//	double* dptr = &num2;
//	printf("dptr[ ]의 사이즈 = %d\n", sizeof(dptr));
//
//	return 0;
//}