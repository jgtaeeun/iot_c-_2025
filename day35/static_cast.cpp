/*
	static_cast<typeid>(expression)
*/

//#include <iostream>
//
//int main(void) {
//	char ch;
//	int i = 100;
//	float f = 3.14;
//	double d = 2.345;
//
//	ch = static_cast<char>(i);
//	std::cout << ch << std::endl;    //�ƽ�Ű �ڵ� 100 <=> d
//	ch = (char)i;					//����� ����ȯ
//	std::cout << ch << std::endl;
//
//	d = static_cast<double>(f);     //float���� double���� ��ȯ�� ���е��� Ȯ���̹Ƿ� ���� ���� ������ ������ �״�� 3.14�� ��µ˴ϴ�.
//	std::cout << d<< std::endl;
//
//	//ū�ڷ����� �����ڷ������� ��ȯ�� �����Ͱ� �߶���.�����ʿ�
//	i = static_cast<int>(d);
//	std::cout << i << std::endl;
//
//	std::cout<< typeid(ch).name() << std::endl;   //char
//	std::cout << typeid(d).name() << std::endl;		//double
//	return 0;
//}