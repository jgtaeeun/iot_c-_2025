///*
//	이동생성자(&&)
//	r-value 참조를 파라미터로 갖는 이동 생성자
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human {
//private:
//	char name[10];
//	int age;
//public:
//	//입력이 2개인 생성자 (생성자 오버로딩)
//	Human(const char* name, int age) {
//		std::cout << "입력이 2개인 생성자(생성자 오버로딩)" << std::endl;
//		strcpy(this->name, name);
//		this->age = age;
//	}
//	//복사생성자
//	Human (const Human& other){
//		std::cout << "복사생성자(const, 참조연산자&)" << std::endl;
//		strcpy(this->name, other.name);
//		this->age = other.age;
//	}
//	//이동생성자 - 값 복사가 아니라 값이 이동이다.
//	Human(Human&& other) noexcept{
//		std::cout << "이동생성자(r-value참조)" << std::endl;
//		strcpy(this->name, other.name);
//		this->age = other.age;
//	}
//	void printHuman() {
//		printf("[이름|나이] %s %d\n", this->name, this->age);
//	}
//};
//int main(void) {
//	
//	Human h("day6", 4);
//	std::cout << "h의 주소" << &h << std::endl;  //h의 주소0000002773B8F698
//	h.printHuman();
//	Human h2(h);
//	std::cout << "h2의 주소" << &h2 << std::endl; //h2의 주소0000002773B8F6C8
//	h2.printHuman();
//	Human h3(std::move(h));
//	std::cout << "h3의 주소" << &h3 << std::endl; //h3의 주소0000002773B8F6F8
//	h3.printHuman();
//	return 0;
//}