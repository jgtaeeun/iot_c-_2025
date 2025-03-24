//#include <iostream>
//
//class Point {
//
//private: 
//	int x, y;
//public:
//	Point(int ax, int ay) : x(ax), y(ay) {}
//	
//	void getData() {
//		std::cout << "(x,y)=" << x << ", " << y << std::endl;
//	}
//
//
//	// 단항연산자오버로딩
//	// 전위 연산자 (pre-increment)
//	Point operator++() {
//		++x;
//		++y;
//		return *this;  // 증가된 값을 반환
//	}
//
//	// 후위 연산자 (post-increment)
//	Point operator++(int) {
//		Point temp = *this;  // 현재 값을 저장
//		x++;
//		y++;
//		return temp;  // 증가되기 전의 값을 반환
//	}
//	//출력연산자 오버로딩
//	friend std::ostream& operator<< (std::ostream& out, const Point& other);
//
//};
//
////출력연산자 오버로딩
//std::ostream& operator<< (std::ostream& out, const Point& other) {
//	out << other.x << ", " << other.y;
//	return out;
//}
//
//int main(void) {
//	Point p(2, 4);
//	std::cout << p << std::endl;
//	std::cout << ++p << std::endl;  // p.operator++() 호출됨
//	std::cout << p++ << std::endl;  // p.operator++(10) 호출됨
//	std::cout << p << std::endl;
//
//	return 0;
//}