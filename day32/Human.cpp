///*
//	step1. �̸��� ��ȭ��ȣ�� �����Ҵ�
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human {
//
//private:
//	char* pname;
//	int age;
//	char* ptel;
//
//public:
//	Human(const char* name, int i_age , const char* tel){
//		pname = new char[strlen(name)+1];		//�����Ҵ��� ��, ���ڿ��� �ι��� �����ؾ��ؼ� +1�Ѵ�.
//		strcpy(pname, name);					//���ڿ� ó��
//		
//		age = i_age;
//		
//		ptel = new char[strlen(tel)+1];
//		strcpy(ptel, tel);
//	}
//	~Human() {					//�����Ҵ� ������ �Ҹ��ڿ��� �Ѵ�.
//		delete[] pname;					
//		delete[] ptel;
//	}
//	void getData() {
//		std::cout << "[pname, age, ptel] = " << pname << ", " << age << ", " << ptel << std::endl;
//	}
//};
//
//int main() {
//	Human h("ȫ�浿", 30, "010-1234-1234");   //���ڿ� ����� �����ͺ����� ����
//	h.getData();
//
//	return 0;
//}