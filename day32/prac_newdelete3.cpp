//#include <iostream>
//
//typedef struct __Point {
//    int x;
//    int y;
//} Point;
//
//// �Լ� ��ȯ Ÿ���� �����ͷ� ����
//Point* PntAdder(const Point& p1, const Point& p2) {
//    Point* temp = new Point;
//    temp->x = p1.x + p2.x;
//    temp->y = p1.y + p2.y;
//    return temp;  // ������ ��ȯ
//}
//
//int main(void) {
//
//    // ���� �Ҵ�
//    Point* p = new Point;
//    Point* q = new Point;
//
//    (*p).x = 1;
//    (*p).y = 2;
//    (*q).x = 3;
//    (*q).y = 4;
//
//    // ������ ��ȯ�� �޾Ƽ� ���
//    Point* result = PntAdder(*p, *q);
//    std::cout << "�� ���� ��(x, y): " << result->x << " " << result->y << std::endl;
//
//    // ���� �Ҵ� ����
//    delete p;
//    delete q;
//    delete result;  // result�� ���� �޸��̹Ƿ� �����ؾ� �մϴ�.
//
//    return 0;
//}
