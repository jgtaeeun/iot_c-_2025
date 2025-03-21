/*
	step3.
	char 포인터의 name
	int타입의 age
	출력을 담당하는 showHuman()
	클래스 Human

	name을 동적할당하고 , 나이 30 이름 홍명보인 man객체를 생성하시오
	man객체를 복사하여 copyman 객체를 생성하시오.
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human {
//private:
//	char* name;
//	int age;
//public:
//	Human(const char* pn = nullptr, int i_age =0)   {
//		std::cout << "생성자" << std::endl;
//		age = i_age;
//		name = new char[strlen(pn) + 1];
//		strcpy(name, pn);
//	}
//	Human(const Human& other) {
//		std::cout << "복사생성자" << std::endl;
//		name = new char[strlen(other.name) + 1];
//		strcpy(name, other.name);
//		age = other.age;
//	}
//	~Human() {
//		std::cout <<"소멸자" << std::endl;
//		delete[] name;
//	}
//
//	void showHuman() {
//		std::cout << name << ", " << age << std::endl;
//	}
//};
//
//int main(void) {
//	Human man("홍명보", 30);		//생성자
//	man.showHuman();
//
//	Human copyman(man);				//복사생성자
//	copyman.showHuman();
//
//
//	return 0;
//}