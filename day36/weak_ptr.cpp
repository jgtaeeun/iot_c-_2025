/*

	weak_ptr : 레퍼런스 카운트에 영향을 주지 않는 스마트 포인터
				순환참조 방지


*/


//#include <iostream>
//
//class MyClass {
//
//public:
//	MyClass() { std::cout << "생성자" << std::endl; }
//	~MyClass() { std::cout << "소멸자" << std::endl; }
//	void func(){ std::cout << "weak_ptr" << std::endl; }
//};
//
//int main(void) {
//	std::shared_ptr<MyClass> ptr = std::make_shared<MyClass>();			//c++14이후부터 지원
//	std::weak_ptr<MyClass> weakptr = ptr;
//
//
//	std::shared_ptr<MyClass> ptr2 = weakptr.lock();     //weak_ptr에서 shared_ptr로 변환
//	if (ptr2) { std::cout << "weak_ptr로 변환한 shared_ptr 사용가능 " << std::endl; }
//
//	return 0;
//}