///* 
//	�����Լ� ������ �����ε� : operator(p1,p2)
//	
//*/
//#include <iostream>
//
//class Point {
//public:
//	int x, y;
//	Point (int ax, int ay ) : x(ax), y(ay) {}
//
//	Point operator+ ( const Point& p1) {
//		return Point(x + p1.x, y + p1.y);
//	}
//
//	Point operator+ (int n) {
//		return Point(x + n, y + n);
//	}
//
//	void showPoint() {
//		std::cout << x << ", " << y;
//	}
//
//};
//
//inline Point operator+(int n, const Point& other);
//
//
//int main(void) {
//	Point obj(10, 20);
//	
//	//�����Լ�
//	Point obj2 = operator+(20 ,obj);    //�Լ��� ȣ���� "ȣ��"�� �ƴ϶�, �� �Լ��� �ڵ� ��ü�� ��ü�ȴٴ� ���Դϴ�.
//	obj2.showPoint();
//
//	return 0;
//}
//
////��ü��ȯ
//inline  Point operator+(int n , const Point& other){
//	return Point(n + other.x, n + other.y);
//}
//
//
// 
/*���� ��ȯ���� ��ü�� ��ȯ�Ϸ��� ���� ��ü�� ��ȯ�� �� ����, ��ȯ�� ������ ��ȿ���� �ʰ� �˴ϴ�.
���� ������ �����ε����� ��ü�� ������ ��ȯ�ϴ� ���� �� �����ϰ� �Ϲ������� ����Ǵ� ����Դϴ�.
���� �Ҵ��� ����Ͽ� ������ ��ȯ�ϴ� ����� ������, �޸� ������ �ʿ������Ƿ� �Ϲ������� ��ü�� ������ ��ȯ�ϴ� ����� �� ���� �����Դϴ�.*/