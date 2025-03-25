//#include <iostream>
//
//class MyClass {
//private:
//	int num;
//public:
//	MyClass(int n) : num(n) {
//		std::cout << this << "생성자" << std::endl;
//	}
//
//	//복사생성자
//	MyClass(const MyClass& other) :num(other.num) {
//		std::cout << this << "복사생성자" << std::endl;
//	}
//
//	//소멸자
//	~MyClass() {
//		std::cout << this << "소멸자" << std::endl;
//	}
//
//	void setData(int n) {
//		num = n;
//	}
//
//};
//
//MyClass func(MyClass& obj) {
//	std::cout << "func()" << std::endl;
//	return obj;
//}
//
//int main(void) {
//	MyClass obj(10);			//생성자
//	MyClass obj2(func(obj));	//매개변수에서 obj참조값을 복사생성한 obj2
//	std::cout << "bye" << std::endl;
//	return 0;
//}