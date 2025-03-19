//#include <iostream>
//
//int main(void) {
//
//	int num = 3;	// 복사초기하
//	int num2(30);	//직접 초기화
//	int num3{ 300 }; //중괄호 직접 초기화
//	int num4 = { 3000 }; //중괄호 복사초기화
//
//	int x = 3.14;
//	int x1{3.14};		//double에서 int로의 변환에는 축소변환필요하다. 오류C2397
//
//	std::cout << num << std::endl;
//	std::cout << num2 << std::endl;
//	std::cout << num3 << std::endl;
//	std::cout << num4 << std::endl;
//	std::cout << x << std::endl;     //3
//
//
//	return 0;
//}