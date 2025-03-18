/*
	다른 함수에 선언된 지역변수의 값을 바꾸는 방법2
	레퍼런스 - 또 다른 이름, 보이지 않는 포인터 , 메로리를 사용하지 않는다.
*/

//#include <iostream>
//using namespace std;
//
//void chFunc(int& rn);		//참조자 선언 표시 &
//
//int main(void) {
//
//	int n = 10;
//	std::cout << "호출 전 n : " << n << std::endl;
//	chFunc(n);
//	std::cout << "호출 후 n : " << n << std::endl;
//	
//	return 0;
//
//}
//
//void chFunc(int& rn) {
//
//	rn = 20;
//}