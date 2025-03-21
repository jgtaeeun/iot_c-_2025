//#include <iostream>
//
//class MyClass {
//
//private:
//	int x, y;
//
//public:
//	MyClass(int ax = 0, int ay = 0) :x(ax), y(ay){}
//
//	MyClass& operator+(const MyClass& other) {
//		x += other.x;
//		y += other.y;
//		return *this;
//	}
//
//	MyClass& operator+(const int& a) {
//		x += a;
//		y += a;
//		return* this;
//	}
//
//	void showMyClass() {
//		std::cout << x << " ," << y << std::endl;
//	}
//};
//
//int main(void) {
//	MyClass obj(10, 20);  
//	obj.showMyClass();	//10 20
//
//	MyClass obj2(20, 30); 
//	obj2.showMyClass();  //20 30
//
//	MyClass obj3 = obj + obj2;
//	obj3.showMyClass();   //30 50
//	obj.showMyClass();   //30 50
//
//	MyClass obj4 = obj.operator+(obj2);
//	obj4.showMyClass();  //50 80
//	obj.showMyClass();   //50 80
//
//	MyClass obj5 = obj4 + 100;
//	obj5.showMyClass();
//	
//	return 0;
//}