//#include <iostream>
//
//class Base {
//public:
//	void show() { printf("Base Class!\n"); }
//};
//
//
//class Derived : public Base {
//public:
//	void show() { printf("Derived Class!\n"); }	//�Լ��������̵�
//};
//
//
//int main(void) {
//	Base* bptr = nullptr;
//	Derived* dptr = nullptr;
//
//	Derived  obj;	//�Ļ�Ŭ���� ��ü
//	dptr = &obj;
//	dptr->show();	//Derived Class!
//					
//	/*�θ�� �ڽ�Ŭ������ Ÿ���� �ٸ��� ��� �ٸ� Ÿ���� �����ͷ� ����ų �� ������?*/
//	bptr = &obj;	// �θ�Ÿ���� �����ͷ� �ڽ�Ÿ���� ��ü�� ����Ű�� ��ü�� �θ�Ÿ������ �������� �ȴ�.
//	bptr->show();   //Base Class!
//	return 0;
//}