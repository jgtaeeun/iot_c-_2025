//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class MyFriendInfo {
//private:
//	char* name;
//	int age;
//public:
//	MyFriendInfo(const char* name, int age) {
//		this->name = new char[strlen(name) + 1];
//		strcpy(this->name, name);
//		this->age = age;
//	}
//	void showMyFriendInfo() {
//		std::cout << "이름: " << name << std::endl;
//		std::cout << "나이: " << age << std::endl;
//
//	}
//	~MyFriendInfo() {
//		delete[] name;
//	}
//};
//
//class MyFriendDetailInfo : public MyFriendInfo {
//private:
//	char* addr;
//	char* phone;
//public:
//	MyFriendDetailInfo(const char* name, int age, const char* addr, const char* phone) : MyFriendInfo(name, age) {
//		this->addr = new char[strlen(addr) + 1];
//		strcpy(this->addr, addr);
//		this->phone = new char[strlen(phone) + 1];
//		strcpy(this->phone, phone);
//
//	}
//	void showMyFriendDetailInfo() {
//		showMyFriendInfo();
//		std::cout << "주소: " << addr << std::endl;
//		std::cout << "연락처: " << phone << std::endl;
//	}
//	~MyFriendDetailInfo() {
//		delete[] addr;
//		delete[] phone;
//	}
//};
//int main(void) {
//	MyFriendInfo obj("정해성", 34);
//	obj.showMyFriendInfo();
//
//	MyFriendDetailInfo obj2("오수아", 34, "서울", "010-1234-5678");
//	obj2.showMyFriendDetailInfo();
//	return 0;
//}