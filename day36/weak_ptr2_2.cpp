/*
��ȯ������ ���, weak_ptr�� �̿��ؼ� �ذ��Ѵ�.
*/



//#include <iostream>
//#include <memory>
//
//struct B;
//
//struct A {
//    std::shared_ptr<B> b_ptr;  // B ��ü�� �����ϴ� shared_ptr
//};
//
//struct B {
//    std::weak_ptr<A> a_ptr;  // A ��ü�� �����ϴ� weak_ptr
//};
//
//int main(void) {
//    // A�� B ��ü�� �����ϰ� shared_ptr�� ����
//    std::shared_ptr<A> a(new A());
//    std::shared_ptr<B> b(new B());
//
//    // A ��ü�� b_ptr�� B ��ü�� �����ϵ��� ����
//    a->b_ptr = b;
//
//    // B ��ü�� a_ptr�� A ��ü�� weak_ptr�� �����ϵ��� ����
//    b->a_ptr = a;
//
//    return 0;
//}
