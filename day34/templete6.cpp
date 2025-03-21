//#include <iostream>
//
//template <typename T , int sz>
//class CTest {
//private:
//	T ary[sz];
//public:
//	// 배열 인덱스 접근 연산자 오버로딩
//	/*
//	T& operator[](int idx)에서 반환 타입이 T& (즉, 참조 타입)인 이유는 
//	해당 인덱스에 있는 값을 수정 가능하게 하기 위함입니다.
//	*/
//	T& operator[](int idx) {
//		if (idx < 0 || idx >= sz) {
//			std::cout << "error" << std::endl;
//			exit(1);
//		}
//		return ary[idx];
//	}
//
//	void printData() {
//		for (int i = 0; i < sz; i++) {
//			std::cout << ary[i] << std::endl;
//		}
//	}
//};
//int main(void) {
//	CTest<int, 5> obj;
//	obj.operator[](0) = 10;
//	obj[1] = 11;
//	obj[2] = 20;
//	obj[3] = 50;
//	obj[4] = 55;
//	obj.printData();
//
//	return 0;
//}