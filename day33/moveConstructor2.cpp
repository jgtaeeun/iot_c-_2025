///*
//	�̵�������(&&)
//	r-value ������ �Ķ���ͷ� ���� �̵� ������
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human {
//private:
//	char name[10];
//	int age;
//public:
//	//�Է��� 2���� ������ (������ �����ε�)
//	Human(const char* name, int age) {
//		std::cout << "�Է��� 2���� ������(������ �����ε�)" << std::endl;
//		strcpy(this->name, name);
//		this->age = age;
//	}
//	//���������
//	Human (const Human& other){
//		std::cout << "���������(const, ����������&)" << std::endl;
//		strcpy(this->name, other.name);
//		this->age = other.age;
//	}
//	//�̵������� - �� ���簡 �ƴ϶� ���� �̵��̴�.
//	Human(Human&& other) noexcept{
//		std::cout << "�̵�������(r-value����)" << std::endl;
//		strcpy(this->name, other.name);
//		this->age = other.age;
//	}
//	void printHuman() {
//		printf("[�̸�|����] %s %d\n", this->name, this->age);
//	}
//};
//int main(void) {
//	
//	Human h("day6", 4);
//	std::cout << "h�� �ּ�" << &h << std::endl;  //h�� �ּ�0000002773B8F698
//	h.printHuman();
//	Human h2(h);
//	std::cout << "h2�� �ּ�" << &h2 << std::endl; //h2�� �ּ�0000002773B8F6C8
//	h2.printHuman();
//	Human h3(std::move(h));
//	std::cout << "h3�� �ּ�" << &h3 << std::endl; //h3�� �ּ�0000002773B8F6F8
//	h3.printHuman();
//	return 0;
//}