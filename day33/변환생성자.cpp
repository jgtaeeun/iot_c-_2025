/*
	변환 생성자
	다른 타입의 객체로 변환될 때 자동으로 호출되는 생성자
	입력을 한개만 가지는 생성자와 유사
*/

//#include <iostream>
//
//class MyClass {
//
//private:
//	int val;
//public:
//	MyClass(int v) {
//		std::cout << "변환 생성자 호출" << std::endl;
//		this->val = v;
//	}
//	void printMyClass() {
//		std::cout << "MyClass의 멤버변수 val: " << val << std::endl;
//	}
//};
//
//int main(void) {
//	//MyClass m;	//디폴트생성자가 없으므로
//	
//	MyClass m = 30;   //int타입의 30이 변환생성자로  MyClass타입이 되었다. 
//	m.printMyClass();
//
//	MyClass m2(60);
//	m2.printMyClass();
//	return 0;
//}