//#include <iostream>
//
//
//
//int main(void) {
//
//	int num = 10;
//	std::cout << ++num << std::endl;
//
//	const int num2 = 10;
//	//std::cout << ++num2 << std::endl;   //const�� ����̴�. lvalue�����ϴµ� �ƴϱ⿡ ��������.
//
// 
///*
//* const_cast ����: �߸��� ���
//��� ��ü num2�� ���� �����Ϸ��� �ϹǷ� ���ǵ��� ���� ������ �����մϴ�.
//num2�� ����� ����Ǿ� �ֱ� ������ �����Ϸ��� �̸� ����ȭ�� ���� ������, ���α׷��� ������ �������� ���� �� �ֽ��ϴ�.
//*/ 
// 
//	int* np = const_cast<int*>(&num2);
//	*np += 1;     //num2�� �ٲٴ� ���� ����⿡ �Ұ����ϴ�.
//	std::cout << num2 << std::endl;
//	return 0;
//}