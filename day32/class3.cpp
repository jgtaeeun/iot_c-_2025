//#include <iostream>
//
//
//class MyClass {
//
//private :
//	int m_num1;
//	int m_num2;
//
//public :
//	//디폴트 생성자
//	MyClass(){}
//
//	MyClass(int a, int b) {
//		m_num1 = a;
//		m_num2 = b;
//	}
//	MyClass(int a) {
//		m_num1 = a;
//		m_num2 = a;
//	}
//	~MyClass() {}
//	void printData() {
//		std::cout << "나는 MyClass의 인스턴스입니다. ";
//		std::cout << "m_num1: " << m_num1 << " m_num2: " << m_num2 << std::endl;
//
//	}
//	
//
//};
//int main(void) {
//	MyClass obj; //디폴트 생성자로 객체 생성
//	//obj.printData();
//
//	MyClass obj2(100, 200);
//	obj2.printData();
//
//	MyClass obj3(150);
//	obj3.printData();
//	return 0;
//}