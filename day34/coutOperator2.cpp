///*�������*/
///*��� ������ �����ε�*/
//#include <iostream>
//
//class Money {
//private:
//    int money;
//public:
//    Money(int m = 0) : money(m) {}  // ������
//
//    // ��� ������ �����ε�
//    friend std::ostream& operator<<(std::ostream& out, const Money& other) {
//        out << "���� �ݾ�: " << other.money;
//        return out;  // ��� ��Ʈ���� ��ȯ�Ͽ� ���� ����� �����ϵ��� ��
//    }
//};
//
//int main() {
//    Money m1(10000), m2(20000), m3(30000);
//
//    // ���� ���: ���� ���� ����� �� �ٷ� ����Ǿ� ��µ�
//    std::cout << m1 << ", " << m2 << ", " << m3 << std::endl;
//
//    return 0;
//}
