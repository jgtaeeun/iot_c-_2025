///*
//	동적할당 -포인터 변수
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
//	MyClass m(5, "오수아", 32);
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
//	std::cout << "MyClass의 인스턴스입니다.";
//	std::cout << "아이디: " << id << " 이름 :" << name << " 나이: " << age << std::endl;
//	//id = 2;   //상수함수라서 id, name, age는 상수이기에 lvaule가 될 수 없다.
//	age = 25;  //상수함수라서 age도 상수여야하지만 클래스 멤버변수에서 mutable을 통해 상수화를 막기에 lvalue가 변수라서 될 수 있다.
//}