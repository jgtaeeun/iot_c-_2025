//#include <iostream>
//
//void modifyPointer(const int* ptr) {
//    int* nonConstPtr = const_cast<int*>(ptr);  // const를 제거하고 비상수 포인터로 변환
//    *nonConstPtr = 200;  // 이제 포인터를 통해 값을 변경할 수 있다.
//}
//
//int main() {
//    const int b = 20;
//    const int* ptr = &b;
//    modifyPointer(ptr);  // 상수 포인터를 통해 상수 변수의 값을 변경
//    std::cout << "b = " << b << std::endl;  // 출력 결과: b = 200
//    return 0;
//}
