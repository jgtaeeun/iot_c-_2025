//#include <iostream>
//
//template <typename T>	//���ø� ����(�Ϲ�ȭ)
//T func(T a, T b) {
//	std::cout << "T" << std::endl;
//	return a + b;
//}
//
//template<>				//���ø� Ư��ȭ- ���ø� �Ϲ�ȭ �� Ư���� Ÿ�Ը� ó��
//int func<int>(int a, int b) {
//	std::cout << "int" << std::endl;
//	return a + b;
//
//}
//
//int main(void) {
//	 /*
//	  ���⼭ 3�� 21�� int Ÿ������ �ڵ����� �߷еǾ� func<int>�� ȣ��˴ϴ�.
//	  �̶� "int"�� ��µǰ�, �� ���� ���� 24�� ��µ˴ϴ�.
//	 */
//	std::cout << func(3, 21) << std::endl;
//
//
//	/*
//	func(0.7, 9.9): 0.7�� 9.9�� double Ÿ������ �ڵ����� �߷еǾ� func<double>�� ȣ��˴ϴ�.
//	�̶� "T"�� ��µǰ�, 10.6�� ��µ˴ϴ�.
//	*/
//	std::cout << func(0.7, 9.9) << std::endl;
//
//
//	/*
//	 ���⼭�� ��������� ���ø��� double�� �����Ͽ� ȣ���մϴ�. 
//	 "T"�� ��µǰ�, 30.3�� ��µ˴ϴ�.
//	*/
//	std::cout << func<double>(10.1,20.2) << std::endl;    //����� ����
//
//	/*
//	��������� int Ÿ������ ȣ���ϹǷ� "int"�� ��µǰ�, 30�� ��µ˴ϴ�.
//	*/
//	std::cout << func<int>(10, 20) << std::endl;
//	return 0;
//}