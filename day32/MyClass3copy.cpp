///*
//	�����Ҵ� -������ ����
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class MyClass {
//
//private:
//	int id;
//	char* name;
//	mutable int age;
//
//public:
//	MyClass() {}
//
//	MyClass(int i_id, const char* i_name, int i_age);
//
//	void printData () const;
//
//	~MyClass() {
//
//		delete[] name;
//	}
//};
//
//int main(void) {
//
//	MyClass m(5, "������", 32);
//	m.printData();
//
//	return 0;
//
//}
//
//
//MyClass::MyClass(int i_id, const char* i_name, int i_age) {  
//	id = i_id;
//
//	name = new char[strlen(i_name) + 1];  
//	strcpy(name, i_name);
//
//	age = i_age;
//}
//
//void MyClass:: printData() const{
//	std::cout << "MyClass�� �ν��Ͻ��Դϴ�.";
//	std::cout << "���̵�: " << id << " �̸� :" << name << " ����: " << age << std::endl;
//	//id = 2;   //����Լ��� id, name, age�� ����̱⿡ lvaule�� �� �� ����.
//	age = 25;  //����Լ��� age�� ������������� Ŭ���� ����������� mutable�� ���� ���ȭ�� ���⿡ lvalue�� ������ �� �� �ִ�.
//}