/*
	함수오버로딩 중에서 디폴트 매개변수와 입력이 없는 순수한 함수정의가 있을 때 
	입력없는 함수 호출시 문제가 발생한다.

	
*/


//#include <iostream>
//
//int func(int n = 0){
//	return n * n;
//}
//
//int func() {
//	return 10;
//}
//int main(void) {
//
//	std::cout << func(10) << std::endl;
//	std::cout << func() << std::endl;   
//	return 0;
//}