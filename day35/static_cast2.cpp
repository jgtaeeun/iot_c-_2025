//#include <iostream>
//
//
//class Base {
//public:
//	void func1() { std::cout << "Base::func1()" << std::endl; }
//	
//};
//
//class Derived : public Base {
//public:
//	void func() { std::cout << "Derived::func()" << std::endl; }
//	void func1() { std::cout << "Derived::func1()" << std::endl; }
//
//};
//
//class Derived2 : public Derived {
//public:
//	void func() { std::cout << "Derived2::func()" << std::endl; }
//	void func1() { std::cout << "Derived2::func1()" << std::endl; }
//};
//int main(void) {
//	Base* bptr;
//	Derived obj;
//	bptr = static_cast<Base*>(&obj);	//업캐스팅 
//	bptr->func1();		//부모클래스의 멤버에만 접근가능
//	
//	Base obj2;
//	Derived* dptr;
//	dptr = static_cast<Derived*>(&obj2);	//다운캐스팅
//	dptr->func();	//자식클래스Derived의 멤버에만 접근가능
//	dptr->func1();
//
//	Derived2* d2ptr = static_cast<Derived2*>(dptr);	//다운캐스팅
//	d2ptr->func();	//자식클래스Derived2의 멤버에만 접근가능
//	d2ptr->func1();
//	return 0;
//}