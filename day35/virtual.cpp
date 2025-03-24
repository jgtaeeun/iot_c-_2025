/*
	virtual function = �Ļ�Ŭ�������� �������� ���� ��ӹ��� ����Լ��� ���ϸ� BaseŬ������ ����Լ���
						virtual Ű���带 ����Ͽ� �����.
	virtual table�� ���������, dynamic binding���� �����Ѵ�.
	*/

//#include <iostream>
//
//class Base {
//
//public:
//	virtual void func1() { std::cout << "B::func1()" << std::endl; }	//�����Լ�
//	virtual void func2() { std::cout << "B::func2()" << std::endl; }	//�����Լ�
//	void func3() { std::cout << "B::func3()" << std::endl; }
//
//
//};
//
//class Derived : public Base {
//
//public:
//	virtual void func1() override { std::cout << "D::func1()" << std::endl;}	//�����Լ��� �������ϴ� ����Լ��� ��Ÿ��
//	void func3() { std::cout << "D::func3()" << std::endl; }			
//	void func4() { std::cout << "D::func4()" << std::endl; }
//};
//
//int main(void) {
//	Base b;
//	Derived d;
//	Base* bptr = new Derived();		//upcasting
//
//	bptr->func1();  //D::func1()			// baseŬ������ func1()�� �����Լ��� ����Ǿ� derived Ŭ������ func1()�� ȣ��ȴ�
//	bptr->func2();	//B::func2()			//baseŬ������ func2()�� �����Լ��� ����Ǿ����� �������̵��� ���� �ʾҴ�. 
//	bptr->func3();	//B::func3()			//������Ÿ���� ȣ���Լ��� �����ȴ�.
//	
//	//bptr->func4();   //BaseŬ������ func4()��� ����Լ��� ����.
//
//	delete bptr;  //���� �����޸� �� ���� ����
//	bptr = &b;
//	bptr->func1();  //B::func1()
//	bptr->func2();	//B::func2()
//	bptr->func3();	//B::func3()
//
//	/* ��ü �������� ���������� ���� Ŭ���� Ÿ���� �����ͷ� �Ļ�Ŭ������ ��ü�� ����Ű�� ������ ����Ŭ���� ����� ���ѵȴ�.
//	�̶�, �������̵��� �Ļ� Ŭ������ ����� ����ϱ� ���ؼ��� ����Ŭ������ ����Լ��� �����Լ��� ����� �ȴ�.
//	�̰��� �����Ͻ� ������������ ���ε����� ���ϰ� ��Ÿ�ӿ��� �����Ͱ� � ��ü�� ����Ű�� �ִ����� ���� ���ε��� �Լ��� �����Ѵ�.
//	*/
//
//	return 0;
//}