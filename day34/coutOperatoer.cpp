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
//	out << other.value;   //private ������� ���� ���� friend �ʿ��ϴ�.
//	return out;
//}
//int main(void) {
//	MyClass obj(41);
//	std::cout << obj << std::endl;   //��� ������ �����ε� �ʿ��ϴ�.
//	return 0;
//}