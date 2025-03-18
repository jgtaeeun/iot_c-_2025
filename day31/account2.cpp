/*
추가해야할 것 - 금액이 -일경우 출금못하게/입력값(숫자, 문자) 제외한 나머지 예외처리
*/

//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//struct human {
//	int anum;
//	char name[100];
//	int money;
//
//};
//
//struct human* makeAcc();
//void printf_acc(human** p, int);
//void input_m(human** p);
//void output_m(human** p);
//
//int main(void) {
//	human* p[3]; 
//	int idx = 0;
//	int sel;
//	while (1) {
//
//		std::cout << "---Menu---" << std::endl;
//		std::cout << "1.계좌개설" << std::endl;
//		std::cout << "2.입금" << std::endl;
//		std::cout << "3.출금" << std::endl;
//		std::cout << "4.계좌정보 전체출력" << std::endl;
//		std::cout << "5.프로그램 종료" << std::endl;
//		std::cout << "선택: ";
//		std::cin >> sel;
//
//		if (sel == 5) { // 프로그램 종료 전에 동적으로 할당된 메모리를 해제
//			for (int i = 0; i < idx; i++) {
//				delete p[i];  // 동적으로 할당된 메모리 해제
//			} 
//			break;
//		}
//		else if (sel == 4) { printf_acc(p, idx); }
//		else if (sel == 3) { output_m(p); }
//		else if (sel == 2) { input_m(p); }
//		else if (sel == 1) { p[idx] = makeAcc(); idx++; }
//		else { std::cout << "메뉴를 다시 선택해주세요" << std::endl; }
//
//		std::cout << std::endl;
//	}
//	return 0;
//}
//struct human* makeAcc() {
//	int num;
//	char name[100];
//	int inputmoney;
//	std::cout << "[계좌개설] " << std::endl;
//	std::cout << "계좌ID:  ";
//	std::cin >> num;
//	std::cout << "이름: ";
//	std::cin >> name;
//	std::cout << "입금액: ";
//	std::cin >> inputmoney;
//	
//	human* h = new human;  // 동적으로 메모리 할당
//	h->anum = num;
//	h->money = inputmoney;
//	strcpy(h->name, name);
//	return h;  // 동적 할당된 객체의 포인터 반환
//}
//
//void printf_acc(human** p, int c) {
//	for (int i = 0; i < c; i++) {
//		std::cout << "계좌ID: " << p[i]->anum << std::endl;
//		std::cout << "이름: " << p[i]->name << std::endl;
//		std::cout << "잔액: " << p[i]->money << std::endl;
//		std::cout <<  std::endl;
//	}
//	
//}
//
//
//void input_m(human** p) {
//	int num, money;
//	std::cout << "[입   금]" << std::endl;
//	std::cout << "계좌ID: ";
//	std::cin >> num;
//	std::cout << "입금액: ";
//	std::cin >> money;
//
//	for (int i = 0; i < 3; i++) {
//		if ((p[i]->anum) == num) {
//			(p[i]->money) = (p[i]->money) + money;
//			std::cout << "[입금완료] " << std::endl;
//			break;
//		}
//	}
//
//}
//void output_m(human** p) {
//	int num, money;
//	std::cout << "[출   금]" << std::endl;
//	std::cout << "계좌ID: ";
//	std::cin >> num;
//	std::cout << "출금액: ";
//	std::cin >> money;
//
//	for (int i = 0; i < 3; i++) {
//		if ((p[i]->anum) == num) {
//			(p[i]->money) = (p[i]->money) - money;
//			std::cout << "[출금완료] " << std::endl;
//			break;
//		}
//	}
//}