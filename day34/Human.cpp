/*
	step3.
	char �������� name
	intŸ���� age
	����� ����ϴ� showHuman()
	Ŭ���� Human

	name�� �����Ҵ��ϰ� , ���� 30 �̸� ȫ���� man��ü�� �����Ͻÿ�
	man��ü�� �����Ͽ� copyman ��ü�� �����Ͻÿ�.
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human {
//private:
//	char* name;
//	int age;
//public:
//	Human(const char* pn = nullptr, int i_age =0)   {
//		std::cout << "������" << std::endl;
//		age = i_age;
//		name = new char[strlen(pn) + 1];
//		strcpy(name, pn);
//	}
//	Human(const Human& other) {
//		std::cout << "���������" << std::endl;
//		name = new char[strlen(other.name) + 1];
//		strcpy(name, other.name);
//		age = other.age;
//	}
//	~Human() {
//		std::cout <<"�Ҹ���" << std::endl;
//		delete[] name;
//	}
//
//	void showHuman() {
//		std::cout << name << ", " << age << std::endl;
//	}
//};
//
//int main(void) {
//	Human man("ȫ��", 30);		//������
//	man.showHuman();
//
//	Human copyman(man);				//���������
//	copyman.showHuman();
//
//
//	return 0;
//}