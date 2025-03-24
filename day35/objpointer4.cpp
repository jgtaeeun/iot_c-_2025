//#include <iostream>
//
//
//class MyClass {
//
//public:
//	void show() {
//		std::cout << "hello" << std::endl;
//	}
//};
//int main(void) {
//
//	MyClass* ptr = nullptr;
//	//printf("ptr: %d\n", ptr);    //%d은 int형식의 인수필요하지만 ptr은 MyClass * 이다.
//	
//	
//	if (ptr != nullptr) {
//		ptr->show();
//	}
//	else {
//		printf("ptr is null\n");
//	}
//
//	ptr = new MyClass();
//	ptr->show();
//	return 0;
//}