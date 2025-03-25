//#include <iostream>
//
//class Super {
//public:
//	virtual void func() { std::cout << "Super::func()" << std::endl; }
//	void func1() { std::cout << "Super::func1()" << std::endl; }
//	void fx() { std::cout << "Super::fx()" << std::endl; }
//};
//
//class Sub : public Super {
//public:
//	void func() override { std::cout << "Sub::func()" << std::endl; }			//가상함수 오버라이딩
//	void func2() { std::cout << "Sub::func2()" << std::endl; }	
//	void fx() { std::cout << "Sub::fx()" << std::endl; }				//함수 오버라이딩
//};
//
//int main(void) {
//	Super* sptr = new Super();
//	sptr->func();
//	sptr->func1();
//	sptr->fx();
//
//	std::cout << "========================================= Upcasting" << std::endl;
//	// 포인터변수타입인 Super클래스의 멤버에만 접근가능하다.	->가상함수필요
//	Super* stpr2 = new Sub();			
//	stpr2->func();
//	stpr2->func1();
//	stpr2->fx();
//	
//
//	std::cout << "========================================= Downcasting" << std::endl;
//	Sub* subptr = dynamic_cast<Sub*>(stpr2);
//	if (subptr != nullptr) {
//		subptr->func();
//		subptr->func1();    //Super 클래스의 func1()을 상속받고, 별도로 오버라이딩하지 않아도 Super 클래스의 func1()을 사용할 수 있습니다.
//		subptr->func2();
//		subptr->fx();
//	}
//	
//	return 0;
//}
//
//
