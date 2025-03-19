//#include <iostream>
//
//int& plus(int& ref) {
//	ref++;
//	return ref;
//}
//int main(void) {
//
//	int num = 1;
//	int& num2 = plus(num);  //num과 num2의 주소 다르다.
//
//	num += 1;
//	num2 += 100;
//	std::cout << "num: " << num << std::endl;  //103
//	std::cout << "num2: " << num2 << std::endl; //103
//	std::cout << "num의 주소: " << &num << std::endl;  //  000000D73E8FF954
//	std::cout << "num2의 주소: " << &num2 << std::endl; // 000000D73E8FF954
//
//	return 0;
//}