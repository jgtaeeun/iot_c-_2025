//#include <iostream>
//
//
//
//int main(void) {
//
//	int num = 10;
//	std::cout << ++num << std::endl;
//
//	const int num2 = 10;
//	//std::cout << ++num2 << std::endl;   //const는 상수이다. lvalue여야하는데 아니기에 에러난다.
//
// 
///*
//* const_cast 예외: 잘못된 사용
//상수 객체 num2의 값을 변경하려고 하므로 정의되지 않은 동작을 유발합니다.
//num2이 상수로 선언되어 있기 때문에 컴파일러가 이를 최적화할 수도 있으며, 프로그램이 예상대로 동작하지 않을 수 있습니다.
//*/ 
// 
//	int* np = const_cast<int*>(&num2);
//	*np += 1;     //num2를 바꾸는 것은 상수기에 불가능하다.
//	std::cout << num2 << std::endl;
//	return 0;
//}