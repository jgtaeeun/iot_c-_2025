//#include <iostream>
//
//void swap(int*, int*);
//void swap(char*, char*);
//void swap(double*, double*);
//
//
//int main(void) {
//	int num1 = 20, num2 = 30;
//	swap(&num1, &num2);
//	std::cout << num1 << ' ' << num2 << std::endl;
//
//	char char1 = 'A', char2 = 'B';
//	swap(&char1, &char2);
//	std::cout << char1 << ' ' << char2 << std::endl;
//
//	double double1 = 1.111,	double2 = 5.555;
//	swap(&double1, &double2);
//	std::cout << double1 << ' ' << double2 << std::endl;
//	return 0;
//}
//
///*
//�����Ͱ� ����Ű�� ���� �ٲٴ� ���� ��ǥ�� ���, *a�� *b�� ����Ͽ� ���� ������ ���� ���� �����ؾ� �մϴ�.
//
//a = b;�� ����, a�� ���� b�� ����Ű�� �ּҸ� ����Ű�� �˴ϴ�. ������ ���� a�� ����Ű�� �ִ� ���� �ٲ��� �ʰ� �˴ϴ�.
//�׸��� a�� b �������� �ּҸ� �ٲٴ� �� ��ü�� �Լ� ���� �Ŀ��� �� �̻� �ǹ̰� ���� �˴ϴ�. 
//�Լ� ������ a�� b�� ����Ű�� �ּҰ� �ٲ�����, ���� ���� ��ȯ�� �̷������ �ʱ� �����Դϴ�.
//*/
//
//void swap(int* a , int* b){
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void swap(char* a, char* b) {
//	char temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void swap(double* a, double* b) {
//	double temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}