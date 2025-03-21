///*연쇄출력*/
///*출력 연산자 오버로딩*/
//#include <iostream>
//
//class Money {
//private:
//    int money;
//public:
//    Money(int m = 0) : money(m) {}  // 생성자
//
//    // 출력 연산자 오버로딩
//    friend std::ostream& operator<<(std::ostream& out, const Money& other) {
//        out << "현재 금액: " << other.money;
//        return out;  // 출력 스트림을 반환하여 연쇄 출력이 가능하도록 함
//    }
//};
//
//int main() {
//    Money m1(10000), m2(20000), m3(30000);
//
//    // 연쇄 출력: 여러 개의 출력이 한 줄로 연결되어 출력됨
//    std::cout << m1 << ", " << m2 << ", " << m3 << std::endl;
//
//    return 0;
//}
