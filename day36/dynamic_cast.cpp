/*
	dynamic_cast 
	업캐스팅에서도 안전성을 보장하는 방식으로 사용된다.
	다운캐스팅경우는 다형성을 위해서 virtual 메서드가 꼭 있어야 한다.
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
//	subptr = dynamic_cast<Sub*>(sub2ptr);		//업캐스팅
//	superptr= dynamic_cast<Super*>(sub2ptr);	//업캐스팅
//
//	return 0;
//}
