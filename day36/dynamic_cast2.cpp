//#include <iostream>
//
//class Super {
//public:
//	virtual void func() { std::cout << "Super::func()" << std::endl; }
//	void func1() { std::cout << "Super::func1()" << std::endl; }
//	void fx() { std::cout << "Super::fx()" << std::endl; }
//};
//
//class Sub : public Super {
//public:
//	void func() override { std::cout << "Sub::func()" << std::endl; }			//�����Լ� �������̵�
//	void func2() { std::cout << "Sub::func2()" << std::endl; }	
//	void fx() { std::cout << "Sub::fx()" << std::endl; }				//�Լ� �������̵�
//};
//
//int main(void) {
//	Super* sptr = new Super();
//	sptr->func();
//	sptr->func1();
//	sptr->fx();
//
//	std::cout << "========================================= Upcasting" << std::endl;
//	// �����ͺ���Ÿ���� SuperŬ������ ������� ���ٰ����ϴ�.	->�����Լ��ʿ�
//	Super* stpr2 = new Sub();			
//	stpr2->func();
//	stpr2->func1();
//	stpr2->fx();
//	
//
//	std::cout << "========================================= Downcasting" << std::endl;
//	Sub* subptr = dynamic_cast<Sub*>(stpr2);
//	if (subptr != nullptr) {
//		subptr->func();
//		subptr->func1();    //Super Ŭ������ func1()�� ��ӹް�, ������ �������̵����� �ʾƵ� Super Ŭ������ func1()�� ����� �� �ֽ��ϴ�.
//		subptr->func2();
//		subptr->fx();
//	}
//	
//	return 0;
//}
//
//
