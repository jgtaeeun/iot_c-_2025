///*
//	복사생성자(copyConstructor)
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//class Person {
//
//private:
//	int age;
//	char name[20];
//
//public :
//	Person(int i_age, const char* c){
//		std::cout << "Constructor call~" << std::endl;
//		age = i_age;
//		strcpy(name, c);
//	}
//	void getData(){
//		std::cout << "age: " << age << " , name: " << name << std::endl;
//	}
//};
//
//
//int main(void) {
//	Person p(20,"정해성");  //생성자 Person(int i_age, const char* c)
//	p.getData();
//
//	Person p2(p);	//디폴트 복사생성자
//	p2.getData();
//
//	Person p3 = p;  //디폴트 복사생성자
//	p3.getData();
//
//	return 0;
//}