//#include <iostream>
//
//void modifyPointer(const int* ptr) {
//    int* nonConstPtr = const_cast<int*>(ptr);  // const�� �����ϰ� ���� �����ͷ� ��ȯ
//    *nonConstPtr = 200;  // ���� �����͸� ���� ���� ������ �� �ִ�.
//}
//
//int main() {
//    const int b = 20;
//    const int* ptr = &b;
//    modifyPointer(ptr);  // ��� �����͸� ���� ��� ������ ���� ����
//    std::cout << "b = " << b << std::endl;  // ��� ���: b = 200
//    return 0;
//}
