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
//	nullptr�� "�� �����ʹ� �ƹ��͵� ����Ű�� �ʴ´�" ��� �ǹ̸� ��Ȯ�ϰ� �����մϴ�.
//	nullptr�� nullptr_t Ÿ���� �����Ƿ�, ����(int ��)�� ��ȯ���� �ʾ� �ǵ�ġ ���� ������ �����մϴ�
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
//	Ŭ���� MyClass���� ��������� �⺻ �����ڰ� ���ǵǾ� ���� ������, 
//	��� �Ű������� �⺻���� ������ ������ �� �ֱ� ������, 
//	�̸� �̿��Ͽ� �⺻ �����ڰ� �ڵ����� �����˴ϴ�.
//	*/
//	MyClass obj2;
//	obj2 = obj;		// ���� ����(= ������ ȣ��) 
//	obj2.showMyClass();
//	return 0;
//}