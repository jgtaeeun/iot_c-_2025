///*
//	Inheritance(���)	
//	private, protected, public
//	is a (������ �����̴�) , has a (����) ���谡 �����ؾ� �Ѵ�.
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//// �θ�Ŭ����, ����(base)Ŭ����, ����Ŭ����
//class Human {
//private:
//	char name[20];
//	int age;
//public:
//	Human(const char*, int);
//	void getData();
//};
//
//// �ڽ�Ŭ����, ����(derived)Ŭ����, ����Ŭ����
///*
//	��ӹ��� ������� ����� �θ�Ŭ������ �����ڿ��� �ʱ�ȭ�� �Ѵ�.
//*/
//class Student : public Human {
//private:
//	int studentId;
//public:
//	Student(const char* name, int age, int studentId) ;
//	void showStudent();
//};
//
//Human::Human(const char* aname, int aage) {
//	age = aage;
//	strcpy(name, aname);
//}
//
//void Human::getData() {
//	std::cout << "�̸� : " << name << ", " << "���� : " << age << std::endl;
//}
//
//
//Student::Student(const char* name, int age, int studentId) : Human(name, age) {
//	this->studentId = studentId;
//}
//void Student::showStudent() {
//	getData();
//	
//	std::cout << "�й� : " << studentId << std::endl;
//}
//
//int main(void) {
//
//	Human h("ȫ�浿", 50);
//	h.getData();
//	Student s("������", 20, 2020123556);
//	s.getData();
//	s.showStudent();
//	return 0;
//}