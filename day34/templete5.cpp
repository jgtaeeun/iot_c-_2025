//#include <iostream>
//
//template <typename T>
//class CTest {				//클래스 템플릿 일반화
//private:
//	T num;
//public:
//	CTest (T n) : num(n){}
//	T getData() { 
//		return num;
//	}
//
//};
//
//template <>	
//class CTest<char> {				//클래스 템플릿 특수화
//private:
//	char data;
//public:
//	CTest(char d) : data(d){}
//	char getData() {
//		return data;
//	}
//
//};
//
//
//int main(void) {
//	CTest<int> obj(10);	//클래스 템플릿은 인스턴스 생성시 반드시 typename을 작성해야 한다.
//	std::cout << obj.getData() << std::endl;
//	
//	CTest<char> obj2('a');
//	std::cout << obj2.getData() << std::endl;
//	return 0;
//}