/*
순환참조의 경우, 레퍼런스 카운트가 0이 될 수 없다.
둘 다 shared_ptr을 사용하여 참조를 유지하는 경우에 발생
*/

//#include <iostream>
//
//struct B;
//
//struct A {
//
//	std::shared_ptr<B> b_ptr;
//};
//
//struct B {
//
//	std::shared_ptr<A> a_ptr;
//};
//
//
//int main(void) {
//
//	std::shared_ptr<A> a(new A());           
//	std::shared_ptr<B> b(new B());
//
//	a->b_ptr = b;
//	b->a_ptr = a;
//
//	
//	return 0;
//}