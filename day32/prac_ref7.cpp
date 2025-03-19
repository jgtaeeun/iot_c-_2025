//#include <iostream>
//
//int main(void) {
//
//	const int num = 12; //상수이므로 직접 변경 불가능, 포인터 변수나 참조자로 값 변경해야함
//	const int* p = &num;   //데이터상수 (주소변경가능, 값변경 불가)
//	
//	const int& ref = *p;  //상수참조자
//
//	std::cout << "포인터 변수 p가 가리키는 값: " << *p << std::endl;
//	std::cout << "참조자 ref: " << ref << std::endl;
//
//
//
//
//
//	return 0;
//}