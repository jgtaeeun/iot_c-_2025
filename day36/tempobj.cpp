//#include <iostream>
//
//class MyClass {
//private:
//	int num;
//public:
//	MyClass(int n) : num(n) { std::cout << num << "생성자" << std::endl; }
//	~MyClass() { std::cout << num << "소멸자" << std::endl; }
//};
//
//int main(void) {
//
//	MyClass obj(10);
//	MyClass obj2 = MyClass{ 20 };  //이름없는 임시객체를 복사생성자 호출하여 생성됨
//
//	MyClass{ 30 };   //이름없는 임시객체
//
//	std::cout << "bye" << std::endl;
//
//	return 0;
//}