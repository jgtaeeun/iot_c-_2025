///*
//	����Լ� ������ �����ε�
//	p1 operator������(p2)
//	ex)p1 operator+(p2)
//*/
//#include <iostream>
//
//class MyClass {
//
//private:
//	int value;
//public:
//	MyClass(int n=0) :value(n) {
//	}
//
//	MyClass(const MyClass& other) {
//		std::cout << "���������" << std::endl;
//		value = other.value;
//	}
//
//	void showMyClass() {
//		std::cout << "value: " <<value << std::endl;
//	}
//	MyClass& operator+(const MyClass& other) {
//		std::cout << "������ �����ε�" << std::endl;
//		this->value += other.value;
//		return *this;
//	}
//
//	
//};
//int main() {
//	MyClass obj(10);			//�Է��� 1���� ������
//	obj.showMyClass();
//	
//	MyClass obj2(obj);			//����Ʈ ���������   
//	obj2.showMyClass();
//
//	MyClass obj3 = obj2;		//����Ʈ ���������   
//	obj3.showMyClass();
//
//	MyClass obj4 = obj + obj2;   //��ü���� ���� ����� ��ü����, ������ �����ε� + ���������
//	obj4.showMyClass();
//	obj.showMyClass();
//
//
//	MyClass obj5 = obj.operator+(obj2);   
//	obj5.showMyClass();
//	obj.showMyClass();
//
//	//MyClass obj6_ver1 = obj + obj2 + obj5;
//	//obj6_ver1.showMyClass();
//	//obj.showMyClass();
//
//	MyClass obj6_ver2 = obj.operator+(obj2).operator+(obj5);
//	obj6_ver2.showMyClass();
//	obj.showMyClass();
//	return 0;
//}