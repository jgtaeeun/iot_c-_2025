//#include <iostream>
//
//void modifyValue(const int& num) {
//    int& nonConstNum = const_cast<int&>(num);  
//    nonConstNum = 100;
//}
//
//int main() {
//    const int a = 10;
//    modifyValue(a);  // ��� 'a'�� ���� ����
//    std::cout << "a = " << a << std::endl;  // ��� ���: a = 10
//    return 0;
//}
//
//
///*
//C++ �����Ϸ��� const�� ����� ������ ������� �ʴ´ٰ� �����ϰ�, �ش� ������ �޸� �󿡼� ����ȭ�� �� �ֽ��ϴ�.
//�� ���, const_cast�� ������� ������ �� ���� �����Ϸ��� �ϸ�, ���� �޸𸮿��� ���� ������� �ʰų�, �߸��� ������ ����ų �� �ֽ��ϴ�.
//
//*/
