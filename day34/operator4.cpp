/*
	멤버함수
	-객체를 더하는 함수: add() 
	-return 은 참조
*/


//#include <iostream>
//class Point {
//
//private:
//	int x, y;
//public:
//	Point(int ax =0 , int ay= 0) :x(ax), y(ay){
//		std::cout << "생성자" << std::endl;
//	}
//	Point(const Point& other) :x(other.x), y(other.y){
//		std::cout << "복사생성자" << std::endl;
//	}
//	void showPoint() {
//		std::cout << x << ", " << y << std::endl;
//	}
//	Point& add(const Point& other) {
//		x += other.x;
//		y += other.y;
//		return *this;
//	}
//};
//
//
//int main(void) {
//	Point p1(1006, 1011);
//	Point p2(134, 155);
//	Point p3;			//생성자를 통한 p3 생성
//	p3 = p1.add(p2);   //p1 객체자체를 반환하여 대입연산자
//	p3.showPoint();
//
//	Point p4 = p1.add(p2);   //복사생성자를 통한 p4 생성
//	p4.showPoint();
//
//
//	return 0;
//}
