/*
	다른 함수에 선언된 지역변수의 값을 바꾸는 방법1

*/


//#include <iostream>
//
//
//void chFunc(int *p);
//
//int main(void) {
//
//	int n = 10;
//	std::cout << "호출 전 n : " << n << std::endl;
//	chFunc(&n);
//	std::cout << "호출 후 n : " << n << std::endl;
//
//	return 0;
//}
//
//
//
//void chFunc(int* p) {
//
//	*p = 20;
//}