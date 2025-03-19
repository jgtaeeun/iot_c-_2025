//#include <iostream>
//
//int& plus(int n) {
//	int num = 100;
//	num += n;
//	return num;
//}
//int main(void) {
//
//	int n = 50;
//	int& ref = plus(n);  
//	std::cout << "ref: " << ref << std::endl;   //ref: -858993460 쓰레기값이다.
//	return 0;
//}