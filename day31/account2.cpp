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
		std::cout << "1.���°���" << std::endl;
		std::cout << "2.�Ա�" << std::endl;
		std::cout << "3.���" << std::endl;
		std::cout << "4.�������� ��ü���" << std::endl;
		std::cout << "5.���α׷� ����" << std::endl;
		std::cout << "����: ";
		std::cin >> sel;

		if (sel == 5) break;
		else if (sel == 4) { printf_acc(p); }
		else if (sel == 3) { output_m(p); }
		else if (sel == 2) { input_m(p); }
		else if (sel == 1) { human h1 = makeAcc(); p = &h1; }
		else { std::cout << "�޴��� �ٽ� �������ּ���" << std::endl; }

		std::cout << std::endl;
	}
	return 0;
}

struct human makeAcc() {
	int num;
	char name[100];
	int inputmoney;
	std::cout << "[���°���] " << std::endl;
	std::cout << "����ID:  ";
	std::cin >> num;
	std::cout << "�̸�: ";
	std::cin >> name;
	std::cout << "�Աݾ�: ";
	std::cin >> inputmoney;
	human h;
	h.anum = num;
	h.money = inputmoney;
	strcpy(h.name, name);
	return h;
}

void printf_acc(human* p) {

	std::cout << "����ID: " << p->anum << std::endl;
	std::cout << "�̸�: " << p->name << std::endl;
	std::cout << "�ܾ�: " << p->money << std::endl;
}


void input_m(human* p) {
	int num, money;
	std::cout << "[��   ��]" << std::endl;
	std::cout << "����ID: ";
	std::cin >> num;
	std::cout << "�Աݾ�: ";
	std::cin >> money;

	if ((p->anum) == num) {
		(p->money) = (p->money) + money;
		std::cout << "[�ԱݿϷ�] ";
	}


}
void output_m(human* p) {
	int num, money;
	std::cout << "[��   ��]" << std::endl;
	std::cout << "����ID: ";
	std::cin >> num;
	std::cout << "��ݾ�: ";
	std::cin >> money;

	if ((p->anum) == num) {
		(p->money) = (p->money) - money;
		std::cout << "[��ݿϷ�] ";
	}

}