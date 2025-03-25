/*
	shared_ptr : 참조카운트를 통해 객체의 소유권을 공유한다. 여러개의 shared_ptr이 객체를 참조할 수 있으며 레퍼런스 카운트가 0이 되면 메모리가 자동해제된다.
	make_shared : 객체와 참조 카운트를 하나의 메모리 블럭에 같이 할당시킨다. /shared_ptr을 생성하는 함수
*/

//#include <iostream>
//
//class MyClass {
//
//public:
//	MyClass() { std::cout << "생성자" << std::endl; }
//	~MyClass() { std::cout << "소멸자" << std::endl; }
//	void func(){ std::cout << "shared_ptr" << std::endl; }
//};
//
//int main(void) {
//	std::shared_ptr<MyClass> ptr = std::make_shared<MyClass>();
//	std::shared_ptr<MyClass> ptr2 = ptr;
//	std::cout << "ptr과  ptr2는 동일한 객체를 가리킨다. 공유한다." << std::endl;
//
//	return 0;
//}
