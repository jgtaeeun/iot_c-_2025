//#include <iostream>
//
//void modifyValue(const int& num) {
//    int& nonConstNum = const_cast<int&>(num);  
//    nonConstNum = 100;
//}
//
//int main() {
//    const int a = 10;
//    modifyValue(a);  // 상수 'a'의 값을 변경
//    std::cout << "a = " << a << std::endl;  // 출력 결과: a = 10
//    return 0;
//}
//
//
///*
//C++ 컴파일러는 const로 선언된 변수는 변경되지 않는다고 가정하고, 해당 변수를 메모리 상에서 최적화할 수 있습니다.
//이 경우, const_cast로 상수성만 제거한 후 값을 변경하려고 하면, 실제 메모리에서 값이 변경되지 않거나, 잘못된 동작을 일으킬 수 있습니다.
//
//*/
