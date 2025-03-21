//#include <iostream>
//
//class MyClass {
//private:
//	int value;
//public:
//	MyClass(int n) :value(n){}
//	friend std::ostream& operator<< (std::ostream& out, const MyClass& other);
//};
//
//std::ostream& operator<< (std::ostream& out, const MyClass& other) {
//	out << other.value;   //private 멤버변수 접근 위해 friend 필요하다.
//	return out;
//}
//int main(void) {
//	MyClass obj(41);
//	std::cout << obj << std::endl;   //출력 연산자 오버로딩 필요하다.
//	return 0;
//}