/*
	�߻��ڷ����� �̿��ؼ� �����Ҵ�� ��ü�� ������ ���� �޸� ������ ���� Ÿ���� �Ҹ��ڸ� ȣ��Ǿ� �޸� ������ �߻��Ѵ�. (69��° ��)
	���� ���� Ŭ������ �Ҹ��ڸ� �������� ����� ��Ÿ���� �Ҹ���ȣ���� �����Ѵ�. (25��° ��)
*/

//#include <iostream>
//
//class CTest {						//Ŭ������ �빮��
//private:							//������� private, ����Լ� public
//	int num;
//public:
//	//�Է��� 1���� ������ �����ε� �� �̴ϼȶ�����
//	CTest(int anum) : num(anum) { std::cout << num <<"CTest constructor" << std::endl; }
//
//	//�����Լ� 
//	virtual void vfunc() {
//		std::cout << "CTest virtual Function()" << std::endl;
//	}
//
//	//�Ϲ��Լ�
//	void func() {
//		std::cout << "CTest function()" << std::endl;
//	}
//
//	virtual ~CTest(){					//����Ҹ���
//		std::cout << num << "CTest destructor" << std::endl;
//	}
//
//	
//};
//
//// ���
//class CTestSub : public CTest{
//private:
//	int num2;
//public:
//	//�Է��� 2���� ������ �����ε� �� �θ�ü������ �̴ϼȶ����� 
//	CTestSub(int anum1, int anum2) : CTest(anum1), num2(anum2) { std::cout << num2 << "CTestSub constructor" << std::endl; }
//
//	//�����Լ� �������̵�
//	void vfunc() override {
//		std::cout << "CTestSub Virtual Function Overriding " << std::endl;
//	}
//
//	
//	~CTestSub() {
//		std::cout << num2 << "CTestSub destructor" << std::endl;
//	}
//};
//
//int main(void) {
//	CTest obj(1); 
//	CTestSub obj2(2, 34);
//	std::cout << "======================" << std::endl;
//
//	//�Ϲ��Լ�ȣ��
//	obj.func();			//obj�� func()ȣ��
//	//�����Լ�ȣ��
//	obj.vfunc();		//obj�� vfunc()ȣ��
//
//	std::cout << "======================" << std::endl;
//	obj2.func();		//obj�� func()ȣ��
//	obj2.vfunc();		//obj2�� vfunc()ȣ��
//	std::cout << "======================" << std::endl;
//
//	CTest* ptr = new CTestSub(3, 33);		//��ü������ �����Ҵ� �� ��ĳ����
//	ptr->func();   //Ctest�� func()
//	ptr->vfunc();  // CTestSub�� vfunc()
//	delete ptr;		//33 CTestSub destructor�� �̷����� ����!!!!(�����ذ��ʿ�) => CTest�� �Ҹ��� �տ� virtual ���´�.
//	return 0;
//}