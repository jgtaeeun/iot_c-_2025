/*
	스마트 포인터: unique_ptr
	객체의 생명주기를 객체에 맡김으로 프로그래머의 메모리 관리 부담을 줄여준다.
*/

//#include <iostream>
//using namespace std;
//
//class MyClass {
//
//public:
//	MyClass() { std::cout << "생성자" << std::endl; }
//	~MyClass() { std::cout << "소멸자" << std::endl; }
//};
//
//int main(void) {
//
//	unique_ptr<MyClass> ptr(new MyClass{});
//	unique_ptr<MyClass> ptr2 = move(ptr);   //ptr의 소유권을 ptr2로 이동시킵니다. 즉, ptr은 이제 nullptr이 되고, ptr2가 이 객체를 소유하게 됩니다.
//	
//	return 0;
//}