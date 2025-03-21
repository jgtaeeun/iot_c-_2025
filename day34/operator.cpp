//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class MyClass {
//
//private:
//	int m_a, m_b;
//	const char* m_name;
//
//public:
//	/*
//	nullptr은 "이 포인터는 아무것도 가리키지 않는다" 라는 의미를 정확하게 전달합니다.
//	nullptr은 nullptr_t 타입을 가지므로, 정수(int 등)로 변환되지 않아 의도치 않은 동작을 방지합니다
//	*/
//	MyClass(int a =0 , int b = 0, const char* name = nullptr) : m_a(a), m_b(b), m_name(name) {
//	
//	}
//
//	void showMyClass() {
//		std::cout << m_a << ", " << m_b << ", " << m_name << std::endl;
//	}
//};
//
//int main(void) {
//
//	MyClass obj(3, 21, "window");
//	obj.showMyClass();
//
//	/*
//	클래스 MyClass에는 명시적으로 기본 생성자가 정의되어 있지 않지만, 
//	모든 매개변수에 기본값이 제공된 생성자 가 있기 때문에, 
//	이를 이용하여 기본 생성자가 자동으로 제공됩니다.
//	*/
//	MyClass obj2;
//	obj2 = obj;		// 대입 연산(= 연산자 호출) 
//	obj2.showMyClass();
//	return 0;
//}