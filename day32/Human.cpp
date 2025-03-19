///*
//	step1. 이름과 전화번호는 동적할당
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human {
//
//private:
//	char* pname;
//	int age;
//	char* ptel;
//
//public:
//	Human(const char* name, int i_age , const char* tel){
//		pname = new char[strlen(name)+1];		//동적할당할 때, 문자열은 널문자 포함해야해서 +1한다.
//		strcpy(pname, name);					//문자열 처리
//		
//		age = i_age;
//		
//		ptel = new char[strlen(tel)+1];
//		strcpy(ptel, tel);
//	}
//	~Human() {					//동적할당 해제는 소멸자에서 한다.
//		delete[] pname;					
//		delete[] ptel;
//	}
//	void getData() {
//		std::cout << "[pname, age, ptel] = " << pname << ", " << age << ", " << ptel << std::endl;
//	}
//};
//
//int main() {
//	Human h("홍길동", 30, "010-1234-1234");   //문자열 상수는 포인터변수로 전달
//	h.getData();
//
//	return 0;
//}