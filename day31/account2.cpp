#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
struct human {
	int anum;
	char name[100];
	int money;

};

struct human makeAcc();
void printf_acc(human* p);
void input_m(human* p);
void output_m(human* p);

int main(void) {
	human* p = NULL;
	int sel;
	while (1) {

		std::cout << "---Menu---" << std::endl;
		std::cout << "1.계좌개설" << std::endl;
		std::cout << "2.입금" << std::endl;
		std::cout << "3.출금" << std::endl;
		std::cout << "4.계좌정보 전체출력" << std::endl;
		std::cout << "5.프로그램 종료" << std::endl;
		std::cout << "선택: ";
		std::cin >> sel;

		if (sel == 5) break;
		else if (sel == 4) { printf_acc(p); }
		else if (sel == 3) { output_m(p); }
		else if (sel == 2) { input_m(p); }
		else if (sel == 1) { human h1 = makeAcc(); p = &h1; }
		else { std::cout << "메뉴를 다시 선택해주세요" << std::endl; }

		std::cout << std::endl;
	}
	return 0;
}

struct human makeAcc() {
	int num;
	char name[100];
	int inputmoney;
	std::cout << "[계좌개설] " << std::endl;
	std::cout << "계좌ID:  ";
	std::cin >> num;
	std::cout << "이름: ";
	std::cin >> name;
	std::cout << "입금액: ";
	std::cin >> inputmoney;
	human h;
	h.anum = num;
	h.money = inputmoney;
	strcpy(h.name, name);
	return h;
}

void printf_acc(human* p) {

	std::cout << "계좌ID: " << p->anum << std::endl;
	std::cout << "이름: " << p->name << std::endl;
	std::cout << "잔액: " << p->money << std::endl;
}


void input_m(human* p) {
	int num, money;
	std::cout << "[입   금]" << std::endl;
	std::cout << "계좌ID: ";
	std::cin >> num;
	std::cout << "입금액: ";
	std::cin >> money;

	if ((p->anum) == num) {
		(p->money) = (p->money) + money;
		std::cout << "[입금완료] ";
	}


}
void output_m(human* p) {
	int num, money;
	std::cout << "[출   금]" << std::endl;
	std::cout << "계좌ID: ";
	std::cin >> num;
	std::cout << "출금액: ";
	std::cin >> money;

	if ((p->anum) == num) {
		(p->money) = (p->money) - money;
		std::cout << "[출금완료] ";
	}

}