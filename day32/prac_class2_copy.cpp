//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Printer {
//
//private:
//	char* str;
//
//public:
//	void setString(const char* s) {
//		//동적할당이 필요한 이유
//		/*초기화되지 않은 포인터 사용: char* 포인터는 메모리 주소를 저장하는 변수이므로, 초기화되지 않은 상태로 사용할 경우 쓰레기 값을 참조할 수 있습니다. */
//		str = new char[strlen(s) + 1];  
//
//		strcpy(str, s);
//	}
//
//	void showString() {
//		std::cout << str << std::endl;
//	}
//
//	~Printer() {
//
//		delete[] str;
//	}
//
//};
//int main(void) {
//	Printer p;
//	p.setString("hello world!");
//	p.showString();
//
//	Printer p2;
//	p2.setString("I love c++");
//	p2.showString();
//	return 0;
//}