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
//	int age;
//
//public :
//	MyClass() {}
//
//	MyClass(int i_id, const char* i_name, int i_age){   // const 포인터변수인 이유는 데이터상수 목적으로 (값변경 불가)
//		id = i_id;
//
//		//std::cout << strlen(i_name) << std::endl;
//		
//		
//		name = new char[strlen(i_name)+1];  // 포인터변수=배열이름=배열의 첫번째주소 =>str(배열이름)   
//											// 동적 메모리 할당 시 +1을 하는 이유는 널 종료 문자(null terminator, '\0')를 저장하기 위해서입니다.
//		strcpy(name, i_name);
//		age = i_age;
//	}
//	
//	void printData(){
//		std::cout << "MyClass의 인스턴스입니다.";
//		std::cout << "아이디: " << id << " 이름 :" << name << " 나이: " << age << std::endl;
//		
//	}
//	//소멸자(자동호출된다.)- 동적할당경우 말고는 별도로 작성할 필요가 없다.
//	~MyClass(){
//		
//		delete[] name;
//	}
//};
//
//int main(void) {
//	
//	MyClass m (5, "오수아", 32);
//	m.printData();
//	
//	return 0;
//
//}