/*

	weak_ptr : ���۷��� ī��Ʈ�� ������ ���� �ʴ� ����Ʈ ������
				��ȯ���� ����


*/


//#include <iostream>
//
//class MyClass {
//
//public:
//	MyClass() { std::cout << "������" << std::endl; }
//	~MyClass() { std::cout << "�Ҹ���" << std::endl; }
//	void func(){ std::cout << "weak_ptr" << std::endl; }
//};
//
//int main(void) {
//	std::shared_ptr<MyClass> ptr = std::make_shared<MyClass>();			//c++14���ĺ��� ����
//	std::weak_ptr<MyClass> weakptr = ptr;
//
//
//	std::shared_ptr<MyClass> ptr2 = weakptr.lock();     //weak_ptr���� shared_ptr�� ��ȯ
//	if (ptr2) { std::cout << "weak_ptr�� ��ȯ�� shared_ptr ��밡�� " << std::endl; }
//
//	return 0;
//}