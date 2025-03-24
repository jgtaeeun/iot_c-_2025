/*  public 상속에서
	부모클래스의 멤버변수가 protected일 때
	자식클래스가 부모클래스의 멤버변수에 접근가능
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
//		std::cout << "이름: " << name << ", " << "나이: " << age << std::endl;
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
//		std::cout << "이름: " << name << ", " << "나이: " << age << std::endl;
//		std::cout << "학번: " << studentId << std::endl;
//	}
//};
//
//int main(void) {
//	Human h("홍길동", 55);
//	h.showHuman();
//	Student s("이몽룡", 45, 20145265);
//	s.showStudent();
//	
//	return 0;
//}