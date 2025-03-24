//#include <iostream>
//
//class Base {
//public:
//	void show() { printf("Base Class!\n"); }
//};
//
//
//class Derived : public Base {
//public:
//	void show() { printf("Derived Class!\n"); }	//함수오버라이딩
//};
//
//
//int main(void) {
//	Base* bptr = nullptr;
//	Derived* dptr = nullptr;
//
//	Derived  obj;	//파생클래스 객체
//	dptr = &obj;
//	dptr->show();	//Derived Class!
//					
//	/*부모와 자식클래스의 타입이 다른데 어떻게 다른 타입의 포인터로 가리킬 수 있을까?*/
//	bptr = &obj;	// 부모타입의 포인터로 자식타입의 객체를 가리키면 객체가 부모타입으로 업개스팅 된다.
//	bptr->show();   //Base Class!
//	return 0;
//}