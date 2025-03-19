//#include <iostream>
//
//typedef struct __Point {
//    int x;
//    int y;
//} Point;
//
//// 함수 반환 타입을 포인터로 변경
//Point* PntAdder(const Point& p1, const Point& p2) {
//    Point* temp = new Point;
//    temp->x = p1.x + p2.x;
//    temp->y = p1.y + p2.y;
//    return temp;  // 포인터 반환
//}
//
//int main(void) {
//
//    // 동적 할당
//    Point* p = new Point;
//    Point* q = new Point;
//
//    (*p).x = 1;
//    (*p).y = 2;
//    (*q).x = 3;
//    (*q).y = 4;
//
//    // 포인터 반환을 받아서 사용
//    Point* result = PntAdder(*p, *q);
//    std::cout << "두 점의 합(x, y): " << result->x << " " << result->y << std::endl;
//
//    // 동적 할당 해제
//    delete p;
//    delete q;
//    delete result;  // result는 동적 메모리이므로 해제해야 합니다.
//
//    return 0;
//}
