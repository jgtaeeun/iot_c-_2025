//#include <iostream>
//#include <vector>
//
//
//int main(void) {
//
//	std::vector<int> v = { 10,20,30,40,50 };
//
//	std::vector<int>::reverse_iterator rit;
//	for (rit = v.rbegin(); rit != v.rend(); rit++) {
//		std::cout << *rit << std::endl;
//	}
//
//	for (auto rit = v.rbegin(); rit != v.rend(); rit++) {
//		std::cout << *rit << std::endl;
//
//	}
//	return 0;
//}
//
//
///*
//
//	std::vector<int>:: reverse_iterator rit;은 역방향 반복자 선언
//	근데 이놈을 생략하고 auto선언해도 된다.
//	rbegin()은 마지막주소, rend()은 처음 원소의 이전주소
//*/