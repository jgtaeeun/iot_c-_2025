/*
	step4.
	char 포인터의 name
	int타입의 age
	출력을 담당하는 showHuman()
	클래스 Human

	name을 동적할당하고 , 나이 30 이름 홍명보인 man객체를 생성하시오
	man객체를 복사하여 copyman 객체를 생성하시오.

	xman = man이 실행시키시오. 
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
//		/*
//		name이 초기화되지 않아 **쓰레기 값(잘못된 포인터 주소)**을 가질 가능성이 높아.
//
//		🚨 잘못된 흐름
//		xman이 생성될 때, name에 nullptr이 아닌 쓰레기 값이 들어갈 수 있음.
//		operator=를 호출하면, delete[] name;이 실행됨.
//		하지만 name이 올바른 메모리를 가리키지 않으면 런타임 오류(크래시) 발생!
//		*/
//		
//		if (pn) {
//			name = new char[strlen(pn) + 1];
//			strcpy(name, pn);
//		}
//		else {
//			name = new char[1];
//			name[0] = '\0';
//		}
//		
//		
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
//	//깊은 복사- 대입연산자 오버로딩
//	Human& operator= (const Human& other) {
//		if (this != &other) {  // 자기 자신 대입 방지
//			delete[] name;  // 기존 메모리 해제 (중요!)
//
//			name = new char[strlen(other.name) + 1];  // 새로운 메모리 할당
//			strcpy(name, other.name);
//			age = other.age;
//		}
//
//		return *this;
//	}
//
//	void showHuman() {
//		std::cout << name << ", " << age << std::endl;
//	}
//};
//
//
//int main(void) {
//	Human man("홍명보", 30);		//생성자
//	man.showHuman();
//
//	Human copyman(man);				//복사생성자
//	copyman.showHuman();
//
//	Human xman;
//	xman=copyman;				//대입연산자 호출 - 얕은 복사면 에러나기에 대입연산자 오버로딩 필요하다.
//	xman.showHuman();
//	return 0;
//}