//#include <iostream>
//
//class MyClass {
//private:
//	int num;
//public:
//	void setNum(int n) { num = n; }
//	//const �Լ��� �Լ������� �������� �� ����.
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