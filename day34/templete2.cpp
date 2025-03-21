//#include <iostream>
//
//template <typename T>	//템플릿 선언(일반화)
//T func(T a, T b) {
//	std::cout << "T" << std::endl;
//	return a + b;
//}
//
//template<>				//템플릿 특수화- 템플릿 일반화 중 특별한 타입만 처리
//int func<int>(int a, int b) {
//	std::cout << "int" << std::endl;
//	return a + b;
//
//}
//
//int main(void) {
//	 /*
//	  여기서 3과 21은 int 타입으로 자동으로 추론되어 func<int>가 호출됩니다.
//	  이때 "int"가 출력되고, 두 값의 합인 24가 출력됩니다.
//	 */
//	std::cout << func(3, 21) << std::endl;
//
//
//	/*
//	func(0.7, 9.9): 0.7과 9.9는 double 타입으로 자동으로 추론되어 func<double>가 호출됩니다.
//	이때 "T"가 출력되고, 10.6이 출력됩니다.
//	*/
//	std::cout << func(0.7, 9.9) << std::endl;
//
//
//	/*
//	 여기서는 명시적으로 템플릿을 double로 지정하여 호출합니다. 
//	 "T"가 출력되고, 30.3이 출력됩니다.
//	*/
//	std::cout << func<double>(10.1,20.2) << std::endl;    //명시적 선언
//
//	/*
//	명시적으로 int 타입으로 호출하므로 "int"가 출력되고, 30이 출력됩니다.
//	*/
//	std::cout << func<int>(10, 20) << std::endl;
//	return 0;
//}