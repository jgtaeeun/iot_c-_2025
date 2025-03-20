///*
//	복사생성자
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//
//private:
//	int m_age;
//	char m_name[20];
//
//public :
//	Person(int age, const char* c) {
//		std::cout << "Constructor call~" << std::endl;
//		this->m_age = age;
//		strcpy(this->m_name, c);
//	}
//	//복사생성자
//	Person(const Person& other){			//매개변수가 Person 객체일 경우, 복사생성자 무한반복 E0408
//											// 원본객체 other은 변하면 안되므로 상수const
//		std::cout << "Copy Constructor call~" << std::endl;
//		this->m_age = other.m_age;
//		strncpy(this->m_name, other.m_name, strlen(other.m_name)+1);		//널문자포함
//
//	}
//
//	void getData() {
//		std::cout << "age: " << this->m_age << " , name: " << this->m_name << std::endl;
//		//std::cout << "this:" << this << std::endl;
//	}
//};
//int main(void) {
//	Person p(23, "오수아");
//	p.getData();
//
//	Person p2(p);
//	p2.getData();
//
//	return 0;
//}