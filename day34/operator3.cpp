///*
//	멤버함수
//	-객체를 더하는 함수: add() 
//	-return 은 객체
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Point {
//
//private:
//	int x, y;
//	
//public:
//	Point (int ax=0, int ay =0 ) : x(ax), y(ay) {
//		std::cout << "constructor" << std::endl;
//	}
//
//	//복사생성자
//	Point(const Point& other)  :x(other.x) , y(other.y){
//		std::cout << "copy constructor" << std::endl;
//	}
//
//	Point add(const Point& other) {
//		std::cout << "add()" << std::endl;
//		return Point(this->x + other.x, this->y + other.y);
//	}
//
//	void showPoint() {
//		std::cout << x << ", " << y << std::endl;
//	}
//};
//
//
//int main(void) {
//
//
//	Point p(1006, 1011);
//	Point p2(134, 155);
//
//	Point p3;
//	p3 = p.add(p2);		//  대입연산자 호출
//	p3.showPoint();
//
//	Point p4;
//	p4 = p3;		//  대입연산자 호출
//	p4.showPoint();
//	return 0;
//}