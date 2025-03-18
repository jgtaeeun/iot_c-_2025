
//#include <iostream>
//
//int& func(int& anum) {
//	anum++;
//	return anum;				//리턴값은 참조자이다.
//}
//
//int main(void) {
//
//	int num = 10;
//	int& res1 = func(num);      // res1은 참조자anum을 참조한다.
//	int& res2 = res1;
//	int res = func(num);
//	std::cout << "num" << num << std::endl;
//	std::cout << "res2" << res2 << std::endl;
//	std::cout << "res" << num << std::endl;
//	return 0;
//}