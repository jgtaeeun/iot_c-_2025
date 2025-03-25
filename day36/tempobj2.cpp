//#include <iostream>
//class MyClass {
//private:
//	int num;
//public:
//	MyClass(int n) : num(n) { std::cout << num << "생성자" << std::endl; }
//	~MyClass() { std::cout << num << "소멸자" << std::endl; }
//	void setData(int n) { num = n; }
//};
//int main(void) {
//	//MyClass* ptr = &(MyClass{ 10 });//이름없는 객체 생성하여 주소를 포인터변수에 저장할수 없다.  lvalue가 아니기에. 포인터변수는 &변수이므로
//	//MyClass& obj = MyClass{ 20 };  //임시객체는 참조를 할 수 없다. lvalue가 아니기에. 참조는 lvalue여야한다.
//	MyClass obj(MyClass{ 15 });		//이름없는 객체를 복사생성한다.
//	obj.setData(25);
//
//
//	MyClass&& obj2 = MyClass{ 46 };			//rvalue 참조는 const가 아니기 때문에 객체의 데이터를 변경할 수 있습니다.
//	obj2.setData(22);
//
//	const MyClass& obj3 = MyClass{ 100 };
//	//obj3.setData()불가, obj3은 상수참조이기에 값변경할 수 없다.
//
//	std::cout << "bye" << std::endl;
//	return 0;
//}