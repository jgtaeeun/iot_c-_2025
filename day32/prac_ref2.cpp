/*
	함수 내에서, 참조자를 통한 값의 변경을 진행하지 않을 경우, 참조자를 const로 선언해서, 함수의 형만 봐도 값의 변경이 이뤄지지 않음을 알 수 있게 한다.
*/

//#include <iostream>
//
//void swap(const int& n) {
//	//n = 10;   //상수참조자는 값변경할 수 없다. lvalue는 변수여야하는데 이코드는 상수이다.
//}
//int main(void) {
//
//	int num1 = 5;
//	swap(num1);
//	std::cout << num1 << std::endl;
//	return 0;
//}