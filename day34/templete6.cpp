//#include <iostream>
//
//template <typename T , int sz>
//class CTest {
//private:
//	T ary[sz];
//public:
//	// �迭 �ε��� ���� ������ �����ε�
//	/*
//	T& operator[](int idx)���� ��ȯ Ÿ���� T& (��, ���� Ÿ��)�� ������ 
//	�ش� �ε����� �ִ� ���� ���� �����ϰ� �ϱ� �����Դϴ�.
//	*/
//	T& operator[](int idx) {
//		if (idx < 0 || idx >= sz) {
//			std::cout << "error" << std::endl;
//			exit(1);
//		}
//		return ary[idx];
//	}
//
//	void printData() {
//		for (int i = 0; i < sz; i++) {
//			std::cout << ary[i] << std::endl;
//		}
//	}
//};
//int main(void) {
//	CTest<int, 5> obj;
//	obj.operator[](0) = 10;
//	obj[1] = 11;
//	obj[2] = 20;
//	obj[3] = 50;
//	obj[4] = 55;
//	obj.printData();
//
//	return 0;
//}