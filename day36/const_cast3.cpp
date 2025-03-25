//#include <iostream>
//
//class MyClass {
//private:
//	int num;
//public:
//	void setNum(int n) { num = n; }
//	//const 함수는 함수내에서 값변경할 수 없다.
//	void print() const { 
//		std::cout << "Before: " <<num << std::endl;  
//		//num++
//		const_cast<MyClass*>(this)->num--;
//		std::cout << "After: " << num << std::endl;
//	}
//};
//
//int main() {
//
//	MyClass obj;
//	obj.setNum(10);
//	obj.print();
//
//	return 0;
//}