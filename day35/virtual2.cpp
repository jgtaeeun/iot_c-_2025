/*
	virtual class - 순수지정자를 가지는 메서드를 순수 가상 함수라 하며, 이 순수 가상 함수를 가지는 클래스

*/

//#include <iostream>
//
//class Cinterface {
//public:
//	Cinterface() { std::cout << "Cinterface constructor" << std::endl; }
//	virtual void getData() const = 0;		// 순수 가상 함수
//
//};
//
//class Cinsub : public Cinterface {
//public:
//
//	Cinsub() { std::cout << "Cinsub constructor" << std::endl; }
//	void getData() const  override { std::cout << "Pure Virtual Function()" << std::endl; }   //순수 가상 함수의 재정의
//};
//int main(void) {
//	//Cinterface c;  //Cinterface는 순수 가상 함수가 있기 때문에 추상 클래스입니다. 따라서 Cinterface 클래스 자체는 객체를 생성할 수 없습니다.
//
//	/* 자식클래스 생성자 호출할 경우, 부모클래스 생성자가 생략된 경우, 부모클래스 기본생성자가 호출된다.*/
//	Cinsub c;		//Cinterface constructor
//					//Cinsub constructor
//
//	c.getData();	//Pure Virtual Function()
//	return 0;
//}