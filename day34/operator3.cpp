///*
//	����Լ�
//	-��ü�� ���ϴ� �Լ�: add() 
//	-return �� ��ü
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
//	//���������
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
//	p3 = p.add(p2);		//  ���Կ����� ȣ��
//	p3.showPoint();
//
//	Point p4;
//	p4 = p3;		//  ���Կ����� ȣ��
//	p4.showPoint();
//	return 0;
//}