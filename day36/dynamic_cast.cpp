/*
	dynamic_cast 
	��ĳ���ÿ����� �������� �����ϴ� ������� ���ȴ�.
	�ٿ�ĳ���ð��� �������� ���ؼ� virtual �޼��尡 �� �־�� �Ѵ�.
*/

//#include <iostream>
//
//class Super {
//public:
//	int n1, n2;
//
//};
//
//class Sub : public Super {
//public:
//	int n3, n4;
//};
//
//class Sub2 : public Sub {
//public:
//	int n5,n6;
//};
//
//int main(void) {
//	Super* superptr = nullptr;
//	Sub* subptr = nullptr;
//	Sub2* sub2ptr = nullptr;
//
//	Sub2 obj;
//
//	sub2ptr = dynamic_cast<Sub2*>(&obj);		
//	subptr = dynamic_cast<Sub*>(sub2ptr);		//��ĳ����
//	superptr= dynamic_cast<Super*>(sub2ptr);	//��ĳ����
//
//	return 0;
//}
