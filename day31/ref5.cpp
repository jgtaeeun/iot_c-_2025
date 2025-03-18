//#include <iostream>
//
//
//int func(int anum) {
//	anum++;
//	return anum;
//}
//
//int main(void) {
//
//	int num = 10;
//	int res = func(num);
//	//int& res1 =func(num);   // 함수종료시 지역변수 anum은 사라짐
//	const int& res1 =func(num);   // 리턴값을 상수레퍼렌스로 상수참조자
//	std::cout << "num:" << num << std::endl;
//	std::cout << "res:" << res << std::endl;
//	std::cout << "res:" << res1 << std::endl;
//	return 0;
//}