/*  public ��ӿ���
	�θ�Ŭ������ ��������� protected�� ��
	�ڽ�Ŭ������ �θ�Ŭ������ ��������� ���ٰ���
*/

//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//
//class Human {
//
//protected:
//	char name[20];
//	int age;
//public:
//	Human(const char* aname, int aage) {
//		age = aage;
//		strcpy(name, aname);
//	}
//	void showHuman() {
//		std::cout << "�̸�: " << name << ", " << "����: " << age << std::endl;
//	}
//
//};
//
//class Student  : public Human{
//private:
//	int studentId;
//public:
//	Student (const char * aname, int aage, int astudentId) : Human(aname, aage){
//		studentId = astudentId;
//	}
//	void showStudent() {
//		std::cout << "�̸�: " << name << ", " << "����: " << age << std::endl;
//		std::cout << "�й�: " << studentId << std::endl;
//	}
//};
//
//int main(void) {
//	Human h("ȫ�浿", 55);
//	h.showHuman();
//	Student s("�̸���", 45, 20145265);
//	s.showStudent();
//	
//	return 0;
//}