/*
�߰��ؾ��� �� - �ݾ��� -�ϰ�� ��ݸ��ϰ�/�Է°�(����, ����) ������ ������ ����ó��
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
//		std::cout << "1.���°���" << std::endl;
//		std::cout << "2.�Ա�" << std::endl;
//		std::cout << "3.���" << std::endl;
//		std::cout << "4.�������� ��ü���" << std::endl;
//		std::cout << "5.���α׷� ����" << std::endl;
//		std::cout << "����: ";
//		std::cin >> sel;
//
//		if (sel == 5) { // ���α׷� ���� ���� �������� �Ҵ�� �޸𸮸� ����
//			for (int i = 0; i < idx; i++) {
//				delete p[i];  // �������� �Ҵ�� �޸� ����
//			} 
//			break;
//		}
//		else if (sel == 4) { printf_acc(p, idx); }
//		else if (sel == 3) { output_m(p); }
//		else if (sel == 2) { input_m(p); }
//		else if (sel == 1) { p[idx] = makeAcc(); idx++; }
//		else { std::cout << "�޴��� �ٽ� �������ּ���" << std::endl; }
//
//		std::cout << std::endl;
//	}
//	return 0;
//}
//struct human* makeAcc() {
//	int num;
//	char name[100];
//	int inputmoney;
//	std::cout << "[���°���] " << std::endl;
//	std::cout << "����ID:  ";
//	std::cin >> num;
//	std::cout << "�̸�: ";
//	std::cin >> name;
//	std::cout << "�Աݾ�: ";
//	std::cin >> inputmoney;
//	
//	human* h = new human;  // �������� �޸� �Ҵ�
//	h->anum = num;
//	h->money = inputmoney;
//	strcpy(h->name, name);
//	return h;  // ���� �Ҵ�� ��ü�� ������ ��ȯ
//}
//
//void printf_acc(human** p, int c) {
//	for (int i = 0; i < c; i++) {
//		std::cout << "����ID: " << p[i]->anum << std::endl;
//		std::cout << "�̸�: " << p[i]->name << std::endl;
//		std::cout << "�ܾ�: " << p[i]->money << std::endl;
//		std::cout <<  std::endl;
//	}
//	
//}
//
//
//void input_m(human** p) {
//	int num, money;
//	std::cout << "[��   ��]" << std::endl;
//	std::cout << "����ID: ";
//	std::cin >> num;
//	std::cout << "�Աݾ�: ";
//	std::cin >> money;
//
//	for (int i = 0; i < 3; i++) {
//		if ((p[i]->anum) == num) {
//			(p[i]->money) = (p[i]->money) + money;
//			std::cout << "[�ԱݿϷ�] " << std::endl;
//			break;
//		}
//	}
//
//}
//void output_m(human** p) {
//	int num, money;
//	std::cout << "[��   ��]" << std::endl;
//	std::cout << "����ID: ";
//	std::cin >> num;
//	std::cout << "��ݾ�: ";
//	std::cin >> money;
//
//	for (int i = 0; i < 3; i++) {
//		if ((p[i]->anum) == num) {
//			(p[i]->money) = (p[i]->money) - money;
//			std::cout << "[��ݿϷ�] " << std::endl;
//			break;
//		}
//	}
//}