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
//	//����Ʈ ������
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
//		std::cout << "���� MyClass�� �ν��Ͻ��Դϴ�. ";
//		std::cout << "m_num1: " << m_num1 << " m_num2: " << m_num2 << std::endl;
//
//	}
//	
//
//};
//int main(void) {
//	MyClass obj; //����Ʈ �����ڷ� ��ü ����
//	//obj.printData();
//
//	MyClass obj2(100, 200);
//	obj2.printData();
//
//	MyClass obj3(150);
//	obj3.printData();
//	return 0;
//}