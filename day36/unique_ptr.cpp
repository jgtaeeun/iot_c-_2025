/*
	����Ʈ ������: unique_ptr
	��ü�� �����ֱ⸦ ��ü�� �ñ����� ���α׷����� �޸� ���� �δ��� �ٿ��ش�.
*/

//#include <iostream>
//using namespace std;
//
//class MyClass {
//
//public:
//	MyClass() { std::cout << "������" << std::endl; }
//	~MyClass() { std::cout << "�Ҹ���" << std::endl; }
//};
//
//int main(void) {
//
//	unique_ptr<MyClass> ptr(new MyClass{});
//	unique_ptr<MyClass> ptr2 = move(ptr);   //ptr�� �������� ptr2�� �̵���ŵ�ϴ�. ��, ptr�� ���� nullptr�� �ǰ�, ptr2�� �� ��ü�� �����ϰ� �˴ϴ�.
//	
//	return 0;
//}