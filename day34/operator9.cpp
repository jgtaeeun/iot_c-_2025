/*
단항연산자 오버로딩-반환형 operator 단항연산자 ()

operator++()
operator()()
operator--()
operator-()
operator!()
operator~()
*/

//#include <iostream>
//
//class Money {
//
//private:
//	int money;
//public:
//	Money(int m=0) :money(m) {}   //생성자
//
//	int operator()() {            //단항연산자 오버로딩 - 매개변수 없는 경우
//		return money;
//	}
//
//	void operator()(int m) {		 //단항연산자 오버로딩 - 매개변수 있는 경우
//		money += m;
//	}
//};
//
//int main(void) {
//	Money m;			// 생성자로 인스턴스 생성
//	printf("money: %d\n", m.operator()());
//	
//	m(1000);
//	printf("money: %d\n", m.operator()());
//
//
//	return 0;
//}