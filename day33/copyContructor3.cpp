///*
//	깊은복사 동적할당
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//private:
//	int m_age;
//	char* name;
//
//public :
//	Person(int age, const char* p){
//		std::cout << "Constructor call~" << std::endl;
//		m_age = age;
//		name = new char[strlen(p) + 1];
//		strcpy(name, p);
//	}
//	//복사생성자
//	Person(const Person& other){
//		std::cout << "Copy Constructor call~" << std::endl;
//		this->m_age = other.m_age;
//		this->name = new char[strlen(other.name) + 1];
//		strcpy(this->name, other.name);
//	}
//	
//	~Person(){
//		std::cout << "동적할당해제" << std::endl;
//		delete[] name;
//	}
//	void printPerson() {
//		std::cout << "name: "  << name << ", age: " << m_age << std::endl;
//	}
//};
//int main(void) {
//
//	Person p1(45, "이영애");
//	p1.printPerson();
//
//	Person p2(p1);
//	p2.printPerson();
//	return 0;
//}