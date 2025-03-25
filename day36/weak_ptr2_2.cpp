/*
순환참조의 경우, weak_ptr을 이용해서 해결한다.
*/



//#include <iostream>
//#include <memory>
//
//struct B;
//
//struct A {
//    std::shared_ptr<B> b_ptr;  // B 객체를 참조하는 shared_ptr
//};
//
//struct B {
//    std::weak_ptr<A> a_ptr;  // A 객체를 참조하는 weak_ptr
//};
//
//int main(void) {
//    // A와 B 객체를 생성하고 shared_ptr로 관리
//    std::shared_ptr<A> a(new A());
//    std::shared_ptr<B> b(new B());
//
//    // A 객체의 b_ptr에 B 객체를 참조하도록 설정
//    a->b_ptr = b;
//
//    // B 객체의 a_ptr에 A 객체를 weak_ptr로 참조하도록 설정
//    b->a_ptr = a;
//
//    return 0;
//}
