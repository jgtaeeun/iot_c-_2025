//#include <iostream>
//
//class MyClass {
//private:
//	int num;
//public:
//	MyClass(int n) : num(n) {
//		std::cout << this << "������" << std::endl;
//	}
//
//	//���������
//	MyClass(const MyClass& other) :num(other.num) {
//		std::cout << this << "���������" << std::endl;
//	}
//
//	//�Ҹ���
//	~MyClass() {
//		std::cout << this << "�Ҹ���" << std::endl;
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
//	MyClass obj(10);			//������
//	MyClass obj2(func(obj));	//�Ű��������� obj�������� ��������� obj2
//	std::cout << "bye" << std::endl;
//	return 0;
//}