//#include <iostream>
//
//int&& func(int& ref) {
//
//	ref++;
//	//return ref;    //lvalue
//	return ref++;	//rvalue
//}
//int main(void) {
//
//	int n = 10;
//	int&& ref = func(n);
//	std::cout << ref << std::endl;
//
//	return 0;
//}