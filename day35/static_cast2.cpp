//#include <iostream>
//
//
//class Base {
//public:
//	void func1() { std::cout << "Base::func1()" << std::endl; }
//	
//};
//
//class Derived : public Base {
//public:
//	void func() { std::cout << "Derived::func()" << std::endl; }
//	void func1() { std::cout << "Derived::func1()" << std::endl; }
//
//};
//
//class Derived2 : public Derived {
//public:
//	void func() { std::cout << "Derived2::func()" << std::endl; }
//	void func1() { std::cout << "Derived2::func1()" << std::endl; }
//};
//int main(void) {
//	Base* bptr;
//	Derived obj;
//	bptr = static_cast<Base*>(&obj);	//��ĳ���� 
//	bptr->func1();		//�θ�Ŭ������ ������� ���ٰ���
//	
//	Base obj2;
//	Derived* dptr;
//	dptr = static_cast<Derived*>(&obj2);	//�ٿ�ĳ����
//	dptr->func();	//�ڽ�Ŭ����Derived�� ������� ���ٰ���
//	dptr->func1();
//
//	Derived2* d2ptr = static_cast<Derived2*>(dptr);	//�ٿ�ĳ����
//	d2ptr->func();	//�ڽ�Ŭ����Derived2�� ������� ���ٰ���
//	d2ptr->func1();
//	return 0;
//}