//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//enum COMP_POS
//{
//	CLERK, SENIOR, ASSIST, MANAGER
//};
//
//class NameCard
//{
//private:
//	char* name;
//	char* firmName;
//	char* phone;
//	int status;
//public :
//	NameCard(const char* pn, const char* pfn, const char * pp, int s) {
//		name = new char[strlen(pn) + 1];
//		strncpy(name, pn, strlen(pn) + 1);
//		firmName = new char[strlen(pfn) + 1];
//		strncpy(firmName, pfn, strlen(pfn) + 1);
//		phone = new char[strlen(pp) + 1];
//		strncpy(phone, pp, strlen(pp) + 1);
//		status = s;
//	}
//	~NameCard(){
//		delete[] name;
//		delete[] firmName;
//		delete[] phone;
//	}
//	void printNameCard() {
//		std::cout << "[name]"<< name << std::endl;
//		std::cout << "[firmName]" << firmName << std::endl;
//		std::cout << "[phone]" << phone << std::endl;
//		switch (status) {
//			case 0 :
//				std::cout << "[status]" << "CLERK" <<  std::endl;
//				break;
//			case 1:
//				std::cout << "[status]" << "SENIOR" << std::endl;
//				break; 
//			case ASSIST:
//				std::cout << "[status]" << "ASSIST" << std::endl;
//				break;
//			case MANAGER:
//				std::cout << "[status]" << "MANAGER" << std::endl;
//				break;
//		}

//		std::cout << std::endl;
//	}
//};
//
//
//int main(void) {
//	NameCard manSENIOR("정해성", "국정원", "010-1234-1234", COMP_POS::SENIOR);
//	NameCard womanMANAGER("오수아", "병문고", "010-5678-5678", COMP_POS::MANAGER);
//	NameCard womanASSIST("이예나", "병문고", "010-0000-1111", COMP_POS::ASSIST);
//
//	manSENIOR.printNameCard();
//	womanMANAGER.printNameCard();
//	womanASSIST.printNameCard();
//
//
//	return 0;
//}