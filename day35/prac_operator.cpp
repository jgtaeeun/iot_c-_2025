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
//	// ���׿����ڿ����ε�
//	// ���� ������ (pre-increment)
//	Point operator++() {
//		++x;
//		++y;
//		return *this;  // ������ ���� ��ȯ
//	}
//
//	// ���� ������ (post-increment)
//	Point operator++(int) {
//		Point temp = *this;  // ���� ���� ����
//		x++;
//		y++;
//		return temp;  // �����Ǳ� ���� ���� ��ȯ
//	}
//	//��¿����� �����ε�
//	friend std::ostream& operator<< (std::ostream& out, const Point& other);
//
//};
//
////��¿����� �����ε�
//std::ostream& operator<< (std::ostream& out, const Point& other) {
//	out << other.x << ", " << other.y;
//	return out;
//}
//
//int main(void) {
//	Point p(2, 4);
//	std::cout << p << std::endl;
//	std::cout << ++p << std::endl;  // p.operator++() ȣ���
//	std::cout << p++ << std::endl;  // p.operator++(10) ȣ���
//	std::cout << p << std::endl;
//
//	return 0;
//}