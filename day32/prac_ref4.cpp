//#include <iostream>
//
//int& plus(int& ref) {
//	ref++;
//	return ref;
//}
//int main(void) {
//
//	int num = 1;
//	int& num2 = plus(num);  //num�� num2�� �ּ� �ٸ���.
//
//	num += 1;
//	num2 += 100;
//	std::cout << "num: " << num << std::endl;  //103
//	std::cout << "num2: " << num2 << std::endl; //103
//	std::cout << "num�� �ּ�: " << &num << std::endl;  //  000000D73E8FF954
//	std::cout << "num2�� �ּ�: " << &num2 << std::endl; // 000000D73E8FF954
//
//	return 0;
//}