/*
	추상자료형을 이용해서 동적할당된 객체를 참조할 때는 메모리 해제시 참조 타입의 소멸자만 호출되어 메모리 누수가 발생한다. (69번째 줄)
	따라서 상위 클래스의 소멸자를 가상으로 만들어 실타입의 소멸자호출을 유도한다. (25번째 줄)
*/

//#include <iostream>
//
//class CTest {						//클래스명 대문자
//private:							//멤버변수 private, 멤버함수 public
//	int num;
//public:
//	//입력이 1개인 생성자 오버로딩 및 이니셜라이져
//	CTest(int anum) : num(anum) { std::cout << num <<"CTest constructor" << std::endl; }
//
//	//가상함수 
//	virtual void vfunc() {
//		std::cout << "CTest virtual Function()" << std::endl;
//	}
//
//	//일반함수
//	void func() {
//		std::cout << "CTest function()" << std::endl;
//	}
//
//	virtual ~CTest(){					//가상소멸자
//		std::cout << num << "CTest destructor" << std::endl;
//	}
//
//	
//};
//
//// 상속
//class CTestSub : public CTest{
//private:
//	int num2;
//public:
//	//입력이 2개인 생성자 오버로딩 및 부모객체생성자 이니셜라이져 
//	CTestSub(int anum1, int anum2) : CTest(anum1), num2(anum2) { std::cout << num2 << "CTestSub constructor" << std::endl; }
//
//	//가상함수 오버라이딩
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
//	//일반함수호출
//	obj.func();			//obj의 func()호출
//	//가상함수호출
//	obj.vfunc();		//obj의 vfunc()호출
//
//	std::cout << "======================" << std::endl;
//	obj2.func();		//obj의 func()호출
//	obj2.vfunc();		//obj2의 vfunc()호출
//	std::cout << "======================" << std::endl;
//
//	CTest* ptr = new CTestSub(3, 33);		//객체포인터 동적할당 및 업캐스팅
//	ptr->func();   //Ctest의 func()
//	ptr->vfunc();  // CTestSub의 vfunc()
//	delete ptr;		//33 CTestSub destructor이 이뤄지지 않음!!!!(문제해결필요) => CTest의 소멸자 앞에 virtual 적는다.
//	return 0;
//}