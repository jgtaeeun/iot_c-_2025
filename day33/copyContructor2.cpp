///*
//	���������
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//
//private:
//	int m_age;
//	char m_name[20];
//
//public :
//	Person(int age, const char* c) {
//		std::cout << "Constructor call~" << std::endl;
//		this->m_age = age;
//		strcpy(this->m_name, c);
//	}
//	//���������
//	Person(const Person& other){			//�Ű������� Person ��ü�� ���, ��������� ���ѹݺ� E0408
//											// ������ü other�� ���ϸ� �ȵǹǷ� ���const
//		std::cout << "Copy Constructor call~" << std::endl;
//		this->m_age = other.m_age;
//		strncpy(this->m_name, other.m_name, strlen(other.m_name)+1);		//�ι�������
//
//	}
//
//	void getData() {
//		std::cout << "age: " << this->m_age << " , name: " << this->m_name << std::endl;
//		//std::cout << "this:" << this << std::endl;
//	}
//};
//int main(void) {
//	Person p(23, "������");
//	p.getData();
//
//	Person p2(p);
//	p2.getData();
//
//	return 0;
//}