///*
//	Inheritance(상속)	
//	private, protected, public
//	is a (무엇은 무엇이다) , has a (소유) 관계가 성립해야 한다.
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//// 부모클래스, 기초(base)클래스, 슈퍼클래스
//class Human {
//private:
//	char name[20];
//	int age;
//public:
//	Human(const char*, int);
//	void getData();
//};
//
//// 자식클래스, 유도(derived)클래스, 서브클래스
///*
//	상속받은 멤버들은 상속한 부모클래스의 생성자에서 초기화를 한다.
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
//	std::cout << "이름 : " << name << ", " << "나이 : " << age << std::endl;
//}
//
//
//Student::Student(const char* name, int age, int studentId) : Human(name, age) {
//	this->studentId = studentId;
//}
//void Student::showStudent() {
//	getData();
//	
//	std::cout << "학번 : " << studentId << std::endl;
//}
//
//int main(void) {
//
//	Human h("홍길동", 50);
//	h.getData();
//	Student s("강산해", 20, 2020123556);
//	s.getData();
//	s.showStudent();
//	return 0;
//}