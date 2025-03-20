/*
	explicit - 변환생성자 못함. 
*/

//#include <iostream>
//
//class MyClass {
//
//private:
//	int value;
//
//public:
//	explicit MyClass(int value) {
//		std::cout << "변환생성자 호출" << std::endl;
//		this->value = value;
//	}
//	void printMyClass() {
//		std::cout << "value: " << value << std::endl;
//	}
//};
//int main(void) {
//	
//	//MyClass obj = 10;		//변환생성자
//	//obj.printMyClass();
//
//	MyClass obj2(20);		//생성자
//	obj2.printMyClass();
//	return 0;
//}