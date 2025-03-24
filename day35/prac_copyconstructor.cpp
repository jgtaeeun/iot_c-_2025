//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//enum COMP_POS {
//	CLERK, SENIOR
//};
//
//class NameCard {
//
//private:
//	char* name;
//	char* firm;
//	char* phone;
//	int position;
//public:
//	NameCard(const char* name, const char* firm, const char* phone, int position){
//		this->name = new char[strlen(name) + 1];
//		strcpy(this->name, name);
//
//		this->firm = new char[strlen(firm) + 1];
//		strcpy(this->firm, firm);
//
//		this->phone = new char[strlen(phone) + 1];
//		strcpy(this->phone,  phone );
//
//		this->position = position;
//
//	}
//
//	//복사생성자
//	NameCard(const NameCard& other) {
//		name = new char[strlen(other.name) + 1];
//		strcpy(this->name, other.name);
//
//		firm = new char[strlen(other.firm) + 1];
//		strcpy(this->firm, other.firm);
//
//		phone = new char[strlen(other.phone) + 1];
//		strcpy(this->phone, other.phone);
//
//		this->position = position;
//	}
//	~NameCard() {
//		delete[] name;
//		delete[] firm;
//		delete[] phone;
//	}
//	void showNameCardInfo() {
//		std::cout << "[name|firm|phone|position] " << name << ", " << firm << ", " << phone << ", " << position << std::endl;
//	}
//};
//int main(void) {
//
//	NameCard manClerk("LEE", "ABCEng", "010-0000-1111", COMP_POS::CLERK);
//	NameCard copy1 = manClerk;
//	NameCard manSENIOR("PARK", "GOOGLE", "010-4567-1111", COMP_POS::SENIOR);
//	NameCard copy2(manSENIOR);
//	copy1.showNameCardInfo();
//	copy2.showNameCardInfo();
//
//	return 0;
//}