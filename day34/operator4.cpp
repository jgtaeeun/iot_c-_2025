/*
	����Լ�
	-��ü�� ���ϴ� �Լ�: add() 
	-return �� ����
*/


//#include <iostream>
//class Point {
//
//private:
//	int x, y;
//public:
//	Point(int ax =0 , int ay= 0) :x(ax), y(ay){
//		std::cout << "������" << std::endl;
//	}
//	Point(const Point& other) :x(other.x), y(other.y){
//		std::cout << "���������" << std::endl;
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
//	Point p3;			//�����ڸ� ���� p3 ����
//	p3 = p1.add(p2);   //p1 ��ü��ü�� ��ȯ�Ͽ� ���Կ�����
//	p3.showPoint();
//
//	Point p4 = p1.add(p2);   //��������ڸ� ���� p4 ����
//	p4.showPoint();
//
//
//	return 0;
//}
