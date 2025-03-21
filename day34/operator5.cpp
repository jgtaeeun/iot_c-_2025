///*
//	멤버함수 연산자 오버로딩
//	p1 operator연산자(p2)
//	ex)p1 operator+(p2)
//*/
//#include <iostream>
//
//class MyClass {
//
//private:
//	int value;
//public:
//	MyClass(int n=0) :value(n) {
//	}
//
//	MyClass(const MyClass& other) {
//		std::cout << "복사생성자" << std::endl;
//		value = other.value;
//	}
//
//	void showMyClass() {
//		std::cout << "value: " <<value << std::endl;
//	}
//	MyClass& operator+(const MyClass& other) {
//		std::cout << "연산자 오버로딩" << std::endl;
//		this->value += other.value;
//		return *this;
//	}
//
//	
//};
//int main() {
//	MyClass obj(10);			//입력이 1개인 생성자
//	obj.showMyClass();
//	
//	MyClass obj2(obj);			//디폴트 복사생성자   
//	obj2.showMyClass();
//
//	MyClass obj3 = obj2;		//디폴트 복사생성자   
//	obj3.showMyClass();
//
//	MyClass obj4 = obj + obj2;   //객체끼리 더한 결과로 객체생성, 연산자 오버로딩 + 복사생성자
//	obj4.showMyClass();
//	obj.showMyClass();
//
//
//	MyClass obj5 = obj.operator+(obj2);   
//	obj5.showMyClass();
//	obj.showMyClass();
//
//	//MyClass obj6_ver1 = obj + obj2 + obj5;
//	//obj6_ver1.showMyClass();
//	//obj.showMyClass();
//
//	MyClass obj6_ver2 = obj.operator+(obj2).operator+(obj5);
//	obj6_ver2.showMyClass();
//	obj.showMyClass();
//	return 0;
//}