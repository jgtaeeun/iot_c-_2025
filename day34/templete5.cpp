//#include <iostream>
//
//template <typename T>
//class CTest {				//Ŭ���� ���ø� �Ϲ�ȭ
//private:
//	T num;
//public:
//	CTest (T n) : num(n){}
//	T getData() { 
//		return num;
//	}
//
//};
//
//template <>	
//class CTest<char> {				//Ŭ���� ���ø� Ư��ȭ
//private:
//	char data;
//public:
//	CTest(char d) : data(d){}
//	char getData() {
//		return data;
//	}
//
//};
//
//
//int main(void) {
//	CTest<int> obj(10);	//Ŭ���� ���ø��� �ν��Ͻ� ������ �ݵ�� typename�� �ۼ��ؾ� �Ѵ�.
//	std::cout << obj.getData() << std::endl;
//	
//	CTest<char> obj2('a');
//	std::cout << obj2.getData() << std::endl;
//	return 0;
//}