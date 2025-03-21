///* 
//	전역함수 연산자 오버로딩 : operator(p1,p2)
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
//	//전역함수
//	Point obj2 = operator+(20 ,obj);    //함수의 호출이 "호출"이 아니라, 그 함수의 코드 자체로 대체된다는 것입니다.
//	obj2.showPoint();
//
//	return 0;
//}
//
////객체반환
//inline  Point operator+(int n , const Point& other){
//	return Point(n + other.x, n + other.y);
//}
//
//
// 
/*참조 반환으로 객체를 반환하려면 지역 객체를 반환할 수 없고, 반환된 참조는 유효하지 않게 됩니다.
따라서 연산자 오버로딩에서 객체를 값으로 반환하는 것이 더 안전하고 일반적으로 권장되는 방법입니다.
동적 할당을 사용하여 참조를 반환하는 방법도 있지만, 메모리 관리가 필요해지므로 일반적으로 객체를 값으로 반환하는 방법이 더 나은 선택입니다.*/