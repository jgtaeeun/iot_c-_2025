//#include <iostream>
//
//
//typedef struct __Point {
//    int x;
//    int y;
//} Point;
//
//Point& PntAdder(const Point& p1, const Point& p2) {
// 
//    Point* p  = new Point;
//    p->x = p1.x + p2.x;
//    p->y = p1.y + p2.y;
//    return *p ;
//}

//int main(void) {
//    Point* p = new Point;
//    Point* q = new Point;
//
//    (*p).x = 1;
//    (*p).y = 2;
//    (*q).x = 3;
//    (*q).y = 4;
//
//    Point& ref = PntAdder(*p, *q);  // PntAdder �Լ����� ���� ��ȯ
//    std::cout << "�� ���� ��(x, y): " << ref.x << " " << ref.y << std::endl;
//
//    // ���� �Ҵ� ����
//    delete p;
//    delete q;
//    delete &ref; 
//    return 0;
//}
